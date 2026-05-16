#include <iostream>
using namespace std;

int main () {

    int nivel;
        cout << "Informe seu nivel: "<<endl;
        cin >> nivel;
    string nome;
        cout << "Informe seu nome: "<<endl;
        cin >> nome; 
    float vendas;
        cout << "Informe o valor das vendas: " <<endl;
        cin >> vendas;
    if(nivel == 1) {
        if (vendas >= 20000 && vendas < 50000){
            cout << "Sua bonificacao e de 20%";
        }
        else if (vendas >= 50000 && vendas < 80000) { 
            cout << "Sua bonificacao e de 35%";
        }
         else if (vendas >= 80000) { 
            cout << "O vendedor " << nome <<" Foi promovido";
         }
        else if (vendas <= 5000) {

        cout << "O vendedor " << nome << " esta em risco de demissao!";

        }
    }
            if(nivel == 2) {
        if (vendas >= 90000 && vendas <= 120000){
            cout << "Sua bonificacao e de 25%";
        }
        else if (vendas >= 120000 && vendas <= 200000) { 
            cout << "Sua bonificacao e de 35%";
        }
         else if (vendas >= 200000) { 
            cout << "O vendedor " << nome <<" nivel 2 Foi promovido ao nivel 3";
         }
        else if(vendas <=50000){

        cout << "O vendedor " << nome << " esta em risco de virar nivel 1!";
        }
    }
        if(nivel == 3) {
            if (vendas >= 210000 && vendas <= 250000){
            cout << "Sua bonificacao e de 30%";
        }
        else if (vendas >= 250000 && vendas <= 500000) { 
            cout << "Sua bonificacao e de 45%";
        }
         else if (vendas >= 500000) { 
            cout << "O vendedor " << nome <<" nivel 3 virou o dono da firma";
         }
        else if(vendas <=100000){

        cout << "O vendedor " << nome << " esta em risco de virar nivel 2!";

        }

    



        }

    



    




    return 0;

}