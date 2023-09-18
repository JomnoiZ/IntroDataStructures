#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  CP::stack<T> temp;
  while (k-- and !empty()) {
    temp.push(top());
    pop();
  }
  while (m-- and !s2.empty()) {
    temp.push(s2.top());
    s2.pop();
  }
  while (!temp.empty()) {
    push(temp.top());
    temp.pop();
  }
}
#endif
