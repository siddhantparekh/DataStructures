#include <iostream>
using namespace std;

class Node {
private:
    int data;
    Node *next;

public:
    Node(int);

    Node* getNext();

    void setNext(Node*);

    void displayNode();
};

class List {
private:
    Node *head, *tail;
    int count;

public:
    List();

    void addNode(int);

    void displayList();
};