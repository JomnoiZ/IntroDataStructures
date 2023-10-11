#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  int idx = mSize - 1, depth = -1 + (mSize > 0);
  while (idx > 0) {
    depth++;
    idx = (idx - 1) / 2;
  }
  return depth;
}

#endif

