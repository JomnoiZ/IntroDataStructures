#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  int cur = mFront + pos, nxt = mFront + pos + 1;
  if (cur >= mCap) cur -= mCap;
  if (nxt >= mCap) nxt -= mCap;
  T push_later = mData[cur];
  for (int i = pos; i < mSize - 1; i++) {
    mData[cur] = mData[nxt];
    cur++, nxt++;
    if (cur >= mCap) cur -= mCap;
    if (nxt >= mCap) nxt -= mCap;
  }
  mData[cur] = push_later;
}

#endif
