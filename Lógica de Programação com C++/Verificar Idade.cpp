/*

    ***************************************************
    * O MAIS IMPORTANTE EM SE RESOLVER UM PROBLEMA    *
    * N�O � A SOLU��O EM SI, MAS O ESFOR�O DEDICADO   *
    * PARA ENCONTRAR ESSA SOLU��O. A SOLU��O FICA     *
    * NO PASSADO, MAS O ESFOR�O SEMPRE SER� USADO     *
    * NOVAMENTE NO FUTURO.                            *
    ***************************************************
 
      
    UM APLICATIVO PRECISA VERIFICAR A IDADE DOS PARTICIPANTES
    DE UM SHOW PARA PERMITIR A ENTRADA NO RECINTO. S� PODEM
    ENTRAR AQUELES QUE FOREM MAIORES DE 18 ANOS.
    FA�A VERIFICA��ES AT� QUE O USU�RIO DECIDA PARAR. ENT�O,
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
            cout << "AH, NEN�M, VAI PRA CASA JOGAR MINECRAFT\n";
            totalBarrou++;
        }
        cout << "CONTINUAR ? 1 = SIM  0 = N�O: ";
    cin >> continuar;
    }
    
    cout << "TOTAL DE PESSOAS QUE ENTRARAM: " << totalEntrou << "\n";
    cout << "TOTAL DE PESSOAS QUE FORAM BARRADAS: " << totalBarrou << "\n";
    cout << "TOTAL DE PESSOAS QUE CHEGARAM NA PORTARIA: " << totalEntrou + totalBarrou << "\n";
    // -------------------------------
    system("pause");
    return 0;
}


