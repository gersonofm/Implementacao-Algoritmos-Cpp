//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 15 de dezembro de 2021
//
//Implementar em C++ a classe chamada de RETRI, onde essa
//classe é responsável por calcular a área do Triangulo e também do Retângulo.

// incluir apenas uma vez no processo de compilação
#pragma once

// classe
class RETRI
{
// atributos
private:
	double base;
	double altura;
	double areaTriangulo;
	double areaRetangulo;

// métodos
public:
	void entrada_usuario();
	void calcula_area();
	void imprime_resultado();
};

