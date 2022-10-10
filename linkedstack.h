#ifndef STACKCLASS_LINKEDSTACK_H
#define STACKCLASS_LINKEDSTACK_H

#endif //STACKCLASS_LINKEDSTACK_H

using namespace std;

struct Node {
    int val;
    Node* previous = nullptr;
};

class LinkedStack {
public:
    void push(int new_value) {
        count++;
        if(empty()) {
            tail = new Node;
            tail->val = new_value;
        } else {
            Node* next = new Node;
            next->val = new_value;
            next->previous = tail;
            tail = next;
        }
    };

    int pop() {
       count--;
       int popped_val = tail->val;
       if(length() > 1) {//tail->previous != nullptr) {
           tail = tail->previous;
       } else {
           tail = nullptr;
       }
       return popped_val;
    };

    int peek() {
        return tail->val;
    };

    int length() {
        return count;
    }

    bool empty() {
        return tail == nullptr;
    };


private:
    Node* tail = nullptr;
    int count;
};

