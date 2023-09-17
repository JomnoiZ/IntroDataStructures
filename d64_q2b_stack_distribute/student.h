#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T>> v(k);
  int n = size() / k, m = size() % k, cur_size = mSize;
  for (int i = 0; i < k; i++) {
    for (int j = 0; j < n + (i < m); j++) v[i].push_back(mData[--cur_size]);
  }
  return v;
}
#endif
