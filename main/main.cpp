#include <iostream>
#include "sort.hpp"
using namespace std;


int main()
{

    int array[] = {1,5,6,9,8,7,4,5,41,55};
    selsort<int>(array,sizeof(array)/sizeof(array[0]));
    for(auto a: array){cout << a <<" ";}
    cout << "Hello World!" << endl;
    return 0;
}
