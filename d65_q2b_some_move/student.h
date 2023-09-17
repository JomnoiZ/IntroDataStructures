#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  // Your code here
  int pos = 0;
  if (index > 0) {
    pos = std::upper_bound(aux.begin(), aux.end(), index - 1) - aux.begin();
    if (pos == mSize) pos--;
    if (pos > 0) index -= aux[pos - 1];
  
    int s = mData[pos].size();
    mData[pos].resize(mData[pos].size() + value.size());
    for (int j = s - index - 1; j >= 0; j--) mData[pos][index + value.size() + j] = mData[pos][index + j];
    for (int j = 0; j < value.size(); j++) mData[pos][index + j] = value[j];
    for (auto v : value) mData[pos].push_back(v);
  }
  else {
    mData.insert(mData.begin(), value);
    aux.insert(aux.begin(), 0);
  }

  for (int i = pos; i < aux.size(); i++) aux[i] += value.size();
  mSize += value.size();
}

#endif