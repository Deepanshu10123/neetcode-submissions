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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int pow = 0;
        ListNode * p1 = l1;
        ListNode * p2 = l2;
        ListNode * dumm = new ListNode(0) ;
        ListNode * tail = dumm;
        while(p1!=nullptr && p2!=nullptr)
        {
            int val = 0;
            if(pow==0)
            {
                val = p1->val + p2->val;
            } 
            else{
                val= p1->val +p2->val +1 ;
                pow = 0 ;
            }
            if(val>9)
            {
                pow =1;
                val = val%10;
            }
            tail->next = new ListNode(val);
            tail = tail->next;
            p1 = p1->next;
            p2 = p2->next;
        }
        
        while(p1)
        {
            int val = 0;
            val = p1->val + pow;
            pow = 0;
            if(val>9)
            {
                pow =1;
                val = val%10;
            }
            tail->next = new ListNode(val);
            tail = tail->next;
            p1 = p1->next;
        }
        while(p2)
        {
            int val = 0;
            val = p2->val + pow;
            pow = 0;
            if(val>9)
            {
                pow =1;
                val = val%10;
            }
            tail->next = new ListNode(val);
            tail = tail->next;
            p2 = p2->next;
        }
        if(pow==1){
            tail->next = new ListNode(1);
        }
        return dumm->next;
    }
};
