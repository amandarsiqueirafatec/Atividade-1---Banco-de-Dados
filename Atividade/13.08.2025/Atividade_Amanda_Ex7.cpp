/*7.") Fa�a um programa que apresente a s�rie de Fibonacci at� o d�cimo 
quinto termo. A s�rie � formada pela seq��ncia: 1,1,2,3,5,8,13,21,34......etc.*/

#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "");
     int Fn1 = 0, Fn2 = 1, primeiroTermo, proximoTermo;
     primeiroTermo = Fn1+Fn2;
      cout << "S�rie de Fibonacci at� o d�cimo quinto termo:" << primeiroTermo << endl;
     
    for (int i = 3; i <= 16; ++i) {
        proximoTermo = Fn1+Fn2;
        cout << "S�rie de Fibonacci at� o d�cimo quinto termo:" <<proximoTermo << endl;
        Fn1 = Fn2;
        Fn2 = proximoTermo;
  }
    return 0;
}


