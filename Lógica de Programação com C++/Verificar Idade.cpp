/*

    ***************************************************
    * O MAIS IMPORTANTE EM SE RESOLVER UM PROBLEMA    *
    * NÃO É A SOLUÇÃO EM SI, MAS O ESFORÇO DEDICADO   *
    * PARA ENCONTRAR ESSA SOLUÇÃO. A SOLUÇÃO FICA     *
    * NO PASSADO, MAS O ESFORÇO SEMPRE SERÁ USADO     *
    * NOVAMENTE NO FUTURO.                            *
    ***************************************************
 
      
    UM APLICATIVO PRECISA VERIFICAR A IDADE DOS PARTICIPANTES
    DE UM SHOW PARA PERMITIR A ENTRADA NO RECINTO. SÓ PODEM
    ENTRAR AQUELES QUE FOREM MAIORES DE 18 ANOS.
    FAÇA VERIFICAÇÕES ATÉ QUE O USUÁRIO DECIDA PARAR. ENTÃO,
    MOSTRE QUANTOS PARTICIPANTES ENTRARAM NO SHOW E QUANTOS
    FORAM IMPEDIDOS. 
*/


#include <iostream>
using namespace std;

#define IDADEPERMITIDA 18

int main()
{
    setlocale(LC_ALL,"");  // Ativa o uso de acentos
    // -------------------------------
    int idade, i, continuar,totalEntrou,totalBarrou;


    totalBarrou = 0;
    totalEntrou = 0;
    continuar = 1; // 1 = verdadeiro 0 = false
    
    while (continuar)
    
    
    {   
        system("cls");    
        cout << "INFORME A SUA IDADE: ";
        cin >> idade;
        
        if(idade > IDADEPERMITIDA)
        {
            cout << "OK, PODE ENTRAR, DIVIRTA-SE\n";
            totalEntrou++;
        }else{
            cout << "AH, NENÉM, VAI PRA CASA JOGAR MINECRAFT\n";
            totalBarrou++;
        }
        cout << "CONTINUAR ? 1 = SIM  0 = NÃO: ";
    cin >> continuar;
    }
    
    cout << "TOTAL DE PESSOAS QUE ENTRARAM: " << totalEntrou << "\n";
    cout << "TOTAL DE PESSOAS QUE FORAM BARRADAS: " << totalBarrou << "\n";
    cout << "TOTAL DE PESSOAS QUE CHEGARAM NA PORTARIA: " << totalEntrou + totalBarrou << "\n";
    // -------------------------------
    system("pause");
    return 0;
}


