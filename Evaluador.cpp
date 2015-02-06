#include "Evaluador.h"

void evaluar()
{
    int nota = 0;

    list<int>listi;
    listi.push_back(1);
    listi.push_back(2);
    listi.push_back(3);

    list<int>listi2;
    listi2.push_back(2);
    listi2.push_back(6);
    listi2.push_back(8);

    queue<int>queuei;
    queuei.push(1);
    queuei.push(2);
    queuei.push(3);

    queue<int>queuei2;
    queuei2.push(2);
    queuei2.push(6);
    queuei2.push(8);

    list<string>lists1;
    lists1.push_back("A");
    lists1.push_back("B");
    lists1.push_back("C");

    list<string>lists2;
    lists2.push_back("Hola");
    lists2.push_back("Mundo");

    list<string>lists3;
    lists3.push_back("123");
    lists3.push_back("12");
    lists3.push_back("12345");
    lists3.push_back("1");
    lists3.push_back("12");
    lists3.push_back("12");

    queue<string>queues1;
    queues1.push("A");
    queues1.push("B");
    queues1.push("C");

    queue<string>queues2;
    queues2.push("Hola");
    queues2.push("Mundo");

    list<char>listc;
    listc.push_back('f');
    listc.push_back('e');
    listc.push_back('f');
    listc.push_back('e');

    list<char>listc2;
    listc2.push_back('a');
    listc2.push_back('d');
    listc2.push_back('s');
    listc2.push_back('s');
    listc2.push_back('d');
    listc2.push_back('a');

    cout<<"Ejercicio sonPares:\t";
    if(!sonPares(queuei) && sonPares(queuei2))
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio sonPares:\t";
    if(!sonPares(listi) && sonPares(listi2))
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio existe:\t";
    if(!existe(queues1,"Aa") && existe(queues2,"Mundo"))
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio existe:\t";
    if(!existe(lists1,"Aa") && existe(lists2,"Mundo"))
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getSuma:\t";
    if(getSuma(queuei)==6 && getSuma(queuei2)==16)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio sumarLetras:\t";
    if(sumarLetras(lists1)==3 && sumarLetras(lists2)==9 && sumarLetras(lists3)==15)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }



    list<char>listd1;
    listd1.push_back('a');
    listd1.push_back('b');
    listd1.push_back('g');
    listd1.push_back('h');

    list<char>listd2;
    listd2.push_back('a');
    listd2.push_back('b');
    listd2.push_back('c');


    list<char>listd3;
    listd3.push_back('x');
    listd3.push_back('y');
    listd3.push_back('z');


    list<char>listd4;
    listd4.push_back('a');
    listd4.push_back('b');
    listd4.push_back('g');
    listd4.push_back('d');


    list<char>listd5;
    listd5.push_back('r');
    listd5.push_back('t');
    listd5.push_back('y');
    listd5.push_back('u');
    listd5.push_back('a');

    cout<<"Ejercicio estaOrdenada:\t";
    if(estaOrdenada(listd1) && estaOrdenada(listd2) && estaOrdenada(listd3) && !estaOrdenada(listd4) && !estaOrdenada(listd4))
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/7"<<endl;
}
