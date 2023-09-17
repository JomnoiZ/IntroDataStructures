#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  int n = 0;
  for (int i = 0, j = 0; i < mSize; i++) {
    if (j < pos.size() and i == pos[j]) {
      j++;
      continue;
    }
    mData[n] = mData[i];
    n++;
  }
  mSize = n;
}

#endif
