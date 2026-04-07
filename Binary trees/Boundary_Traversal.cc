#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data,TreeNode *left1,TreeNode *right1)
    {
        val=data;
        left=left1;
        right=right1;
    }
};


void leaf_node_add(TreeNode *root,vector<int> &ans)
{
    TreeNode *temp=root->left;
    while(temp!=nullptr)
    {
        if(temp->left!=nullptr) 
        {
            ans.push_back(temp->val);
            temp=temp->left;
        }
        else if(temp->right!=nullptr)
        {
            ans.push_back(temp->val);
            temp=temp->right;
        }
        else if(temp->right==nullptr && temp->left==nullptr)
        {
            break;
        }
    }
}
void helper(TreeNode* root,vector<int> &ans)
{
    if(root==nullptr)
    {
        return ;
    }
    if(root->left==nullptr && root->right==nullptr)
    {
        ans.push_back(root->val);
        return ;
    }
    helper(root->left,ans);
    helper(root->right,ans);
}

void traversal_right(TreeNode *root,vector<int> &temp1)
{
    TreeNode *temp=root->right;
    while(temp!=nullptr)
    {
        if(temp->right!=nullptr)
        {
            temp1.push_back(temp->val);
            temp=temp->right;
        }
        else if(temp->left!=nullptr)
        {
            temp1.push_back(temp->val);
            temp=temp->left;
        }
        else
        {
            break;
        }
    }
}

vector<int> boundary_traversal(TreeNode *root)
{
   vector<int> ans;
   vector<int> temp1;
   
    if(root == nullptr)
       return ans;

   if(!(root->left == nullptr && root->right == nullptr))
       ans.push_back(root->val);


   leaf_node_add(root,ans);
   helper(root,ans);
   traversal_right(root,temp1);
   reverse(temp1.begin(),temp1.end());
   for(int i=0;i<temp1.size();i++)
   {
    ans.push_back(temp1[i]);
   }
   return ans;
}

int main()
{
return 0;
}