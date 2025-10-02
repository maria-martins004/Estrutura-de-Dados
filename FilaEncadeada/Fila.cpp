#include "Fila.h";
#include <iostream>
using namespace std;

Fila::Fila() {
    head = tail = NULL;
}

// houve troca head = p; na verdade p = head;
Fila::~Fila() {
    QueuePointer p;

    while(head!=NULL) {
        p = head;
        head = head->nextNode;
        delete p;
    }
}

// ou pode ser escrito desta forma, talvez seja até melhor "return (head == NULL)"
bool Fila::empty() {
    head = tail = NULL;
}

bool Fila::full() {
    return false;
}

// basicamente a mesma coisa que o serve, se pedir, pensar na função serve()
void Fila::clear() {
   QueuePointer p;

   while(head!=NULL) {
    p = head;
    head - head->nextNode;
    delete p;
   }
   tail = NULL;
}

int Fila::size() {
    int tamanho = 0;
    QueuePointer p;

    while(p!=NULL) {
        tamanho++;
        p = p->nextNode;
        // delete p; neste caso aqui, não tem delete p
    }
    return tamanho;
}

void Fila::append(QueueEntry x) {
QueuePointer p;
// p tem que receber um novo nó de node
p = new QueueNode;

// verifica primeiro se tem memória e não se está vazio
if(p == NULL) {
    cout << "Memória Insuficiente" << endl;
    abort();
}

p->entry = x;
// aqui verifica se está vazio
if(empty()) {
tail = head = p;    
} else {
    tail->nextNode = p;
    tail = p;
    // em uma inserção, neste caso não há delete
}

p->nextNode = NULL;
}

void Fila::serve(QueueEntry &x) {
    QueuePointer p;

    // verificar se ta vazio e não cheio
    if(empty()) {
        cout << "Fila Vazia" << endl;
        abort();
    }

    x = head->entry;
    p = head;
    head = head->nextNode;
    delete p;
    // faltou um if de verificação
    if(head == NULL) {
        tail = NULL;
    }
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