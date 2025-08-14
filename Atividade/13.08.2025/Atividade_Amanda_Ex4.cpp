/*4.") Faça um programa que leia 5 valores e informe o valor do maior.*/
#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "");
    int valor, maior_valor; 
   
  
    for (int i = 1; i <= 5; ++i) {
        cout << "Digite o " << i << "º valor: "; //i aumenta a cada verificação
        cin >> valor;

        
        if (valor > maior_valor) {
            maior_valor = valor;
        }
    }

    // Exibe o maior valor encontrado
    cout << "O maior valor digitado é: " << maior_valor <<endl;

    return 0; 
}

