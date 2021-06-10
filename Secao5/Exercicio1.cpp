#include <iostream>

using namespace std;

int main()
{
   float valor1, valor2, valor3, media;
    cout << "Digite 3 valores reais" << endl;
    cin >> valor1 >> valor2 >> valor3;
    media = (valor1 + valor2 + valor3) / 3;
    cout << "Valores Digitados\n" << valor1 << "\n"<< valor2 << "\n"<< valor3 << endl;
    cout << "A média é:\n" << media << endl;
    system("PAUSE");
    return 0;
}