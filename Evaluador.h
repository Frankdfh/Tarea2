#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>          // std::queue
using namespace std;

void evaluar();
bool sonPares(queue<int> mi_cola);
bool sonPares(list<int> mi_lista);
bool existe(list<string> mi_list, string str);
bool existe(queue<string> mi_cola, string str);
int getSuma(queue<int> mi_cola);
int sumarLetras(list<string> mi_lista);
bool estaOrdenada(list<char>mi_lista);

#endif // EVALUADOR_H
