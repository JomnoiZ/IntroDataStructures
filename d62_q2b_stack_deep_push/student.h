#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  CP::stack<T> temp;
  while (pos--) {
    temp.push(mData[mSize - 1]);
    pop();
  }
  push(value);
  while (!temp.empty()) {
    push(temp.top());
    temp.pop();
  }
}

#endif
