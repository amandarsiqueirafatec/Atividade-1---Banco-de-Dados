#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    
    // exibir os números de 0 a 10
    int i=0;
    /*while (i<=10){
    	cout << i<< endl;
    	i++;
	}*/ //teste antes de entrar

	do{//do=faça
	cout<< i << endl;
	i++;
		
	}while (i<=10); // teste depois de executar
    return 0;
}

