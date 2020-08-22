#include "LinkedList.hpp"

template <class T>
Node<T>::Node(T data) : data(data) {}

template <class T>
Node<T>* Node<T>::getNext() {
    return next;
}

template <class T>
void Node<T>::setNext(Node *temp) {
    next = temp;
}

template <class T>
void Node<T>::displayNode() {
    cout<<data<<" "<<next<<endl;
}


template <class T>
List<T>::List() : head(NULL), tail(NULL), count(0) {}

template <class T>
void List<T>::addNode(T data) {
    Node<T> *newnode = new Node<T>(data);
    if(!head) {
        head = tail = newnode;
    }
    else {
        tail->setNext(newnode);
        tail = newnode;
    }
    ++count;
}

template <class T>
void List<T>::displayList() {
    if(!head) {
        cout<<"Empty List\n";
    }
    else {
        Node<T> *temp = head;

        while(temp) {
            temp->displayNode();
            temp = temp->getNext();
        }
    }
}

template class List<int>;
template class List<float>;
template class List<std::string>;