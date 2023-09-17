#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  int pos = position - begin();
  ensureCapacity(mSize + last - first);
  for (int i = mSize - 1; i >= pos; i--) mData[i + last - first] = mData[i];
  for (auto it = first; it < last; it++, pos++) mData[pos] = *it;
  mSize += last - first;
}

#endif
