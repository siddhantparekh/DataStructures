#include "LinkedList.hpp"

Node::Node(int data) : data(data) {}

Node* Node::getNext() {
    return next;
}

void Node::setNext(Node *temp) {
    next = temp;
}

void Node::displayNode() {
    cout<<data<<" "<<next<<endl;
}


List::List() : head(NULL), tail(NULL), count(0) {}

void List::addNode(int data) {
    Node *newnode = new Node(data);
    if(!head) {
        head = tail = newnode;
    }
    else {
        tail->setNext(newnode);
        tail = newnode;
    }
    ++count;
}

void List::displayList() {
    if(!head) {
        cout<<"Empty List\n";
    }
    else {
        Node *temp = head;

        while(temp) {
            temp->displayNode();
            temp = temp->getNext();
        }
    }
}
