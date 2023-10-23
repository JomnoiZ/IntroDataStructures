#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  //your code here
  node *p = mHeader, *n = mHeader->next;
  for (int i = 1; i < mSize; i++) {
    if (p == NULL or n == NULL) return false;
    if (n->prev != p) return false;
    p = p->next;
    n = n->next;
  }
  if (p == NULL or n == NULL or n->next != mHeader or mHeader->prev != n) return false;
  return true;
}


#endif
