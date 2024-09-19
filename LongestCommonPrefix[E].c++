class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string out=strs[0];
           

        for(int i = 1; i<strs.size();i++){

            string suanki=strs[i];
           int l =0;
           while(l<out.length() && out[l]==suanki[l] && suanki.length() >l){
            
            l++;

           }         
           out=out.substr(0,l);

           if(out.empty()){
            return "";
           }
                           
            }
return out;

    }
}; 