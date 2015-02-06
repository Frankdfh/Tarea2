// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>           // std::list
#include <set>
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
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
