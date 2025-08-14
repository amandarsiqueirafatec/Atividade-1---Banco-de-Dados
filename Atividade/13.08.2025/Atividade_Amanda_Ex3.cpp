/*3.") Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula:
VOLUME = 3.14159 R2 ALTURA.*/

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "");
    
    float raio, altura, volume;
    const float PI = 3.14159; // Define PI como uma constante
    
    cout << "Digite o valor do Raio: ";
    cin >> raio;
    cout << "Digite o valor da Altura: ";
    cin >> altura;
    
    //calcular volume da lata
    volume = PI * pow(raio, 2) * altura; // pow é o mesmo que ^, da para fazer assim: volume = PI * raio * raio * altura
    
    	cout << endl << "O volume da lata de óleo é = " << volume;

    return 0;
}
