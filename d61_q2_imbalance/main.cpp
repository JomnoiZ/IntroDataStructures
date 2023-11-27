#include <iostream>
#include "map_bst.h"
using namespace std;

int main()
{
    CP::map_bst<int, int> m;

    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int key;
        std::cin >> key;

        m[key] = 1;
    }
    
    m.print();
    std::cout<<m.getValueOfMostImbalanceNode()<<endl;
    return 0;
}
