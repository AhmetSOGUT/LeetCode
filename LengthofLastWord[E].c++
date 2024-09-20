class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0,ctrl=0;
        for(int i = s.length()-1; i >= 0 ; i--){
            
            if(s[i]!=' '){
            ctrl=1;
             length++;
            }
            else if(s[i]==' ' && ctrl == 1){
            return length;
            } 

        }
        return length;
    }
};