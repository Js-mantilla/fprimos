#include <iostream>

using namespace std;

int main()   
{
    int numero=0;           //le damos un valor inicial a la variable numero
    cout<<"$:";             //imprime"numero:"en el teerminal
    cin>>numero;            //asigna una variable a "numero"
    for (int i = 2; numero >= i; i++)              //este ciclo for nos indica que el valor inicial de i es 2 y el valor final va hasta que el valor que de i++(i=i+1)
    {

        while(numero % i == 0)      //aqui nos indica que si el reciduo del producto no da cero seguira el ciclo
        {

            cout<<i<<" x ";   //se muestra el resultado en la pantalla segido del signo "por"
            numero /= i;         //aqui se divide la variable "numeros" con "i"
        }

    }
}