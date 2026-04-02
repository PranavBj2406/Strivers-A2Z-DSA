#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data1,TreeNode *left1,TreeNode *right1)
    {
        data=data1;
        left=left1;
        right=right1;
    }
};

void Traversals(TreeNode *root)
{
    int num=1;
    TreeNode *temp=root;
    vector<TreeNode *> Preorder;
    vector<TreeNode *> Postorder;
    vector<TreeNode *> Inorder;
    stack<pair<TreeNode*,int>> st;
    st.push({temp,num});
    // another appraoch that you can use is auto it:st.top()
    // then u can use it.second and it.first;
    while(!st.empty())
    {
        if(st.top().second==1)
        {
            Preorder.push_back(st.top().first);
            st.top().second++;
            if(st.top().first->left!=nullptr)
            {
                temp=st.top().first->left;
                st.push({temp,1});
            }
        }
        if(st.top().second==2)
        {
            Inorder.push_back(st.top().first);
            st.top().second++;
            if(st.top().first->right!=nullptr)
            {
                temp=st.top().first->right;
                st.push({temp,1});
            }
        }
        if(st.top().second==3)
        {
            Postorder.push_back(st.top().first);
            st.pop();
        }
    }    
    // print out all vectors
}






int main()
{
return 0;
}