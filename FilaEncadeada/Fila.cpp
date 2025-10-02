#include "Fila.h";
#include <iostream>
using namespace std;

Fila::Fila() {
    head = tail = NULL;
}

Fila::~Fila() {
    QueuePointer p;

    while(head!=NULL) {
        head = p;
        head = head->nextNode;
        delete p;
    }
}

bool Fila::empty() {
    head = tail = NULL;
}

bool Fila::full() {
    return false;
}

void Fila::clear() {
    if(head == NULL) {
        tail = NULL;
    } 
}

int Fila::size() {
    int tamanho = 0;
    QueuePointer p;

    while(p!=NULL) {
        tamanho++;
        p = p->nextNode;
        delete p;
    }
    return tamanho;
}

void Fila::append(QueueEntry x) {
QueuePointer p;
if(empty()) {
    cout << "Fila vazia" << endl;
    abort();
}
p->entry = x;
if(head!=NULL) {
tail = head = p;    
} else {
    tail = p;
    tail = tail->nextNode;
    delete p;
}

if(head == NULL) {
    tail = NULL;
}
}

void Fila::serve(QueueEntry &x) {
    QueuePointer p;

    if(full()) {
        cout << "Fila cheia" << endl;
        abort();
    }

    head->entry = x;
    p = head;
    head = head->nextNode;
    delete p;

}

void Fila::getFront(QueueEntry &x) {
    if(empty()) {
        cout << "Fila vazia" << endl;
        abort();
    }
    x = head->entry;
}

void Fila::getRear(QueueEntry &x) {
    if(empty()) {
        cout << "Fila vazia" << endl;
        abort();
    }
    x = tail->entry;
}