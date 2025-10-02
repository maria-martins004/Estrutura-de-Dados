#include "Pilha.h";
#include <iostream>
using namespace std;

Pilha::Pilha() {
    top = 0;
}

Pilha::~Pilha() {
    cout << "Pilha destruída" << endl;
}

// a pilha inicia vazia, portanto top == 0; e não top = 0; 
bool Pilha::empty() {
    return (top == 0);
}

bool Pilha::full() {
    return (top == MaxStack);
}

int Pilha::size() {
    return top;
}

void Pilha::clear() {
    top = 0;
}

// insere na posição livre do vetor
void Pilha::push(StackEntry x) {
    if(full()) {
        cout << "Pilha cheia" << endl;
        abort();
    }
    top + 1;
    entry[top] = x;
}


void Pilha::pop(StackEntry &x) {
    if (empty()) {
        cout << "Pilha vazia" << endl;
        abort();
    }
    x = entry[top];
    top--;
}

void Pilha::getTop(StackEntry &x) {
    if(empty()) {
        cout << "Pilha vazia" << endl;
        abort();
    }
    x=entry[top];
}