class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* n=head;
        ListNode* c=head;
        ListNode* p=NULL;

        while(n){
            n=n->next;
            c->next=p;
            p=c;
            c=n;
        }

        return p;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* h1=head;
        ListNode* h2=slow->next;
        slow->next=NULL;

        h2=reverse(h2);

        ListNode* t1=h1;
        ListNode* t2=h2;

        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;

        while(t1 && t2){
            temp->next=t1;
            t1=t1->next;
            temp=temp->next;

            temp->next=t2;
            t2=t2->next;
            temp=temp->next;
        }

        if(t1!=NULL){
            temp->next=t1;
            t1=t1->next;
            temp=temp->next;
        }

        head=dummy->next;
    }
};