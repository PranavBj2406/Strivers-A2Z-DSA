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

void pattern11(int num)
{
    int a=1;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<a<<" ";
            a=a+1;
        }
        cout<<endl;
    }
}
void pattern12(int num)
{
    for(int i=0;i<num;i++)
    {
        char a='A';
        for(int j=0;j<=i;j++)
        {
            cout<<a<<" ";
            a=a+1;
        }
        cout<<endl;
    }
}
void pattern13(int num)
{
    for(int i=0;i<num;i++)
    {
        char a='A';
        for(int j=0;j<=num-i-1;j++)
        {
            cout<<a<<" ";
            a=a+1;
        }
        cout<<endl;
    }
}
void pattern14(int num)
{
    char a='A';
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<a<<" ";
        }
        a=a+1;
        cout<<endl;
    }
}

void pattern15(int num)
{
    for(int i=0;i<num;i++)
    {
        char a='E';
        for(int j=0;j<=i;j++)
        {
            cout<<a<<" ";
            a=a-1;
        }
        cout<<endl;
    }
}

void pattern16(int num)
{
    for(int i=1;i<num;i++)
    {
        int a=1;
        char c='A';
        for(int j=1;j<num-i;j++) // space
        {
            cout<<"_";
        }
        for(int j=1;j<=2*i-1;j++) //number
        {
            int breakpoint = (2*i+1)/2;
            cout<<a;     
            if(j<breakpoint) a++;
            else a--;
        }
        for(int j=1;j<num-i;j++) //space
        {
            cout<<"_";
        }
        cout<<endl;
    }

}

void pattern17(int num)
{
    int stars,space;
    for(int i=0;i<2*num;i++) 
    {
        if(i<num) 
        {
            stars=(num-i);
            space=2*i;
        }
        else
        {
            stars=(i-num+1);
            space=(2*num-2*stars);
        }
        for(int j=0;j<stars;j++) //stars
        {
         cout<<"* ";   
        }
        for(int j=0;j<space;j++) //space
        {
            cout<<"  ";
        }
        for(int j=0;j<stars;j++) //stars
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern18(int num)
{
    int stars,space;   
    for(int i=1;i<2*num;i++)
    {   
        if(i<=num)
        {
            stars=i;
            space=2*(num-i);    
        }
        else
        {   
            stars=2*num-i;
            space=2*(i-num);          
        }
        for(int j=1;j<=stars;j++) //stars
        {
            cout<<"* ";
        }
        for(int j=1;j<=space;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=stars;j++) //stars
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}

void pattern19(int num)
{
    for(int i=0;i<num;i++)
    {
        for (int j = 0; i < num; j++)
        {    
            
            /* code */
        }
        
    }
}

int main()
{
    int num = 5;
    // pattern10(num);
    pattern18(num);
    return 0;
}