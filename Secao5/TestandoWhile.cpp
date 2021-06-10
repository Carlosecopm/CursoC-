#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");
	float Num1, Num2, Num3;
	float Media = 0.0;
	char Resposta;
	do // Cria loop até que Resposta seja S e ai sai do loop
	{
		cout << "Digite o Primeiro Número: ";
		cin >> Num1;
		cout << "Digite o Primeiro Número: ";
		cin >> Num2;
		cout << "Digite o Primeiro Número: ";
		cin >> Num3;

        Media = (Num1 + Num2 + Num3) / 3;
 
		cout << "Números Digitados: " << Num1 << " " << Num2 << " " << Num3 << "\n";
		cout << "Média dos Números: " << fixed << setprecision(2) << Media << "\n";
		cout << "\nDeseja calcular outra Média Artmética? (Responda S para Sim e N para não:) ";
		cin >> Resposta;
	} while (Resposta == 'S' || Resposta == 's'); // Sai do loop apenas de o OU for falso ou seja se
//Se resposta for diferente de S e diferente de s. Lembre que o OU || só será falso de todas as sentenças forem //falsas. Assim se o usuário digitar N ou qualquer outra coisa o programa sairá mas se digitar S ou s o programa volta e pede novamente os números.
 
	std::cout << "\nSaindo do programa...";
	system("Pause");
	return 0;
    return 0;
}
