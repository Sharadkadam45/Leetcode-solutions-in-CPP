class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        int n=s.size();

        int minn=INT_MAX;

        for(int i=0;i<n;i++){
            minn=min(minn,s[i]-'0');
        }
        // if(maxx==minn) return num;
        for(int i=0;i<n;i++){
            if((s[i]-'0')==minn){
                s[i]=(char)57;
                break;
            }
        }
        // cout<<s<<endl;
        return stoi(s);
    }
};