#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <vector>
#include <algorithm>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  //write your code here
  if (mSize != other.mSize) return false;
  if (mSize == 0) return true;

  std::vector<T> v1, v2;
  for (int i = 0; i < mSize; i++) v1.push_back(mData[i]);
  for (int i = 0; i < other.mSize; i++) v2.push_back(other.mData[i]);

  std::sort(v1.begin(), v1.end());
  std::sort(v2.begin(), v2.end());
  return v1 == v2 and mData[0] == other.mData[0]; // you can change this line
}

#endif
