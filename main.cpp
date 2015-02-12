// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>           // std::list
#include <set>
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
//Explicacion: Utilize un ciclo while para recorrer la cola y usar el "%" como mod 2 y de esa manera
//encontrar si el numero es par siempre y cuando los restos sean =0
bool sonPares(queue<int> mi_cola)
{
    while(!mi_cola.empty())
    {
        int restos=mi_cola.front()%2;
        if(restos!=0)
        {
            return false;
        }
        mi_cola.pop();
    }
    return true;
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
//Explicacion: Utilize un ciclo while para recorrer la lista y usar el "%" como mod 2 y de esa manera
//encontrar si el numero es par siempre y cuando los restos sean =0
bool sonPares(list<int> mi_lista)
{
    while(!mi_lista.empty())
    {
        int restos=mi_lista.front()%2;
        if(restos!=0)
        {
            return false;
        }
        mi_lista.pop_front();
    }
    return true;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
//Explicacion: Por medio de un ciclo while se recorre la cola, y le asignamos el valor de str a una variable
//luego comparamos el valor de la variable con el front de la cola
bool existe(queue<string> mi_cola, string str)
{
    while(!mi_cola.empty())
    {
        string texto=str;
        if(mi_cola.front()==texto)
        {
            return true;
        }
        mi_cola.pop();
    }
    return false;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
//Explicacion: Por medio de un ciclo while se recorre la lista, y le asignamos el valor de str a una variable
//luego comparamos el valor de la variable con el front de la lista
bool existe(list<string> mi_lista, string str)
{
    while(!mi_lista.empty())
    {
        string texto=str;
        if(mi_lista.front()==texto)
        {
            return true;
        }
        mi_lista.pop_front();
    }
    return false;
}

//devuelve la suma de los elementos de la cola
//Explicacion: Utilize una variable total dentro de un ciclo while para que cada vez que pase por un elemento
// de la cola sume ese valor a si mismo.
int getSuma(queue<int> mi_cola)
{
    int total=0;
    while(!mi_cola.empty())
    {
        int numero=mi_cola.front();
        total=total+numero;
        mi_cola.pop();
    }
    return total;
}

//devuelve la suma de la cantidad letras de cada cadena de la lista
//Explicacion: Utilize una variable num dentro de un ciclo while para que cada vez que pase por un elemento
// de la lista sume el lenght(longitud) de cada elemento a si mismo.
int sumarLetras(list<string> mi_lista)
{
    int num=0;
    while(!mi_lista.empty())
    {
        string texto=mi_lista.front();
        num=num+texto.length();
        mi_lista.pop_front();
    }
    return num;
}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
//Explicacion: Utilize 2 variables texto las cuales se inicializan en blanco, luego se recorr la lista y cada elemento
// se inserta en un multiset y se va combinando en la variable de texto1, luego abri un nuevo ciclo while 
//para reccorer el multiset y llenar de igual manera la variable texto2 una vez se ordenara el texto se comparan las 2 variables
//y si ambas variables son iguales eso indica que si esta ordenada.
bool estaOrdenada(list<char>mi_lista)
{
    string texto1="";
    string texto2="";
    multiset<char> mi_multiset;
    while(!mi_lista.empty())
    {
        texto1=texto1+mi_lista.front();
        mi_multiset.insert(mi_lista.front());
        mi_lista.pop_front();
    }
    multiset<char>::iterator i=mi_multiset.begin();
    while(i!=mi_multiset.end())
    {
        texto2=texto2+*i;
        i++;
    }
    if(texto1==texto2)
    {
        return true;
    }

    return false;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
