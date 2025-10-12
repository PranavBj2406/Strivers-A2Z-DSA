 #include<bits/stdc++.h>
 using namespace std;
 int count_inversion(vector<int> ans)
 {
    int count=0;
    int n=ans.size();
    int index=0;
    for(int i=0;i<n-1;i++) // i -> n-1 so to prevent out of bound
    {
        index=i+1;
        while(index<n)
        {
            if(ans[i]>ans[index]){
                count++;
                index++;
            }
            else{
                index++;
            }
        }
    }
    return count;
 }

 int main()
{
    vector<int> arr = {2, 4, 1, 3, 5};  // example input
    cout << "Inversion count: " << count_inversion(arr) << endl;
    return 0;
}