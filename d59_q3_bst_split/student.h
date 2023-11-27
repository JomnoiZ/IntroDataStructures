#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  if (mRoot == NULL) return result;

  node *ptr = mRoot, *ptr1 = NULL, *ptr2 = NULL;
  node *new_root1 = NULL, *new_root2 = NULL;
  while (ptr != NULL) {
    if (ptr->data.first < val) {
      if (ptr1 == NULL) {
        new_root1 = ptr;
        ptr1 = ptr;
        ptr1->parent = NULL;
      }
      else {
        ptr1->right = ptr;
        ptr->parent = ptr1;
        ptr1 = ptr1->right;  
      }
      ptr = ptr->right;
    }
    else {
      if (ptr2 == NULL) {
        new_root2 = ptr;
        ptr2 = ptr;
        ptr2->parent = NULL;
      }
      else {
        ptr2->left = ptr;
        ptr->parent = ptr2;
        ptr2 = ptr2->left;
      }
      ptr = ptr->left;
    }
  }
  
  if (ptr1 != NULL) ptr1->right = NULL;
  if (ptr2 != NULL) ptr2->left = NULL;
  mRoot = new_root1;
  result.mRoot = new_root2;

  return result;
}

#endif
