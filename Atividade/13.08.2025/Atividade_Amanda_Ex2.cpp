/*2.") Faça um programa que leia uma temperatura em graus Centigrados e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é:
F=(9^ * C + 160 ) 5, onde Fé a temperatura em Fahrenheit e C em graus Centigrados.*/

#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "");
    
    float  C, conv; // F= fahrenheit C= celsius conv= conversão
    
    cout << "Digite em C° (Celsius) a temperatura: ";
    cin >> C;
    conv = (9*C+160)/5;
    
    	cout << endl << "A temperatura em Farhenheit é = " << conv;


    return 0;
}

