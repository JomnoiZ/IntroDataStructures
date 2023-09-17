#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int,int> > vec) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
  stack <int> stk;
  for (auto [o, v] : vec) {
    if (o == 0) {
      int b = stk.top(); stk.pop();
      int a = stk.top(); stk.pop();

      if (v == 0) a += b;
      else if (v == 1) a -= b;
      else if (v == 2) a *= b;
      else a /= b;
      stk.push(a);
    }
    else stk.push(v);
  }
  return stk.top();
}

#endif
