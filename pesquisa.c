#include <stdio.h>
#include <stdlib.h>
#define TIPO int
TIPO buscaBinariaInterativa(int chave, int *items, int i, int f)
{
	while (i <= f) 
	{
		int meio = i + (f - i / 2);
		if (items[meio] == chave)
			return meio;
		if (items[meio] < chave)
			i = meio + 1;
		else
		       	f = meio - 1;
	}
	return -1;
}
TIPO buscaBinariaRecursiva(int chave, int *items, int i, int f)
{
	if (i <= f) 
	{
		int meio = i + (f - i / 2);
		if (items[meio] == chave)
			return meio;
		if (items[meio] > chave)
			return bs(chave, items, i, meio - 1);
		else
			return bs(chave, items, meio + 1, f);
	}
	return -1;
}
TIPO buscaSequencial(int chave, int *items, int num)
{
	for(int i = 0; i < num; i++)
		if(items[i] == chave)
			return i;
	return -1;
}

