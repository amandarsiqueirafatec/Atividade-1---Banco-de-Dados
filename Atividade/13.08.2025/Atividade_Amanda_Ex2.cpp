/*2.") Fa�a um programa que leia uma temperatura em graus Centigrados e apresente-a
convertida em graus Fahrenheit. A f�rmula de convers�o �:
F=(9^ * C + 160 ) 5, onde F� a temperatura em Fahrenheit e C em graus Centigrados.*/

#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "");
    
    float  C, conv; // F= fahrenheit C= celsius conv= convers�o
    
    cout << "Digite em C� (Celsius) a temperatura: ";
    cin >> C;
    conv = (9*C+160)/5;
    
    	cout << endl << "A temperatura em Farhenheit � = " << conv;


    return 0;
}

