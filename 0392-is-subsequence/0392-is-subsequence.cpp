class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0,j= 0;
        
        
        while(i<t.length()){
            if(s[j]==t[i]){
                j++;

            }
            i++;
            
        }

        if(j==s.length())return true;

        return false;
        
    }
};