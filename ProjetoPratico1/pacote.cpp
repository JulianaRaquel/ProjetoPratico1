#include <iostream>


#define PASSO 24
#define COR 16
#define POS 9
#define VEL 3
#define ESTADO 0

// Função para empacotar as informações
uint32_t Empacotar(uint8_t passo, uint8_t cor_caminhao, uint8_t pos_atual, uint8_t vel, uint8_t estado)
{
	int resultado;
	// Certifica se os valores estão dentro dos limites esperados
	//if (passo > 255 || cor_caminhao > 255 || pos_atual > 127 || vel > 10) {
		//std::cerr << "Erro: Valores fora dos limites esperados." << std::endl;
		//return 0;
	//}

	//inicializando o resultado como zero
	//uint32_t resultado = 0;

	// Utilizando operadores bit a bit para empacotar as informações
	resultado |= (passo << PASSO);
	resultado |= (cor_caminhao << COR);
	resultado |= (pos_atual << POS);
	resultado |= (vel << VEL);
	resultado |= (estado << ESTADO);

	return resultado;
}

int Passo(unsigned int numero)
{
	int passo = ((numero >> PASSO) & 0xFF);

	return passo;
}

int Cor(unsigned int numero)
{
	int cor = ((numero >> COR) & 0xFF);

	return cor ;
}

int Posicao(unsigned int numero)
{
	int pos = ((numero >> POS) & 0x7F);

	return pos;
}

int Velocidade(unsigned int numero)
{
	int vel = ((numero >> VEL) & 0x0F);

	return vel;
}

int Estado(unsigned int numero)
{
	int estado = ((numero >> ESTADO) & 0x01);

	return estado;
}