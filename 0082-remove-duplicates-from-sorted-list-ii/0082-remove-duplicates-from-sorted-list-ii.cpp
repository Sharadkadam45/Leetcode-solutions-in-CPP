class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* dummy=new ListNode(-1);
        ListNode* t=dummy;

        int c=0;
        ListNode* p=head;
        ListNode* n=head;

        while(n){
            if(p->val==n->val){
                c++;
                n=n->next;
            }
            else{
                if(c==1){
                    t->next=p;
                    t=t->next;
                }
                p=n;
                c=0;
            }
        }

        if(c==1){
            t->next=p;
            t=t->next;
            t->next=NULL;
        }
        else t->next=NULL;

        return dummy->next;
    }
};