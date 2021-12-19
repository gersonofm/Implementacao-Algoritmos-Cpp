//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 16 de dezembro de 2021
//
//Atividade de Alinhamento I - C++

#include <iostream>
// importação das classes
#include "Adicao.hpp"
#include "CombustivelGasto.hpp"
#include "ContagemNumeros.hpp"
#include "ConversaoFahrenheit.hpp"
#include "ConversaoPolegadas.hpp"
#include "Desconto.hpp"
#include "DescontoINSS.hpp"
#include "Divisivel.hpp"
#include "Hipotenusa.hpp"
#include "MediaAritmetica.hpp"
#include "Multiplo3.hpp"
#include "RETRI.hpp"
#include "SalarioLiquido.hpp"

using namespace std;

int main() {

	// instanciamento dos objetos
	MediaAritmetica mediaAritmetica;
	Hipotenusa hipotenusa;
	Desconto desconto;
	SalarioLiquido salarioLiquido;
	ConversaoFahrenheit conversao;
	CombustivelGasto consumo;
	Adicao adicao;
	Multiplo3 multiploDe3;
	Divisivel divisivel;
	DescontoINSS DescontoPrevidencia;
	ContagemNumeros contagemNumeros;
	ConversaoPolegadas convertepolegada;
	RETRI retri;

	// criação do Menu
	int menu = true;

	// abertura
	cout << endl;
	cout << "    ______________________________________ " << endl;
	cout << "   |  __________________________________  | " << endl;
	cout << "   | |                                  | | " << endl;
	cout << "   | |                                  | | " << endl;
	cout << "   | |              DEV:                | | " << endl;
	cout << "   | | Gerson Otavio Fernandes Moreira  | | " << endl;
	cout << "   | |                                  | | " << endl;
	cout << "   | | Atividade de Alinhamento I - C++ | | " << endl;
	cout << "   | |                                  | | " << endl;
	cout << "   | |                                  | | " << endl;
	cout << "   | |__________________________________| | " << endl;
	cout << "   |______________________________________| " << endl;

	do
	{
	// cabeçalho do Menu
	cout << endl;
	cout << "|---------------------------------------------|" << endl;
	cout << "|Selecione a atividade que deseja executar:   |" << endl;
	cout << "|                                             |" << endl;
	cout << "|[1]  Media Aritmetica de 3 Numeros           |" << endl;
	cout << "|[2]  Calculo da Hipotenusa                   |" << endl;
	cout << "|[3]  Desconto Produto                        |" << endl;
	cout << "|[4]  Calculo Salario Liquido                 |" << endl;
	cout << "|[5]  Conversao de Temperatura                |" << endl;
	cout << "|[6]  Consumo Veiculo                         |" << endl;
	cout << "|[7]  Adicao                                  |" << endl;
	cout << "|[8]  Numeros Multiplos de 3                  |" << endl;
	cout << "|[9]  Divisivel por 10, 5 e 2                 |" << endl;
	cout << "|[10] Desconto INSS                           |" << endl;
	cout << "|[11] Impressao de 100 ate 1                  |" << endl;
	cout << "|[12] Conversao de Polegadas para Centimetros |" << endl;
	cout << "|[13] Classe RETRI                            |" << endl;
	cout << "|[0]  SAIR                                    |" << endl;
	cout << "|---------------------------------------------|" << endl;
	cout << endl;

		// entrada da escolha pelo usuário
		cin >> menu;

		switch (menu) {

		case 1:
			// Atividade 1
			mediaAritmetica.entrada_usuario();
			mediaAritmetica.calcula_media();
			mediaAritmetica.imprime_resultado();
			// Fim Atividade 1
			break;

		case 2:
			// Atividade 2
			hipotenusa.entrada_usuario();
			hipotenusa.teorema_pitagoras();
			hipotenusa.imprime_resultado();
			// Fim Atividade 2
			break;

		case 3:
			// Atividade 3
			desconto.entrada_valor();
			desconto.calcula_desconto();
			desconto.valorFinalComDesconto();
			desconto.imprimeValorFinal();
			// Fim Atividade 3
			break;

		case 4:
			// Atividade 4
			salarioLiquido.entrada_usuario();
			salarioLiquido.salario_bruto();
			salarioLiquido.desconto_INSS();
			salarioLiquido.salario_liquido();
			salarioLiquido.imprime_resultado();
			// Fim Atividade 4
			break;

		case 5:
			// Atividade 5
			conversao.entrada_usuario();
			conversao.conversao();
			conversao.imprime_conversao();
			// Fim Atividade 5
			break;

		case 6:
			// Atividade 6
			consumo.entrada_usuario();
			consumo.quantidade_litros_gastos();
			consumo.imprime_litros_gastos();
			// Fim Atividade 6
			break;

		case 7:
			// Atividade 7
			adicao.entrada_usuario();
			adicao.condicao_se();
			// Fim Atividade 7
			break;

		case 8:
			// Atividade 8
			multiploDe3.entrada_usuario();
			multiploDe3.condicao_multiplo();
			// Fim Atividade 8
			break;

		case 9:
			// Atividade 9
			divisivel.entrada_usuario();
			divisivel.condicao_divisivel();
			// Fim Atividade 9
			break;

		case 10:
			// Atividade 10
			DescontoPrevidencia.entrada_usuario();
			DescontoPrevidencia.calcula_INSS();
			// Fim Atividade 10
			break;

		case 11:
			// Atividade 11
			contagemNumeros.laco_repeticao();
			// Fim Atividade 11
			break;

		case 12:
			// Atividade 12
			convertepolegada.laco_repeticao();
			// Fim Atividade 12
			break;

		case 13:
			// Atividade 13
			retri.entrada_usuario();
			retri.calcula_area();
			retri.imprime_resultado();
			// Fim Atividade 13
			break;

		case 0:
			system("cls || clear");
			// Saindo do menu
			cout << endl;
			cout << "Saindo ..." << endl;
			
		}
	}
	while (menu != 0); // ponto de parada do do/while
}