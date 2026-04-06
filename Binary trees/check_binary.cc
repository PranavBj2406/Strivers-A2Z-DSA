
//sub optimal solution 
void helper(TreeNode *root,vector<int> &arr)
{
    if(root==nullptr)
    {
        arr.push_back(INT_MIN);
        return ;
    }
    arr.push_back(root->val);
    helper(root->left,arr);
    helper(root->right,arr);
}

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> A;
        vector<int> B;
        helper(p,A);
        helper(q,B);
        if(A!=B) return false;
        return true;
    }
};

//optimal solution


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
       if(p==nullptr || q==nullptr)
       {
            return (p==q);
       }
       return (p->val == q->val) && isSameTree(p->left,r->left) && isSameTree(p->right,q->right);
    }
};