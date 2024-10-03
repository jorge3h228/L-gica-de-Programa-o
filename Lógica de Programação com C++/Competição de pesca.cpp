#include <iostream>
#include <conio.c>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");  // Ativa o uso de acentos
    // -------------------------------
    const float RECORDELOCAL = 8.0; 
    const float RECORDENACIONAL = 15.0; 
    const string PREMIO = "Troféu de Campeão Nacional e R$ 10.000";

 
    string nomeParticipante;
    double pesoPeixe;

  
    cout << "Informe o nome do participante: ";
    cin >> nomeParticipante;
    cout << "Informe o peso do peixe pescado (em KG): ";
    cin >> pesoPeixe;

    if (pesoPeixe < RECORDELOCAL) {
        cout << "Por favor, devolva o peixe para a água." << "\n";
    } else if (pesoPeixe > RECORDENACIONAL) {
        cout << "PARABÉNS, " << nomeParticipante << ", você ganhou o prêmio: " << PREMIO << "!" << "\n";
    } else {
        cout << "PARABÉNS, " << nomeParticipante << ", você tem o recorde local." << "\n";
    }
    // -------------------------------
    system("pause");
    return 0;
}
