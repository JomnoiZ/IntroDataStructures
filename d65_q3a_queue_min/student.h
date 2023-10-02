#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
  //should return something
  std::vector<T> v;
  for (int i = 0; i < pos.size(); i++) {
    if (pos[i] < mSize) v.push_back(mData[(mFront + pos[i]) % (int)mCap]);
  }
  return *std::min_element(v.begin(), v.end(), comp);
}

#endif
