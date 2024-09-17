class Solution {
public:
    string reversePrefix(string word, char ch) {
        char temp;
    
        for( int i = 0; i<word.length();i++){
            if(word[i]==ch){

                 int left = 0, right = i;
                while (left < right) {
                    swap(word[left], word[right]);
                    left++;
                    right--;
                }
                
                return word;
            }
        }
       
         return word;
    }
};