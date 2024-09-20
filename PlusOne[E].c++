class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int carr=0,first=1;

        for(int i = digits.size()-1; i>=0; i--){

            if(digits[i]==9 && (first==1 || carr == 1)){
                digits[i]=0;
                if(i == 0){
                    digits.insert(digits.begin(),1);
                }
                first=0;
                carr=1;
            }
            else {
                digits[i]+=1;
                
                    return digits;
            }
        }
        return digits;
    }
};