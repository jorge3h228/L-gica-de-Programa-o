/*

    ***************************************************
    * O MAIS IMPORTANTE EM SE RESOLVER UM PROBLEMA    *
    * N�O � A SOLU��O EM SI, MAS O ESFOR�O DEDICADO   *
    * PARA ENCONTRAR ESSA SOLU��O. A SOLU��O FICA     *
    * NO PASSADO, MAS O ESFOR�O SEMPRE SER� USADO     *
    * NOVAMENTE NO FUTURO.                            *
    ***************************************************

    
    FA�A UMA QUANTIDADE DETERMINADA DE COMPARA��ES
    ENTRE DOIS VALORES. QUANDO TERMINAR AS COMPARA��ES
    APRESENTE  QUANTOS TESTES FORAM
    VERDADEIROS E QUANTOS TESTES FORAM FALSOS.
    
*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");  // Ativa o uso de acentos
    // -------------------------------

    int valor,outroValor, i, vezes, totalFalso, totalVerdadeiro;
    
    totalVerdadeiro = 0;
    totalFalso = 0;
    
    cout << "QUANTAS VEZES VAI COMPARAR \n";
    cin >> vezes;
    
    
    for (i=0;i<vezes;i++)
    {
        system ("cls"); //Limpa tela
        cout << "QUAL PRIMEIRO VALOR DESEJA COMPARAR \n";
        cin >> valor;
        
        cout << "QUAL OUTRO VALOR DESEJA COMPARAR \n";
        cin >> outroValor;
        cout << "ESTA � A COMPARA��O: " << i+1 << "\n";
        if(valor == outroValor)
        {
            cout << "� VERDADEIRO\n";
            totalVerdadeiro = totalVerdadeiro++;
        }else{
            cout << "� FALSO\n";
            totalFalso++;
        }
        system ("pause>null"); // pause sem mensagem
    }
    
    cout << "TOTAL DE RESULTADOS VERDADEIROS: " << totalVerdadeiro << "\n";
    cout << "TOTAL DE RESULTADOS FALSOS: " << totalFalso << "\n";
   

     

    // -------------------------------
    system("pause");
    return 0;
}







