#include <iostream>
#include "genetico.h"
using namespace std;

#define green "\033[32m"
#define red  "\033[31m"
#define default  "\033[m"


int main()
{
	unsigned short solucao1, solucao2, solucao3, solucao4, solucao5, solucao6; /*os valores de entrada digitados pelo usuário serão armazenados nessas variáveis.*/

	cout << "Entre com 6 solucoes iniciais (numeros entre 0 e 65535): " << endl;
	cin >> solucao1;
	cin >> solucao2;
	cin >> solucao3;
	cin >> solucao4;
	cin >> solucao5;
	cin >> solucao6;

	cout << "  Resultado da avaliacao " << endl;
	cout << " --------------------------" << endl;

	/*SOLUÇÃO 1*/
	if (avaliacao(solucao1))
	{
		cout << green << "OK" << default << endl;

	}
	else
	{
		cout << red << "X" << default << endl;
	}

	/*SOLUÇÃO 2*/
	if (avaliacao(solucao2))
	{
		cout << green << "OK" << default << endl;

	}
	else
	{
		cout << red << "X" << default << endl;
	}

	/*SOLUÇÃO 3*/
	if (avaliacao(solucao3))
	{
		cout << green << "OK" << default << endl;

	}
	else
	{
		cout << red << "X" << default << endl;
	}

	/*SOLUÇÃO 4*/
	if (avaliacao(solucao4))
	{
		cout << green << "OK" << default << endl;

	}
	else
	{
		cout << red << "X" << default << endl;
	}

	/*SOLUÇÃO 5*/
	if (avaliacao(solucao5))
	{
		cout << green << "OK" << default << endl;

	}
	else
	{
		cout << red << "X" << default << endl;
	}

	/*SOLUÇÃO 6*/
	if (avaliacao(solucao6))
	{
		cout << green << "OK" << default << endl;

	}
	else
	{
		cout << red << "X" << default << endl;
	}

	cout << " --------------------------" << endl;
	/*----------------------------------------------------------------*/

	/*Adicionando cruzamento ponto único nas soluções 1 e 2.*/
	if (avaliacao(pontoUnico(solucao1, solucao2)) == 1) {

		cout << green << "OK" << default << endl;
	}
	else {
		cout << red << "X" << default << endl;
	}

	/*Adicionando cruzamento aritmetico nas soluções 3 e 4.*/
	if (avaliacao(aritmetico(solucao3, solucao4)) == 1) {

		cout << green << "OK" << default << endl;
	}
	else {
		cout << red << "X" << default << endl;
	}

	/*Adicionando mutação simples na solução 5.*/
	if (avaliacao(mutacaoSimples(solucao5)) == 1) {

		cout << green << "OK" << default << endl;
	}

	else {
		cout << red << "X" << default << endl;
	}

	/*Adicionando mutação dupla na solução 6.*/
	if (avaliacao(mutacaoDupla(solucao6)) == 1) {

		cout << green << "OK" << default << endl;
	}

	else {
		cout << red << "X" << default << endl;
	}

	return 0;

}