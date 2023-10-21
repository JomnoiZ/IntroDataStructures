#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
  if (it == end()) return result;

  result.mSize = mSize - pos;
  mSize = pos;

  auto tmp = it;
  it--;
  result.mHeader->next = tmp.ptr;
  tmp.ptr->prev = result.mHeader;
  result.mHeader->prev = end().ptr->prev;
  end().ptr->prev->next = result.mHeader;
  
  it.ptr->next = mHeader;
  mHeader->prev = it.ptr;


  return result;
}

#endif
