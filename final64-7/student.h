#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::swap_value(T &v1, T &v2) {
  // Your code here
  // Return something
  size_t p1, p2;
  for (size_t i = 0; i < mSize; i++) {
    if (mData[i] == v1) p1 = i;
    if (mData[i] == v2) p2 = i;
  }

  if (p1 > 0 and mLess(mData[(p1 - 1) / 2], v2)) return false;
  if (p2 > 0 and mLess(mData[(p2 - 1) / 2], v1)) return false;
  if (2 * p1 + 1 < mSize and mLess(v2, mData[2 * p1 + 1])) return false;
  if (2 * p1 + 2 < mSize and mLess(v2, mData[2 * p1 + 2])) return false;
  if (2 * p2 + 1 < mSize and mLess(v1, mData[2 * p2 + 1])) return false;
  if (2 * p2 + 2 < mSize and mLess(v1, mData[2 * p2 + 2])) return false;
  std::swap(mData[p1], mData[p2]);
  return true;
}

#endif