#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  if (a == b) return a;
  auto l = a, r = b;
  r--;
  while (l != r) {
    std::swap(*l, *r);
    l++;
    if (l == r) break;
    r--;
  }
  return a;
}

#endif
