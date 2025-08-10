class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* p=NULL;
        ListNode* c=head;
        ListNode* n=head;

        while(n){
            n=n->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
    ListNode* reverseList(ListNode* head) {
        return reverse(head);
    }
};