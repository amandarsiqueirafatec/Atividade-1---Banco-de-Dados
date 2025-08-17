/*8.a.). Faça um programa que leia 15 valores 
e informe o valor da diferença entre a média e o maior valor.*/

/*Objetivo do Programa:

Ler 15 valores.

Calcular a média desses valores.

Encontrar o maior valor entre eles.

Mostrar a diferença entre a média e o maior valor*/


#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

int main() 
{
	
	   // Obtém o handle do console
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
     // Para Windows, configura o terminal para UTF-8
    system("chcp 65001 > nul");

    // Definir a localidade para português
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int Val = 15; // Define que serão lidos 15 valores
    
    float soma = 0, maior = 0, diferenca, media, valores[Val]; 
    
    /*array "valores", vai guardar os 15 valores. 
    Podem dar números quebrados, por isso o tipo float é usado.*/

    // Laço para leitura de 15 valores
    
    
    for (int i = 0; i < Val; i++) {
        cout << "Digite um valor " << i + 1 << ": ";
        cin >> valores[i];
        
        if(cin.fail()) { // Verifica se a entrada falhou
        	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            cout << "Entrada inválida! Digite um número válido." << endl;
            return 1; // Encerra o programa se houver erro de entrada
        }
        
        soma += valores[i]; // Soma os valores inseridos
         
        cout << "Soma até agora: \033[95m" << soma << "\033[0m"<< endl; // Mostra a soma a cada iteração
        
        // Encontrar o maior número
        if (valores[i] > maior) {
            maior = valores[i]; // Atualiza o maior valor encontrado
        }
    }
    
    // Calcular a média
    media = soma / Val;

    // Calcular a diferença entre a média e o maior valor
    diferenca = maior - media;

    // Mostrar resultados
    cout << "\nA soma dos valores é: \033[95m" << soma << "\033[0m"<< endl;  //\033[95m cor magenta claro de acordo com a ANSI
    cout << "\nValor da média: \033[95m" << media << "\033[0m"<< endl;
    cout << "\nO maior número é: \033[95m" << maior << "\033[0m"<< endl;
    cout << "\nA diferença entre a média e o maior valor é: \033[95m" << diferenca << "\033[0m"<< endl;  //<< "\033[0m" é para voltar a cor padrao

    return 0;
}
