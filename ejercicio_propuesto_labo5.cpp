#include <iostream>
using namespace std;





int main(){

    int edad;

    cout<<"----Buen día----"<<endl;
    cout<<"-----Vamos a verificar tu edad----"<<endl;
    cout<<"Ingresa tu edad"<<endl;
    cin>>edad;

    if (edad >=0 && edad <= 12)
    {
        cout<<"Eres un niño"<<endl;
    }
    
    else if (edad>=13 && edad<=17)
    {
        cout<<"Eres adolscente"<<endl;
    }

    else if (edad >= 18 && edad <= 64)
    {
        cout<<"Eres un adulto"<<endl;
    }

    else if (edad >= 65 && edad <= 110)
    {
        cout<<"Eres un anciano"<<endl;
    }
    else 
    {
        cout<<"Valor de edad invalido";
    }
    

    return 0;
}