#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>
#include "map_bst.h"

template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::my_recur1(node *n, std::vector <ValueT> &inOrder) {
  //write your code here
  if (n == NULL) return;
  process_1(n->left, inOrder);
  inOrder.push_back(n->data);
  process_1(n->right, inOrder);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::my_recur2(node *n, std::vector <ValueT> &inOrder, size_t l, size_t r) {
  //write your code here
  if (n == NULL) return;

  size_t mid = (l + r) / 2;
  node->data = inOrder[mid];
  process_1(n->left, inOrder, l, mid - 1);
  process_1(n->right, inOrder, mid + 1, r);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::make_balance() {
  //write your code here
  std::vector <Valuet> preOrder;
  process_1(mRoot, preOrder);
  process_2(mRoot, preOrder, 0, mSize - 1);
}


#endif