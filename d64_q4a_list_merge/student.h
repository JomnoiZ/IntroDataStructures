#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  auto it = end().ptr;
  for (auto &l : ls) {
    if (l.empty()) continue;

    auto x = l.mHeader->next, y = l.mHeader->prev;
    it->prev->next = x;
    x->prev = it->prev;
    it->prev = y;
    y->next = it;
    mSize += l.mSize;

    l.mHeader->prev = l.mHeader;
    l.mHeader->next = l.mHeader;
    l.mSize = 0;
  }
}

#endif
