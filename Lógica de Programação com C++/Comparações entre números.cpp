/*

    ***************************************************
    * O MAIS IMPORTANTE EM SE RESOLVER UM PROBLEMA    *
    * NÃO É A SOLUÇÃO EM SI, MAS O ESFORÇO DEDICADO   *
    * PARA ENCONTRAR ESSA SOLUÇÃO. A SOLUÇÃO FICA     *
    * NO PASSADO, MAS O ESFORÇO SEMPRE SERÁ USADO     *
    * NOVAMENTE NO FUTURO.                            *
    ***************************************************

    
    FAÇA UMA QUANTIDADE DETERMINADA DE COMPARAÇÕES
    ENTRE DOIS VALORES. QUANDO TERMINAR AS COMPARAÇÕES
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
        cout << "ESTA É A COMPARAÇÃO: " << i+1 << "\n";
        if(valor == outroValor)
        {
            cout << "É VERDADEIRO\n";
            totalVerdadeiro = totalVerdadeiro++;
        }else{
            cout << "É FALSO\n";
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







