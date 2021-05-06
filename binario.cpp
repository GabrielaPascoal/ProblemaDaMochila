#include "binario.h"
#include "genetico.h"

unsigned short ANDbinario(unsigned short n1, unsigned short n2) /*Função para operação AND: recebe dois valores inteiros e retorna um inteiro representando o
resultado da operação AND bit a bit entre os números recebidos. */
{
	return n1 & n2;
}

unsigned short ORbinario(unsigned short n1, unsigned short n2) /*Função para operação OR: recebe dois valores inteiros e retorna um inteiro representando o resultado
da operação OR bit a bit entre os números recebidos.*/
{
	return n1 | n2;
}

unsigned short ligarBit(unsigned short n1, unsigned short posicaoBit)
{
	unsigned short mascara = 1; 
	unsigned short valor;  /* valor inteiro resultante da modificação do bit.*/

	valor = ORbinario(n1, (mascara << posicaoBit));

	return valor;

}

unsigned short desligarBit(unsigned short n1, unsigned short posicaoBit)
{
	unsigned short mascara = 1;
	unsigned short valor;  /* valor inteiro resultante da modificação do bit.*/

	valor = ANDbinario(n1, ~(mascara << posicaoBit));

	return valor;
}

unsigned short TestarBit(unsigned short n1, unsigned short posicaoBit) /* recebe um valor inteiro e a posição do bit a ser testado, retornando um
booleano para indicar se o bit está ou não ligado*/
{
	unsigned short mascara = 1;
	mascara = (mascara << posicaoBit);
	if (n1 & mascara)
	{
		return true;
	}
	else 
	{
		return false;
	} /*Operação AND realizada caso o bit esteja ligado, retornando valor true(1). Caso contrário retorna false(0).*/

}
unsigned short bitsBaixos(unsigned short n1) /* recebe um valor inteiro e retorna outro contendo apenas os 8 bits de mais
baixa ordem do valor original, com os demais bits colocados para zero.*/
{
	unsigned short valor = 0;
	unsigned short mascara = 1;
	int i;

	for (i = 0; i < 8; i++)
	{
		valor += ANDbinario(n1, (mascara << i));

	}
	return valor;
}
unsigned short bitsAltos(unsigned short n1) /*recebe um valor inteiro e retorna outro contendo apenas os 8 bits de ordem
mais alta do valor original, com os demais bits colocados para zero.*/
{
	unsigned short valor = 0;
	unsigned short mascara = 1;
	int i;

	for (i = 8; i < 16; i++)
	{
		valor += ANDbinario(n1, (mascara << i));

	}
	return valor;
}