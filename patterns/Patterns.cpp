#include <bits\stdc++.h>
using namespace std;

void pattern4(int num)
{
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < num - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern5(int num)
{
    for (int i = 0; i <= num; i++)
    {
        for (int j = 1; j < num - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern6(int num)
{

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < num - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern7(int num)
{
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern8(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * num - 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int num)
{
    for (int i = 1; i <= 2 * num - 1; i++)
    {
        int stars = i;
        if (i > num)
            stars = 2 * num - 1;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern10(int num)
{
    int start;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            start = 0;
        }
        else
        {
            start = 1;
        }
        for (int j = 0; j < i; j++)
        {
            cout << start;
            start=!start;
        }
        cout << endl;
    }
}
void pattern11()
{
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<i+1;j++)
        {
            cout<<j;
        }
        for(int j=0;j<8-2*i;j++) // rather than 8-2i go for 2*(n-1) // more preferred 
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--) // logic to present no. in reverse
        {
            cout<<j;
        }
        cout<<endl;
    }
}

int main()
{
    int num = 5;
    // pattern10(num);
    pattern11();
    return 0;
}