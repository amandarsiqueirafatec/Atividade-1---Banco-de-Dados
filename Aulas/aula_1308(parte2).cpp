#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int mes;
    cout<<"Digite o número corresponte ao mês: ";
    cin >> mes;
    switch (mes)
    {
    case 1:
        cout<<"Janeiro";
        break;
    case 2:
        cout<<"Fevereiro";
        break;
    case 3:
        cout<<"Março";
        break;
    case 4:
        cout<<"Abril";
        break;
    case 5:
        cout<<"Maio";
        break;
    case 6:
        cout<<"Junho";
        break;
    case 7:
        cout<<"Julho";
        break;
    case 8:
        cout<<"Agosto";
        break;
    case 9:
        cout<<"Setembro";
        break;
    case 10:
        cout<<"Outubro";
        break;
    case 11:
        cout<<"Novembro";
        break;
    case 12:
        cout<<"Dezembro";
        break;
    
    default:
    	cout<< "Mês Invalido!";
        break;
    }
    return 0;
}
