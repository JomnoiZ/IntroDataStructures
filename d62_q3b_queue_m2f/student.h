#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    CP::queue<T> tmp, tmp2;
    for (int i = 0; i < pos; i++) {
        tmp.push(front());
        pop();
    }
    tmp2.push(front());
    pop();
    while (!tmp.empty()) {
        tmp2.push(tmp.front());
        tmp.pop();
    }
    while (!empty()) {
        tmp2.push(front());
        pop();
    }
    while (!tmp2.empty()) {
        push(tmp2.front());
        tmp2.pop();
    }
}

#endif
