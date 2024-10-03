#include <iostream>
#include <conio.c>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");  // Ativa o uso de acentos
    // -------------------------------
    const float SALARIO_FIXO = 1500.0;
    const float COMISSAO = 0.2;
    
   
    string nomeFuncionario;
    float vendasAlcancadas, metaVendas;
    
 
    cout << "Informe o nome do funcionario: ";
    cin >> nomeFuncionario;
    cout << "Informe o valor total de vendas alcancado (em reais): ";
    cin >> vendasAlcancadas;
    cout << "Informe a meta de vendas (em reais): ";
    cin >> metaVendas;
    

    float salario;
    if (vendasAlcancadas >= metaVendas) {
        salario = SALARIO_FIXO + (vendasAlcancadas * COMISSAO);
    } else {
        salario = SALARIO_FIXO;
    }
    
    
    cout << "Nome do funcionario: " << nomeFuncionario << "\n";
    cout << "Salario: R$ " << salario << "\n";
    
    
    // -------------------------------
    system("pause");
    return 0;
}
