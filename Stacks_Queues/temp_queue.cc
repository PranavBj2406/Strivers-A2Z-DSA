#include<bits/stdc++.h>
using namespace std;
class Queue {
    int *arr;
    int start;
    int end;
    int size;

public:
    Queue(int n=1000)
    {
        size=n;
        start=-1;
        arr=new int[size];
        end=-1;
        
    }
    int currsize=0;
    void push(int x)
    {
        if(currsize==size)
        {
            return ;
        }
    }


    int pop()
    {
        if(end==-1) return -1;
        return arr[start--];
    }

    int top()
    {
        if(end==-1) return -1;
    
    }    
};


















int main()
{
return 0;
}