#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  // your code here
  int C = mCap;
  std::sort(pos.begin(), pos.end());
  for (int i = 0, j = 0; i < mSize; i++) {
    if (j < pos.size() and i == pos[j]) j++;
    else mData[(mFront + i - j) % C] = mData[(mFront + i) % C];
  }
  mSize -= pos.size();
}

#endif
