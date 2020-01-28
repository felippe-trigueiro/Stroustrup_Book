#include <iostream>
#include <string>
using namespace std;

int main()
{
	string primeiro_nome = "", nome_amigo = "";
	char sexo_amigo = 'm';
	int idade = 0;

	cout << "Digite o nome da pessoa para quem deseja escrever: ";
	cin >> primeiro_nome;
	cout << "Digite o nome do seu amigo: ";
	cin >> nome_amigo;
	cout << "Digite o sexo do amigo (m/f): ";
	cin >> sexo_amigo;
	cout << "Digite a idade do destinatario: ";
	cin >> idade;
	cout << endl << endl;

	cout << "Prezado (a) " << primeiro_nome << ", " << endl << endl;
	cout << "Como vai voce? Eu estou bem. Sinto sua falta." << endl;
	cout << "Voce viu " << nome_amigo << " recentemente?" << endl;

	if (sexo_amigo == 'm')
		cout << "Se voce encontrar o " << nome_amigo << " por favor peca a ele para me telefonar." << endl;
	else if (sexo_amigo == 'f')
		cout << "Se voce encontrar a " << nome_amigo << " por favor peca a ela para me telefonar." << endl;

	if (idade > 0 && idade < 110)
	{
		cout << "Soube que voce fez aniversario ha pouco e agora tem " << idade << " anos." << endl;

		if (idade < 12)
			cout << "No proximo ano voce tera " << idade + 1 << " anos." << endl;
		else if (idade == 17)
			cout << "No proximo ano voce podera votar." << endl;
		else if (idade > 70)
			cout << "Espero que esteja aproveitando a aposentadoria." << endl;
	}
	else
		cout << "Voce esta brincando!!" << endl;

	

	cout << endl << "Atenciosamente, " << endl << endl << endl << "Felippe Trigueiro." << endl;

	system("pause");
}