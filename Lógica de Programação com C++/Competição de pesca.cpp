#include <iostream>
#include <conio.c>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");  // Ativa o uso de acentos
    // -------------------------------
    const float RECORDELOCAL = 8.0; 
    const float RECORDENACIONAL = 15.0; 
    const string PREMIO = "Trof�u de Campe�o Nacional e R$ 10.000";

 
    string nomeParticipante;
    double pesoPeixe;

  
    cout << "Informe o nome do participante: ";
    cin >> nomeParticipante;
    cout << "Informe o peso do peixe pescado (em KG): ";
    cin >> pesoPeixe;

    if (pesoPeixe < RECORDELOCAL) {
        cout << "Por favor, devolva o peixe para a �gua." << "\n";
    } else if (pesoPeixe > RECORDENACIONAL) {
        cout << "PARAB�NS, " << nomeParticipante << ", voc� ganhou o pr�mio: " << PREMIO << "!" << "\n";
    } else {
        cout << "PARAB�NS, " << nomeParticipante << ", voc� tem o recorde local." << "\n";
    }
    // -------------------------------
    system("pause");
    return 0;
}
