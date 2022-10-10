#include <iostream>
#include "linkedstack.h"
#include "dynamicarraystack.h"

using namespace std;

int main() {
    DynArrayStack st1;
    for(int i = 3; i < 10; i++) {
        st1.push(i);
    }
    while(!st1.empty()) {
        cout << st1.pop() << endl;
    }
    cout << "done" << endl;

    LinkedStack st2;
    for(int i = 10; i < 20; i++) {
        st2.push(i);
    }
    while(!st2.empty()) {
        cout << st2.pop() << endl;
    }
    cout << "done" << endl;

    return 0;
}
