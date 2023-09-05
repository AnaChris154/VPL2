#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string palavra;
    char vogal[]={"aeiou"};
    int valorA=0, valorE=0, valorI=0, valorO=0, valorU=0;

    cout<<"\nInforme uma palavra:";
    cin>>palavra;

    //percorre a string retornada e verifica se tem vogais.
    for(int i=0; i<palavra.length(); i++){

        if(palavra[i] == vogal[0]){

            valorA++;

        }
        else if(palavra[i]==vogal[1]){

            valorE++;

        }
        else if(palavra[i]==vogal[2]){

            valorI++;

        }
        else if(palavra[i]==vogal[3]){

            valorO++;

        }
        else if(palavra[i]==vogal[4]){

            valorU++;

        }


    }

    //cada if retorna a vogal e o valor que ela apareceu
    if(valorA != 0 ){
        cout<<"\n"<<vogal[0]<<" "<<valorA;
    }
    if(valorE != 0){
        cout<<"\n"<<vogal[1]<<" "<<valorE;
    }
    if(valorI != 0){
        cout<<"\n"<<vogal[2]<<" "<<valorI;
    }
    if(valorO != 0 ){
        cout<<"\n"<<vogal[3]<<" "<<valorO;
    }
    if(valorU != 0){
        cout<<"\n"<<vogal[4]<<" "<<valorU;
    }
    //Caso não tenha vogal na palavra imprime que nao tem vogal
    if(valorA == 0 && valorE == 0 && valorI == 0 && valorO == 0 && valorU == 0){
        cout<<"\nNao tem vogal na palavra.";
    }

    return 0;
}
