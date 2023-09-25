#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  int idx = mFront, s = mSize;
  while (k-- and s--) {
    res.push_back(mData[idx]);
    idx = (idx + 1) % mCap;
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  mCap = mSize = to - from;
  mData = new T[mCap]();
  mFront = 0;
  for (int i = 0; i < mSize; i++) mData[i] = *(from + i);
}

#endif
