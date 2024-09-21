class Solution {
public:
    int strStr(string haystack, string needle) {
        int ctrl=0,out=-1;
        
        if(needle.length()>haystack.length()){
            return out;
        }
        
        for(int i = 0; i<haystack.length();i++){

            if(haystack[i]==needle[ctrl]){
                
                 if(ctrl==0){
                    out=i;
                }
                ctrl++;
               
                if(ctrl==needle.length()){
                    return out;
                }
            }else if(haystack[i]!=needle[ctrl]){
                if(out!=-1){
                    i=out;
                }
                ctrl=0;
                out=-1;
            }
        }
        if(ctrl!=needle.length()){
            out=-1;
        }
        return out;
    }
};