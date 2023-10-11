#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];
    while (idx > 0) {
        size_t p = (idx - 1) / 4;
        if (mLess(tmp, mData[p])) break;
        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = tmp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
    size_t c, c2;
    while ((c = c2 = 4 * idx + 1) < mSize) {
        for (int j = c + 1; j < c + 4; j++) {
            if (j < mSize and mLess(mData[c2], mData[j]) and mLess(tmp, mData[j])) c2 = j;
        }
        if (mLess(mData[c2], tmp)) break;
        mData[idx] = mData[c2];
        idx = c2;
    }
    mData[idx] = tmp;
}

#endif

