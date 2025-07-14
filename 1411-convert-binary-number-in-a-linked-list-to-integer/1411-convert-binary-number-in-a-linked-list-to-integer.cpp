class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        int ans=0;
        int n=v.size();
        if(v[n-1]==1) ans++;
        else ans=0;
        int p=2;
        for(int i=n-2;i>=0;i--){
            ans+=(p*v[i]);
            p*=2;
        }
        return ans;
    }
};