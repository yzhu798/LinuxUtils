#include <iostream>

using namespace std;

template<class T>
void bubsort(T A[],int len)
{
    cout <<__func__ << endl;
    bool isSored = true;
    for(int left = 0;   left < len - 1 && isSored;  left++){//前-》后 isSored优化
        isSored = false;
        for(int right = len - 1;  right > left; right--){//后-》前
            if(A[right] < A[right-1]){
                swap(A[right],A[right-1]);
                isSored = true;
            }
        }
    }
}
template<class T>

void inssort(T A[],int len)
{
    cout <<__func__ << endl;
    for(int left = 1; left < len; left++){
        T tp = A[left];//待插入元素

        int right = left;
        for(; right >= 1 && tp < A[right-1]; right--)//有序
            A[right] = A[right - 1];//赋值，非交换
        A[right] = tp;
    }
}

template<class T>
void selsort(T A[],int len)
{
    cout <<__func__ << endl;
    for(int left = 0;left < len - 1;left++){

        int right = len - left -1;
        int lowindex = left;
        int maxindex = right;

        for(int right = len - left -1;right > left;right--){
            if(A[right] > A[maxindex])
                maxindex = right;
            if(A[right] < A[lowindex])
                lowindex = right;
        }
        swap(A[left],A[lowindex]);
        swap(A[right],A[maxindex]);
    }
}
int _main()
{

    int array[] = {1,5,6,9,8,7,4,5,41,55};
    selsort<int>(array,sizeof(array)/sizeof(array[0]));
    for(auto a: array){cout << a <<" ";}
    cout << "Hello World!" << endl;
    return 0;
}
