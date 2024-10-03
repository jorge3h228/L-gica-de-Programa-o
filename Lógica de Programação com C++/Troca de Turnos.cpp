#include <iostream>
#include <conio.c>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");  // Ativa o uso de acentos
    // -------------------------------

    const int FIMTURNOMANHA = 11;
    const int FIMTURNOTARDE = 17;
    const int FIMTURNONOITE = 23;

    
    int horaConsultada;

    cout << "Digite a hora consultada (0-23): ";
    cin >> horaConsultada;


    if (horaConsultada >= 0 && horaConsultada <= FIMTURNOMANHA) {
        cout << "Bom dia, turno da manhã." << "\n";
    } else if (horaConsultada <= FIMTURNOTARDE) {
        cout << "Boa tarde, turno da tarde." << "\n";
    } else if (horaConsultada <= FIMTURNONOITE) {
        cout << "Boa noite, turno da noite." << "\n";
    }

    // -------------------------------
    system("pause");
    return 0;
}
