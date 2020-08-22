#include <iostream>
#include "LinkedList.hpp"
using namespace std;

int main() {
    List temp;
    for(int i=0; i<10; ++i)
        temp.addNode(i);
    
    temp.displayList();
}