class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(tokens[i]=="+" || tokens[i]=="-"  || tokens[i]=="*"  || tokens[i]=="/" ){
                int s=st.top();
                st.pop();
                int f=st.top();
                st.pop();

                if(tokens[i]=="+") st.push(f+s);
                else if(tokens[i]=="-") st.push(f-s);
                else if(tokens[i]=="/") st.push(f/s);
                else st.push(f*s);
            }
            else{
                st.push(stoi(tokens[i]));
            }

        }
        return st.top();
    }
};