#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");  // Ativa o uso de acentos

    // -------------------------------
    string categoria;
    int eixos = 0; // ao declarar o n�mero de eixos igual a 0, faz com que ao receber algo que n�o seja um n�mero, ele entenda que � diferente das condi��es imposta abaixo e retorna a mensagem de erro
    float valorPedagio;

    // Vai pedir a categoria do ve�culo para calculo do valor do pedagio
    cout << "Digite a categoria do ve�culo (passeio ou carga): ";
    cin >> categoria;

    if (categoria == "passeio")
    {
        valorPedagio = 1.20;
    }
    else if (categoria == "carga")
    {
        cout << "Digite o n�mero de eixos do ve�culo: ";
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
            cout << "N�mero de eixos inv�lido." << "\n";
            system("pause");
            return 1;
        }
    }
    else
    {
        cout << "Categoria de ve�culo inv�lida." << "\n";
        system("pause");
        return 1;
    }

    // Exibir o valor do ped�gio
    cout << "O valor do ped�gio para o ve�culo de categoria " << categoria << " �: R$" << valorPedagio << "\n";

    // -------------------------------
    system("pause");
    return 0;
}

