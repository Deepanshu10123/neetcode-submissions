/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr)
        return nullptr;
        Node* head2 = new Node(head->val);
        Node* n = head->next;
        Node* n2 = head2;
        unordered_map<Node*, Node*> m;
        while(n!=nullptr)
        {
            Node* v = new Node(n->val);
            n2->next = v;
            n = n->next;
            n2 = n2->next;
        } 
        Node* p = head;
        Node* p2 = head2;
        while(p!=nullptr)
        {
            m[p]=p2;
            p=p->next;
            p2=p2->next;
        }
        p = head;
        p2 = head2;
        while(p!=nullptr)
        {
            Node* add = p->random; 
            p2->random = m[add];
            p=p->next;
            p2=p2->next;
        }
        return head2;
    }
};
