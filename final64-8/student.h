#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>
#include "map_bst.h"

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::my_recur(node *n, size_t depth) {
  if (n == NULL) return 0;
  return depth + my_recur(n->left, depth + 1) + my_recur(n->right, depth + 1);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::sum_node_depth() {
  //write your code here
  return my_recur(mRoot, 0);
}


#endif
