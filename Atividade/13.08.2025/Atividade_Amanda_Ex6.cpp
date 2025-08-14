/*7.") Faça um programa que apresente a série de Fibonacci até o décimo 
quinto termo. A série é formada pela seqüência: 1,1,2,3,5,8,13,21,34......etc.*/

#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "");
     int Fn1 = 0, Fn2 = 1, primeiroTermo, proximoTermo;
     primeiroTermo = Fn1+Fn2;
      cout << "Série de Fibonacci até o décimo quinto termo:" << primeiroTermo << endl;
     
    for (int i = 3; i <= 16; ++i) {
        proximoTermo = Fn1+Fn2;
        cout << "Série de Fibonacci até o décimo quinto termo:" <<proximoTermo << endl;
        Fn1 = Fn2;
        Fn2 = proximoTermo;
  }
    return 0;
}


