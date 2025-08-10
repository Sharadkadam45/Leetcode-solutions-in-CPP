class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* fast=head;
        for(int i=1;i<=n;i++){
            fast=fast->next;
        }
        if(fast==NULL) return head->next;

        ListNode* slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next;
        }

        slow->next=slow->next->next;
        return head;
    }
};