#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "cores.cpp"
#include "rede.cpp"
using namespace std;

void Desenhar1(int, int);
void Desenhar2(int, int);
void WhiteSpace(int);

#define YELLOW 220;
#define yellow "\033[1;33;44m"
#define black "\033[7;37;40m"
#define green "\033[32m"
#define red "\033[4;31m"
#define foreg "\033[38;5;154m"
#define backg "\033[38;5;0;48;5;154m"
#define default "\033[m"

#define verde "33[32m"
#define WHITE "33[37m"

int cor_texto;
int cor_fundo;

// inicialização de Dados:

int posA = 0;
int posB = 0;

int velA = 0;
int velB = 0;

int corB = 240;
int corA = 230;

bool estadoA = 1;
bool estadoB = 1;


int main()
{
	int nova_velA, nova_velB;
	int nova_posA, nova_posB;
	bool novo_estadoA, novo_estadoB;

	int passo = 0;
	do
	{
		srand(unsigned(time(NULL)));

		// Limpa a tela
		system("cls");

		// Desenha os caminhões A e B
		Desenhar1(posA, corA);
		Desenhar2(posB, corB);

		//Atualiza velocidade do Caminhão A
		nova_velA = 1 + rand() % (10);

		// Atualiza velocidade do Caminhão B
		nova_velB = 1 + rand() % (10);

		// Atualiza estado da pista do caminhão A
		novo_estadoA = 0 + rand() % (1);

		// Atualiza estado da pista do caminhão B
		novo_estadoB = 0 + rand() % (1);

		cout << endl;
		cout << endl;

		// Transmite dados do caminhão A
		cout << "Transmitindo dados..." << endl;
		TransmitirA(passo, corA, posA, velA, estadoA);

		// Recebe dados do Caminhão A
		cout << "Recebendo dados..." << endl;
		Receber();
		cout << "Processando dados...";
		cout << endl;
		//Calcula próxima posição do caminhão A
		nova_posA = Processar(rede);
		cout << "Próxima posisão: " << nova_posA << endl;
		int pos_A = nova_posA;
		int velA = nova_velA;
		int estadoA = novo_estadoA;

		cout << endl;
		cout << endl;

		// Transmite dados do caminhão B
		cout << "Transmitindo dados..." << endl;
		TransmitirB(passo, corB, posB, velB, estadoB);

		// Recebe Dados do caminhão B
		cout << "Recebendo dados..." << endl;
		Receber2();
		cout << "Processando dados...";
		cout << endl;
		//Calcula próxima posição do caminhão B
		nova_posB = Processar(rede);
		cout << "Próxima posição: " << nova_posB << endl;
		int pos_B = nova_posB;
		int velB = nova_velB;
		int estadoB = novo_estadoB;

		// Aguarda pressionamento de tecla
		system("PAUSE > null");


		passo = passo + 1;
	} 
	while (posA <= 100 && posB <= 100);

	// Limpa tela
	// Desenha caminhões
	// Exibe resultado

	return 0;
}


void Desenhar1(int posicao, int cor_caminhao)
{
	//AjustarCor(cor_texto, cor_fundo);

	system("chcp 850 > nul");
	cout << "\n\33[32m\n";
	cout << "\xDB\xDB\xDB\xDB\xDB\xDB \xDB\xDC\xDC\t\n";
	cout << "\xDFOO\xDF\xDF\xDF\xDF\xDFO\xDF\t\n";
	cout << "----------------------------------------------------------------------------------------------------100-----------------";
	cout << "\n\n";

	//ResetarCor();
}


void Desenhar2(int posicao, int cor_caminhao)
{
	system("chcp 850 > nul");
	cout << "\n\33[33m\n";
	cout << "\xDB\xDB\xDB\xDB\xDB\xDB \xDB\xDC\xDC\t\n";
	cout << "\xDFOO\xDF\xDF\xDF\xDF\xDFO\xDF\t\n";
	cout << "----------------------------------------------------------------------------------------------------100-----------------";
	cout << "\n\33[37m\n";
}

void WhiteSpace(int qtd)
{
	while (qtd --> 0)
		cout << ' ';
}