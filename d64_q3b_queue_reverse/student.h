#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  int c = mCap;
  int st = (mFront + a) % c;
  int en = (mFront + b) % c;
  for (int i = 0; i < (b - a + 1) / 2; i++) {
    std::swap(mData[st], mData[en]);
    st = (st + 1) % c;
    en = (en - 1 + c) % c;
  }
}

#endif
