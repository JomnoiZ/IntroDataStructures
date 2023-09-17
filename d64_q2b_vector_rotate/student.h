#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  CP::vector<T> temp;
  for (int i = 0; i < k; i++) temp.push_back(*(first + i));
  for (int i = 0; i < last - first - k; i++) *(first + i) = *(first + i + k);
  for (int i = 0; i < k; i++) *(last - k + i) = temp[i];
}

#endif
