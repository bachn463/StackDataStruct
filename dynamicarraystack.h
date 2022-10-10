#ifndef STACKCLASS_DYNAMICARRAYSTACK_H
#define STACKCLASS_DYNAMICARRAYSTACK_H

#endif //STACKCLASS_DYNAMICARRAYSTACK_H


class DynArrayStack {
public:
    void push(int value) {
      if(length == size) {
          int* new_arr = new int[size*2];
          for(int i = 0; i < size; i++) {
              new_arr[i] = array[i];
          }
          int* temp = array;
          array = new_arr;
          delete[] temp;
      }
      array[length] = value;
      length++;
    };

    int pop() {
        int popped_val = array[length - 1];
        int* new_arr = new int[size];
        for(int i = 0; i < length - 1; i++) {
            new_arr[i] = array[i];
        }
        int* temp = array;
        array = new_arr;
        delete[] temp;
        length--;
        return popped_val;
    }

    int peek() {
        return array[length - 1];
    }

    int len() {
        return length;
    }

    bool empty() {
        return length == 0;
    }

private:
    int size = 5;
    int* array = new int[size];
    int length = 0;
};
