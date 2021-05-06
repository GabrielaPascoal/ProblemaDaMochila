#include <iostream>
#include "genetico.h"
#include "binario.h"
using namespace std;


bool avaliacao(unsigned short n1)
{ /*variáveis para armazenar peso e valor.*/
	int peso = 0;	
	int valor = 0; 

	if (TestarBit(n1, 0) != 0) 
	{
		peso = peso + 1;
		valor = valor + 12;
	}
	if (TestarBit(n1, 1) != 0)
	{
		peso = peso + 4;
		valor = valor + 4;
	}
	if (TestarBit(n1, 2) != 0)
	{
		peso = peso + 2;
		valor = valor + 3;
	}
	if (TestarBit(n1, 3) != 0)
	{
		peso = peso + 5;
		valor = valor + 10;
	}
	if (TestarBit(n1, 4) != 0)
	{
		peso = peso + 4;
		valor = valor + 15;
	}
	if (TestarBit(n1, 5) != 0)
	{
		peso = peso + 2;
		valor = valor + 20;
	}
	if (TestarBit(n1, 6) != 0)
	{
		peso = peso + 1;
		valor = valor + 10;
	}
	if (TestarBit(n1, 7) != 0)
	{
		peso = peso + 4;
		valor = valor + 2;
	}
	if (TestarBit(n1, 8) != 0)
	{
		peso = peso + 3;
		valor = valor + 1;
	}
	if (TestarBit(n1, 9) != 0)
	{
		peso = peso + 2;
		valor = valor + 1;
	}
	if (TestarBit(n1, 10) != 0)
	{
		peso = peso + 1;
		valor = valor + 3;
	}
	if (TestarBit(n1, 11) != 0)
	{
		peso = peso + 9;
		valor = valor + 15;
	}
	if (TestarBit(n1, 12) != 0)
	{
		peso = peso + 4;
		valor = valor + 10;
	}
	if (TestarBit(n1, 13) != 0)
	{
		peso = peso + 5;
		valor = valor + 8;
	}
	if (TestarBit(n1, 14) != 0)
	{
		peso = peso + 3;
		valor = valor + 4;
	}
	if (TestarBit(n1, 15) != 0)
	{
		peso = peso + 12;
		valor = valor + 4;
	}

	cout << right; cout.width(6); cout << n1 << " - $" << valor << " - ";
	cout << right; cout.width(2); cout << peso << "Kg -";

	/*Condição que diz se o peso passa ou não o valor máximo permitido */
	if (peso <= 20) 
	{
		return true;
	}
	else 
	{
		return false;
	} 
}

int pontoUnico (unsigned short n1, unsigned short n2) /*recebe dois valores inteiros representando as soluções e
retorna um valor inteiro representando o cruzamento de ponto único entre as soluções.*/
{
	unsigned short cruzamentoPU;
	cruzamentoPU = bitsAltos(n1) + bitsBaixos(n2);

	return cruzamentoPU;
}

int aritmetico(unsigned short n1, unsigned short n2)/*recebe dois valores inteiros representando as soluções e
retorna um valor inteiro representando o cruzamento aritmético entre as soluções.*/
{
	unsigned short cruzamentoAR;
	cruzamentoAR = ANDbinario(n1, n2);

	return cruzamentoAR;
}

int mutacaoSimples(unsigned short n1) /*recebe um valor inteiro representando uma solução e retorna um
valor inteiro representando a mutação simples da solução.*/
{
	unsigned short mutacaoS;
    if (TestarBit(n1, 9))
	{
		mutacaoS = desligarBit(n1, 9);
	}
	else
	{
	     mutacaoS = ligarBit(n1, 9);
	}
	return mutacaoS;
}

int mutacaoDupla(unsigned short n1) /*recebe um valor inteiro representando uma solução e retorna um valor
inteiro representando a mutação dupla da solução.*/
{
	unsigned short mutacaoD;

	if (TestarBit(n1, 3))
	{
		mutacaoD = desligarBit(n1, 3);
	}
	else
	{
		mutacaoD = ligarBit(n1, 3);
	}

	if (TestarBit(mutacaoD, 12)) 
	{
		mutacaoD = desligarBit(mutacaoD, 12);	
	}
	else
	{
		mutacaoD = ligarBit(mutacaoD, 12);	
	}

	return mutacaoD;
}