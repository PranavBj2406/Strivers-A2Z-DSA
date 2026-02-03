#include <bits/stdc++.h>
using namespace std;

class Stack {
    int* arr;
    int top;
    int size;

public:
    Stack(int n = 1000) {
        size = n;
        arr = new int[size];
        top = -1;
    }

    void push(int x) {
        if (top == size - 1) return;
        arr[++top] = x;
    }

    int pop() {
        if (top == -1) return -1;
        return arr[top--];
    }

    int peek() {
        if (top == -1) return -1;
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }
};

int main()
{
    return 0;
}