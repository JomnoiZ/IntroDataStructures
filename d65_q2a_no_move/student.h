#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  //your code here
  auto it = upper_bound(aux.begin(), aux.end(), idx) - aux.begin();
  if (it > 0) idx -= aux[it - 1];
  return mData[it][idx];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  //your code here
  //you MAY need this function
  int cur_size = mData.back().size();
  if (!aux.empty()) cur_size += aux.back();
  aux.push_back(cur_size);
}

#endif
