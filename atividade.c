
int vazia(Arv* tree){

	return tree == NULL;
}

int contarNos(Arv* tree){

	int cont = 0;

	if (!vazia(tree))
	{
		cont++;
		cont += contarNos(tree->esq);
		cont += contarNos(tree->dir);
		return cont;
	}

	return 0;
}

int somarConteudo(Arv* tree){
	int soma = 0;

	if (!vazia(tree))
	{
		soma = tree->info;
		soma += somarConteudo(tree->esq);
		soma += somarConteudo(tree->dir);

		return soma;
	}

	return 0;

}

int profundidade(Arv* tree){

	int prof = 0;

	if (!vazia(tree))
	{

		if (!vazia(tree->esq || !vazia(tree->dir)))
		{
			prof++;
			prof += profundidade(tree->esq);
			prof += profundidade(tree->dir);
		}

	}

	return prof;

}

int int main(int argc, char const *argv[])
{
	int qtdNos,soma,profundidade;
	Arv* tree;

	qtdNos = contarNos(tree);
	soma = somarConteudo(tree);
	profundidade = profundidade(tree);

	return 0;
}