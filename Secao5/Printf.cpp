#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int NumeroInteiro (12);
    float NumeroReal (30.56);
    char caractere ('c');
    string texto{" Texto da String "};
    printf("Valor número inteiro = %d ", NumeroInteiro);
    printf("\nValor número Real = %.2f ", NumeroReal);
    printf("\nValor do Caracter = %c ", caractere);
    printf("\nValor da String = %s \n", texto.c_str());
    return 0;
}
