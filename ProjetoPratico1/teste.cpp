#include <iostream>

#define PASSO 24
#define COR 16
#define POS 9
#define VEL 3
#define OLEO 0

// Função para empacotar as informações
uint32_t Empacotar(uint8_t passo, uint8_t cor, uint8_t pos, uint8_t vel, uint8_t oleo)
{
	// Certifica se os valores estão dentro dos limites esperados
	if (passo > 255 || cor > 255 || pos > 127 || vel > 10 || ) {
		std::cerr << "Erro: Valores fora dos limites esperados." << std::endl;
		return 0;
	}

	// inicializando o resultado como zero
	uint32_t resultado = 0;

	// Utilizando operadores bit a bit para empacotar as informações
	resultado |= (passo << PASSO);
	resultado |= (cor << COR);
	resultado |= (pos << POS);
	resultado |= (vel << VEL);
	resultado |= (oleo << OLEO);

	return resultado;
}