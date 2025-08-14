/*5.") Apresentar todos os valores numéricos inteiros ímpares situados na faixa de 0 a 20.*/

#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "");
    
    cout << "Valores numéricos inteiros ímpares na faixa de 0 a 20:" << endl;
    for (int i = 0; i <= 20; ++i) {
        if (i % 2 != 0) { // Verifica se o número é ímpar (% = resto da divisão)
            cout << i <<endl;
        }
    }
    return 0;
}

