#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  while (mSize > 0 and K > 0) {
    K--;
    pop();
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  std::stack<T> t, s;
  while (mSize > 0 and K > 0) {
    t.push(mData[mSize - 1]);
    K--;
    pop();
  }
  while (!t.empty()) {
    s.push(t.top());
    t.pop();
  }
  return s;
}

#endif
