#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");  // Ativa o uso de acentos

    // -------------------------------
    string categoria;
    int eixos = 0; // ao declarar o número de eixos igual a 0, faz com que ao receber algo que não seja um número, ele entenda que é diferente das condições imposta abaixo e retorna a mensagem de erro
    float valorPedagio;

    // Vai pedir a categoria do veículo para calculo do valor do pedagio
    cout << "Digite a categoria do veículo (passeio ou carga): ";
    cin >> categoria;

    if (categoria == "passeio")
    {
        valorPedagio = 1.20;
    }
    else if (categoria == "carga")
    {
        cout << "Digite o número de eixos do veículo: ";
        cin >> eixos;

        if (eixos == 2)
        {
            valorPedagio = 1.50 * eixos;
        }
        else if (eixos == 3)
        {
            valorPedagio = 1.70 * eixos;
        }
        else if (eixos >= 4 && eixos <= 8)
        {
            valorPedagio = 2.00 * eixos;
        }
        else if (eixos > 8)
        {
            valorPedagio = 2.50 * eixos;
        }
        else 
        {
            cout << "Número de eixos inválido." << "\n";
            system("pause");
            return 1;
        }
    }
    else
    {
        cout << "Categoria de veículo inválida." << "\n";
        system("pause");
        return 1;
    }

    // Exibir o valor do pedágio
    cout << "O valor do pedágio para o veículo de categoria " << categoria << " é: R$" << valorPedagio << "\n";

    // -------------------------------
    system("pause");
    return 0;
}

