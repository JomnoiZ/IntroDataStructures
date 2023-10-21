#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  while (a != b) {
    if (a.ptr->data == value) {
      node *it = output.mHeader->next;
      node *n = new node(a.ptr->data, it->prev, it);
      it->prev->next = n;
      it->prev = n;
      output.mSize++;

      a.ptr->prev->next = a.ptr->next;
      a.ptr->next->prev = a.ptr->prev;
      node* tmp = a.ptr->next;
      delete a.ptr;
      a = tmp;
      mSize--;
    }
    else a++;
  }
}

#endif
