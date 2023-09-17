#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  std::sort(data.begin(), data.end());
  ensureCapacity(mSize + data.size());
  int cur_idx = mSize + data.size() - 1;
  for (int i = mSize, j = data.size() - 1; i >= 0; i--) {
    if (i < mSize) mData[cur_idx--] = mData[i];
    if (data[j].first == i) mData[cur_idx--] = data[j--].second;
  }
  mSize += data.size();
}

#endif
