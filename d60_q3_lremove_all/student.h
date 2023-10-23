#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  node *p = mHeader->next;
  while (p != mHeader) {
    if (p->data == value) {
      node *tmp = p->next;
      p->prev->next = p->next;
      p->next->prev = p->prev;
      delete p;
      mSize--;
      p = tmp;
    }
    else p = p->next;
  }
}

#endif
