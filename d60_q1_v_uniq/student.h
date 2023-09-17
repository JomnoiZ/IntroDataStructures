#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <set>


template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::set <T> s;
  int cur_idx = 0;
  for (int i = 0; i < mSize; i++) {
    if (!s.count(mData[i])) {
      s.insert(mData[i]);
      mData[cur_idx++] = mData[i];
    }
  }
  mSize = cur_idx;
}

#endif
