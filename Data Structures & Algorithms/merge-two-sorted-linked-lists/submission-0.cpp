/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *curr=NULL,*root=NULL;
        while(list1 || list2)
        {
            int x=(list1?list1->val:101);
            int y=(list2?list2->val:101);
            int val;
            if(x<=y)
            {
                val=x;
                if(list1)
                    list1=list1->next;
            }
            else
            {
                val=y;
                if(list2)
                    list2=list2->next;
            }
            ListNode *v=new ListNode(val);
            if(root)
            {
                curr->next=v;
                curr=v;
            }
            else
            {
                curr=v;
                root=v;
            }
        }
        return root;
    }
};
