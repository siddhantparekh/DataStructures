#include <iostream>
using namespace std;

template <class T>
class Node {
private:
    T data;
    Node *next;

public:
    Node(T);

    Node* getNext();

    void setNext(Node*);

    void displayNode();
};

template <class T>
class List {
private:
    Node<T> *head, *tail;
    int count;

public:
    List();

    void addNode(T);

    void displayList();
};