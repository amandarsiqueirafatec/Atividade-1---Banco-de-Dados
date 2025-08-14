/*8.a.). Faça um programa que leia 15 valores 
e informe o valor da diferença entre a média e o maior valor.*/

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


