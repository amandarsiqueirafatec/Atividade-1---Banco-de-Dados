/*5.") Apresentar todos os valores num�ricos inteiros �mpares situados na faixa de 0 a 20.*/

#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "");
    
    cout << "Valores num�ricos inteiros �mpares na faixa de 0 a 20:" << endl;
    for (int i = 0; i <= 20; ++i) {
        if (i % 2 != 0) { // Verifica se o n�mero � �mpar (% = resto da divis�o)
            cout << i <<endl;
        }
    }
    return 0;
}

