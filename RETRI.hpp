//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 15 de dezembro de 2021
//
//Implementar em C++ a classe chamada de RETRI, onde essa
//classe � respons�vel por calcular a �rea do Triangulo e tamb�m do Ret�ngulo.

// incluir apenas uma vez no processo de compila��o
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

// m�todos
public:
	void entrada_usuario();
	void calcula_area();
	void imprime_resultado();
};

