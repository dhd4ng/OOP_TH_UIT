#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    Stack pt(3);

    pt.push(1);
    pt.push(2);
    cout << "The top element is " << pt.peek() << endl;

    pt.pop();
    pt.pop();

    pt.push(3);
    
    cout << "The stack size is " << pt.size() << endl;

    pt.pop();

    if (pt.empty()) 
        cout << "The stack is empty" << endl;    
    else 
        cout << "The stack is not empty" << endl;  

    return 0;
}