#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "list.h"

template <typename T>
typename CP::list<T>::iterator CP::list<T>::push(T &data) {
  //your code here
  node *ptr = mHeader->next;
  while (ptr->data < data) ptr = ptr->next;
  node *tmp = new node(data, ptr->prev, ptr);
  ptr->prev->next = tmp;
  ptr->prev = tmp;
  mSize++;
  return iterator(tmp);
}


#endif
