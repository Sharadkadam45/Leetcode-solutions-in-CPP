class Solution {
public:
    ListNode* merge(ListNode* list1, ListNode* list2){
        /*ListNode* c=new ListNode(-1);
        ListNode* tc=c;
        ListNode* t1=list1;
        ListNode* t2=list2;
        while(t1!=NULL && t2!=NULL){
            if(t1->val <= t2->val){
                ListNode* t=new ListNode(t1->val);
                tc->next=t;
                tc=t;
                t1=t1->next;
            }
            else{
                ListNode* t=new ListNode(t2->val);
                tc->next=t;
                tc=t;
                t2=t2->next;
            }
        }
        if(t1==NULL){
            tc->next=t2;
        }
        if(t2==NULL){
            tc->next=t1;
        }
        // return c->next;*/
        

        // without extra space


        ListNode* t1=list1;
        ListNode* t2=list2;
        ListNode* c=new ListNode(-1);
        ListNode* tc=c;
        while(t1!=NULL && t2!=NULL){
            if(t1->val <= t2->val){
                
                tc->next=t1;
                tc=t1;
                t1=t1->next;
            }
            else{
               
                tc->next=t2;
                tc=t2;
                t2=t2->next;
            }
        }
        if(t1==NULL){
            tc->next=t2;
        }
        if(t2==NULL){
            tc->next=t1;
        }
        return c->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* a=head;
        ListNode* b=slow->next;
        slow->next=NULL;
        a=sortList(a);
        b=sortList(b);
        ListNode* c=merge(a,b);
        return c;
    }
};