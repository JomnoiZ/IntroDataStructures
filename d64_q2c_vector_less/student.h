#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  for (int i = 0; i < mSize and i < other.mSize; i++) {
    if (mData[i] != other.mData[i]) return mData[i] < other.mData[i];
  }
  return mSize < other.mSize;
}

#endif
