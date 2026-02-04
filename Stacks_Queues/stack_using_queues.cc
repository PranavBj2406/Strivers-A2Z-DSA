#include<bits/stdc++.h>
using namespace std;

class stack
{
    queue<int> q;
    public:
    void push(int x) {
        // Get size 
        int s = q.size(); 
        q.push(x); 
        // Move elements before new element to back
        for (int i = 0; i < s; i++) {
            q.push(q.front()); 
            q.pop(); 
            
        }
    }
    
    int pop()
    {
        int n=q.front();
        q.pop();
        return n;
    }

   int top()
   {
    return q.front();
   } 
};


int main()
{
return 0;
}