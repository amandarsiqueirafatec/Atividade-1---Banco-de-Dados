#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    
    // exibir os números de 0 a 10
    int i;
    for (i=0;i<=10;i++){ 
	/* i è igual a 0? caso sim ele vai executar. o segundo ponto e virgula significa que no retorno ele vai somar i + 1. 
	Ou seja, 0+1;1+1.. e por ai vai (estrutura de repetição) e ele vai parar no 10, por que i tem que ser menor ou igual a 10. apos isso ele sai do laço*/
    	//i é uma variavel. o ponto e virgula (;) é o teste
    	//laço "for" ultilizado para uma variavel
    	cout<< i << endl;
	}

    return 0;
}

