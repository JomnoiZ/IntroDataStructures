#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, int &aux){
	// You MAY use this function
	if (n == NULL) return -1;

    int L = my_recur(n->left, aux) + 1, R = my_recur(n->right, aux) + 1;
    aux = std::max(aux, L + R);
    return std::max(L, R);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::furthest_distance() {
	// write your code here
    int res = -1;
    my_recur(mRoot, res);
	return res;
}

#endif
