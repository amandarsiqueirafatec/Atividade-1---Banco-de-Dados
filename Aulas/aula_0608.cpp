#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"");
	float nota1, nota2, md;
	cout << "Digite a nota 1: ";
	cin >> nota1;
	cout << "Digite a nota 2: ";
	cin >> nota2;
	md = (nota1+nota2)/2;
	if(md>=6)
	{
		cout<<"ALUNO APROVADO!";
	}
	else
	{
		cout <<"ALUNO REPROVADO";
	}
	cout << endl << "Média = " << md;
	return 0;	
}
