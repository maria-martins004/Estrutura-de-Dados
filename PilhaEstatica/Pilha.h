#ifndef PILHA_H
#define PILHA_H

typedef int StackEntry;

class Pilha {
public:
Pilha();
~Pilha();
bool empty();
bool full();
void push(StackEntry x);
void pop(StackEntry &x);
void getTop(StackEntry &x);
int size();
void clear();

private:
static const int MaxStack = 20;
StackEntry top; //topo da pilha 
StackEntry entry[MaxStack+1]; //vetor dos elementos da pilha
};

#endif