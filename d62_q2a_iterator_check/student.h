#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  //write your code here
  int index = it - &mData[0];
  return 0 <= index and index < mSize;
}

#endif
