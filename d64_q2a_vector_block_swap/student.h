#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  int pa = a - begin(), pb = b - begin();
  if (m <= 0 or std::abs(a - b) < m or pa < 0 or pb < 0 or pa + m - 1 >= mSize or pb + m - 1 >= mSize) return false;
  for (int i = 0; i < m; i++) std::swap(mData[pa + i], mData[pb + i]);
  return true;
}

#endif
