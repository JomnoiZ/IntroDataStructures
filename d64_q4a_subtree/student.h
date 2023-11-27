#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //write your code here
  if (n == NULL) return 0;
  
  size_t res = 1;
  if (n->left != NULL) res += process(n->left);
  if (n->right != NULL) res += process(n->right);
  return res;
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  if (mRoot == NULL) return std::pair<KeyT,MappedT>();
  
  if (mRoot->left != NULL) {
    left.mRoot = mRoot->left;
    left.mSize = process(left.mRoot);
    left.mRoot->parent = NULL;
    mRoot->left = NULL;
  }
  if (mRoot->right != NULL) {
    right.mRoot = mRoot->right;
    right.mSize = process(right.mRoot);
    right.mRoot->parent = NULL;
    mRoot->right = NULL;
  }
  mSize = 1;
  return mRoot->data;
}

#endif

