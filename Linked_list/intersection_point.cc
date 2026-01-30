/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *mover1=headA;
        ListNode *mover2=headB;
        map<ListNode*,int> mpp;
        while(mover1!=nullptr)
        {
            mpp[mover1]=1;
            mover1=mover1->next;
        }
        while(mover2!=nullptr)
        {
            if(mpp.find(mover2)!=mpp.end())
            {
                return mover2;
            }           
            else
            {
            mpp[mover2]
            mover2=mover2->next;
            
            } 
        }
        return nullptr;
    }
};

// brute use hashing

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *mover1=headA;
        ListNode *mover2=headB;
        int l1=0,l2=0;
        while(mover1!=nullptr)
        {
            l1++;
         mover1=mover1->next;   
        }
        mover1=headA;
        while(mover2!=nullptr)
        {
            l2++;
         mover2=mover2->next;   
        }
        mover2=headB;
        int d;
        if(l2>l1)
        {
            d=l2-l1;
            while(d!=0 && mover2!=nullptr)
            {
                mover2=mover2->next;
                d--;
            }
        }
        else
        {
            d=l1-l2;
            while(d!=0 && mover1!=nullptr)
            {
                mover1=mover1->next;
                d--;
            }
        }
        while(mover1!=nullptr)
        {
            if(mover1==mover2)
            {
                return mover1;
            }
            mover1=mover1->next;
            mover2=mover2->next;
        }
        return nullptr;
    }
};

//optimized solu is to equal comaprision of nodes by moving the ptr of longer LL from  d node = l2 -l1 leneght of both nodes then do comapriosn