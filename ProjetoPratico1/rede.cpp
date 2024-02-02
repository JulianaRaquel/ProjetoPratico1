
#include <iostream>
using namespace std;
#include "pacote.cpp"

int rede;


void TransmitirA(unsigned int passo, unsigned int cor_caminhao, unsigned int pos_atual, unsigned int vel, unsigned int estado)
{
	rede = Empacotar(passo, cor_caminhao, pos_atual, vel, estado);
	cout << rede << endl;
}

void TransmitirB(unsigned int passo, unsigned int cor_caminhao, unsigned int pos_atual, unsigned int vel, unsigned int estado)
{
	rede = Empacotar(passo, cor_caminhao, pos_atual, vel, estado);
	cout << rede << endl;
}

int Receber()
{
	int p, pos, v, est;

	p = Passo(rede);
	cout << "Frame " << p << " ";
	pos = Posicao(rede);
	cout << "Pos " << pos << " ";
	v = Velocidade(rede);
	cout << "Vel " << v << " ";
	est = Estado(rede);
	if (est == 1)
		cout << "Oil " << "true" << endl;
	else
		cout << "Oil " << "false" << endl;

	return rede;
}

int Receber2()
{
	int p, pos, v, est;

	p = Passo(rede);
	cout << "Frame " << p << " ";
	pos = Posicao(rede);
	cout << "Pos " << pos << " ";
	v = Velocidade(rede);
	cout << "Vel " << v << " ";
	est = Estado(rede);
	if (est == 1)
		cout << "Oil " << "true" << endl;
	else
		cout << "Oil " << "false" << endl;

	return rede;
}

int Processar(unsigned int num)
{
	int nova_posicao;

	int pos_atual = ((num >> POS) & 0x7F);
	int vel = ((num >> VEL) & 0x0F);
	int estado = ((num >> ESTADO) & 0x01);

	nova_posicao = pos_atual + vel - estado;

	return nova_posicao;
}