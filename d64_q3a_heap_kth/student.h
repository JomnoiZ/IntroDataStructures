#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  T res;
  if (k == 1) res = mData[0];
  else if (k == 2) {
    res = mData[1];
    if (mSize >= 3 and mLess(res, mData[2])) res = mData[2];
  }
  else {
    if (mLess(mData[2], mData[1])) {
      res = mData[2];
      if (mSize >= 4 and mLess(res, mData[3])) res = mData[3];
      if (mSize >= 5 and mLess(res, mData[4])) res = mData[4];
    }
    if (mLess(mData[1], mData[2])) {
      res = mData[1];
      if (mSize >= 6 and mLess(res, mData[5])) res = mData[5];
      if (mSize >= 7 and mLess(res, mData[6])) res = mData[6];
    }
  }
  return res;
}

#endif
