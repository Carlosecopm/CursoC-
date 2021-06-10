#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int Numero01, Numero02, Soma;
    float Multiplicacao, Divisao, Subtracao, Resto;
    cout << "\nDigite o primeiro Número: " << "\n";
    cin >> Numero01;
    cout << "Digite o Segundo Número: " << "\n";
    cin >> Numero02;
    cout <<"\nNúmero 1: \n"<< Numero01 << endl;
    cout <<"Número 2: \n"<< Numero02 << endl;
    Soma = Numero01 + Numero02;
    Multiplicacao = Numero01 * Numero02;
    Divisao = Numero01 / Numero02;
    Subtracao = Numero01 - Numero02;
    Resto = Numero01 % Numero02;
    cout << "A soma dos valores é:\n" << Soma << endl;
    cout << "A Multiplicação dos valores é:\n" << Multiplicacao << endl;
    cout << "A Divisão dos valores é:\n" << Divisao << endl;
    cout << "A Subtração dos valores é:\n" << Subtracao << endl;
    cout << "O resto doa divisão é:\n" << Resto << endl;
    return 0;
}
