#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  //your code here
  //should return something
  std::vector<std::vector<T>> result;
  for (int i = 0; i < k; i++) {
    std::vector<T> tmp;
    for (int j = mSize - i - 1; j >= 0; j -= k) tmp.push_back(mData[j]);
    std::reverse(tmp.begin(), tmp.end());
    result.push_back(tmp);
  }
  return result;
}

#endif

