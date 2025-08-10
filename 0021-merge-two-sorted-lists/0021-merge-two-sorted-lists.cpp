class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;

        ListNode* t1=list1;
        ListNode* t2=list2;

        while(t1 && t2){
            // check lower value
            if(t1->val<=t2->val){
                temp->next=t1;
                t1=t1->next;
                temp=temp->next;
            }
            else{
                temp->next=t2;
                t2=t2->next;
                temp=temp->next;
            }
        }

        if(t1==NULL){
            temp->next=t2;
        }
        else{
            temp->next=t1;
        }
        return dummy->next;
    }
};