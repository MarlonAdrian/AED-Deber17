#include <iostream>

using namespace std;

int i,n,V[10],X[10];
void leer();
void escribir();
void copia();
int main()
{
    escribir();
    copia();
    return 0;
}

void escribir()
{
    cout<<"Arreglo Original:"<<endl;
    for(i=0;i<11;i++)
    {
        V[i]=rand()%50;
        cout<<V[i]<<" ";
        X[i]=V[i];
    }
    cout<<endl;
}


void copia()
{
    cout<<"Arreglo modificado:"<<endl;
    for(i=0;i<11;i++)
    {
        cout<<X[i]*0.5<<" ";
    }
}