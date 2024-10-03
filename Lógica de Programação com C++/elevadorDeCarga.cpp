/*
    
    ***************************************************
    * O MAIS IMPORTANTE EM SE RESOLVER UM PROBLEMA    *
    * N�O � A SOLU��O EM SI, MAS O ESFOR�O DEDICADO   *
    * PARA ENCONTRAR ESSA SOLU��O. A SOLU��O FICA     *
    * NO PASSADO, MAS O ESFOR�O SEMPRE SER� USADO     *
    * NOVAMENTE NO FUTURO.                            *
    ***************************************************
    
    
    01 UMA CONSTRUTORA ADQUIRIU UM ELEVADOR DE CARGA COM INTELIG�NCIA ARTIFICIAL.
    
    QUANDO UMA CARGA � COLOCADA NO ELEVADOR, IMEDIATAMENTE ELE VERIFICA SE TEM
    CONDI��O DE SUBIR COM A CARGA, POR QUE ELE POSSUI UM LIMITE OPERACIONAL.
    
    CRIE O C�DIGO PARA ESTE ELEVADOR.
    
    AO FINAL DO PROGRAMA, APRESENTE QUANTAS VEZES O ELEVADOR SUBIU, QUANTAS
    VEZES O PESO FOI EXCEDIDO E O TOTAL DE CARGA QUE FOI TRANSPORTADO NO 
    PER�ODO.
    
*/


#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");  // Ativa o uso de acentos
    
    
    
    int cargaMaxima, cargaUtilizada, continuar, vezesSubiu, vezesNaoSubiu, totalCarga;
    
    // Preparando as vari�veis que ser�o usadas no la�o
    continuar      = 1;
    vezesSubiu     = 0;
    vezesNaoSubiu  = 0;
    totalCarga = 0;
    while(continuar)
    {    
        system("cls"); // limpa a tela antes de come�ar o la�o
        cout << "INFORME A CARGA M�XIMA QUE O ELEVADOR PODE LEVAR: ";
        cin >> cargaMaxima;
        
        cout << "INFORME A CARGA QUE VOC� QUER QUE O ELEVADOR SUBA: ";
        cin >> cargaUtilizada;
        
        if(cargaUtilizada <= cargaMaxima)
        {
            cout << "OK, ELEVADOR LIBERADO PARA SUBIR\n";
            vezesSubiu++;
            totalCarga = totalCarga + cargaUtilizada;
        }else{
            cout << "LIMITE DE CARGA EXCEDIDO, FAVOR VERIFICAR\n";
            vezesNaoSubiu++;
        }
        
        cout << "ESCOLHA 1 PARA CONTINUAR OU QUALQUER TECLA PARA TERMINAR\n";
        cout << "SUA ESCOLHA ---> ";
        cin >> continuar;
    }
    system("cls");   // limpa a tela ap�s terminar o la�o
    cout << "*** RELAT�RIO DE TRABALHO DO ELEVADOR ***\n";
    cout << "O ELEVADOR SUBIU CARGAS POR " << vezesSubiu << " VEZES\n";
    cout << "POR " << vezesNaoSubiu << " O PESO FOI EXCEDIDO\n";
    cout << "O PESO TOTAL DE CARGAS TRANSPORTADAS FOI: " << totalCarga << "\n";

    // -------------------------------
    system("pause");
    
    
    
    return 0;
}


