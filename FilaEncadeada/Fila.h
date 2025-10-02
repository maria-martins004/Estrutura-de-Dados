#ifndef FILA_H
#define FILA_H

typedef int QueueEntry;

class Fila {
public: 
Fila();
~Fila();
bool empty();
bool full();
void clear();
int size();
void append(QueueEntry x);
void serve(QueueEntry &x);
void getFront(QueueEntry &x);
void getRear(QueueEntry &x);
private: 
struct QueueNode;

typedef QueueNode *QueuePointer;

struct QueueNode
{
    QueueEntry entry; //campo para adicionar dado na fila
    QueuePointer nextNode; //avança para o próximo elemento da fila
};

// em uma fila, temos a head -> serve e o tail -> append
QueuePointer head, tail;

};

#endif