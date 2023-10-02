#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

const int BLOCK = 2000;

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  // Your code here
  if (index == mSize) {
    if (aux.back() + value.size() <= BLOCK) {
      mData[aux.size() - 1].insert(mData[aux.size() - 1].end(), value.begin(), value.end());
      aux.back() += value.size();
    }
    else {
      mData.push_back(value);
      aux.push_back(aux.back() + value.size());
    }
  }
  else {
    int it = upper_bound(aux.begin(), aux.end(), index) - aux.begin();
    if (it > 0) index -= aux[it - 1];

    bool ok = false;
    if (index > 0) {
      if (mData[it].size() + value.size() <= BLOCK) {
        mData[it].insert(mData[it].begin() + index, value.begin(), value.end());
        for (int i = it; i < aux.size(); i++) aux[i] += value.size();
        ok = true;
      }
      else {
        aux.insert(aux.begin() + it + 1, aux[it]);
        aux[it] -= mData[it].size() - index;
        mData.insert(mData.begin() + it + 1, std::vector<T>(mData[it].begin() + index, mData[it].end()));
        mData[it].erase(mData[it].begin() + index, mData[it].end());
        index = 0;
        it++;
      }
    }

    if (index == 0 and ok == false) {
      if (it > 0 and mData[it - 1].size() + value.size() <= BLOCK) {
        mData[it - 1].insert(mData[it - 1].end(), value.begin(), value.end());
        aux[it - 1] += value.size();
      }
      else if (mData[it].size() + value.size() <= BLOCK) {
        mData[it].insert(mData[it].begin(), value.begin(), value.end());
      }
      else if (it > 0 and BLOCK - mData[it - 1].size() - mData[it].size() >= value.size()) {
        int s = BLOCK - mData[it - 1].size();
        mData[it - 1].insert(mData[it - 1].end(), value.begin(), value.begin() + s);
        mData[it].insert(mData[it].begin(), value.begin() + s, value.end());
        aux[it - 1] += s;
      }
      else {
        aux.insert(aux.begin() + it, it > 0 ? aux[it - 1] : 0);
        mData.insert(mData.begin() + it, value);
      }
      for (int i = it; i < aux.size(); i++) aux[i] += value.size();
    }
  }
  mSize += value.size();
  mCap += value.size();
}

#endif