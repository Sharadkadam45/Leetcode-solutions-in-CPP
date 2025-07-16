class Solution {
public:
    bool vowel(string word){
        int n=word.size();
        for(int i=0;i<n;i++){
            if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U') return true;
        }
        return false;
    }
    bool consonant(string word){
        int n=word.size();
        for(int i=0;i<n;i++){
            int x=(int)(word[i]);
            if(!(x>=48 && x<=57) &&  word[i]!='a' && word[i]!='e' && word[i]!='i' && word[i]!='o' && word[i]!='u' && word[i]!='A' && word[i]!='E' && word[i]!='I' && word[i]!='O' && word[i]!='U') {
                cout<<i<<endl;
                return true;
            }
        }
        return false;
    }
    bool containdigitsandletters(string s){
        int n=s.size();
        int y=true;
        for(int i=0;i<n;i++){
            int x=(int)(s[i]);
            if((x>=48 && x<=57) || (x>=65 && x<=90) || (x>=97 && x<=122)) {
                y=true;
            }
            else{
                cout<<i<<endl;
                cout<<x<<endl;
                y=false;
                break;
            }
        }
        return y;
    }
    bool isValid(string word) {
        int n=word.size();  
        if(n<3) return false;
        return vowel(word) && consonant(word) && containdigitsandletters(word);
    }
};