#include <iostream>
#include "LinkedList.hpp"
using namespace std;

int main() {
    List<string> temp;

    for(int i=0; i<10; ++i)
        temp.addNode("Hello");
    
    temp.displayList();
}