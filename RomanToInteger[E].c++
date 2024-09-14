class Solution {
public:
    int romanToInt(string s) {
        string roman="IVXLCDM";
        int sum=0;
        for(int i = 0;i<s.length();i++){

            for(int k = 0; k < roman.length();k++){
                if(s[i]==roman[k] && k==0){
                    if(s[i+1]==roman[k+1] || s[i+1]==roman[k+2]){
                        sum-=1;
                    }else{
                    sum+=1;}
                }
                if(s[i]==roman[k] && k==1){
                    sum+=5;
                }
                if(s[i]==roman[k] && k==2){
                    if(s[i+1]==roman[k+1] || s[i+1]==roman[k+2]){
                        sum-=10;
                    }else{
                    sum+=10;}
                    
                }
                if(s[i]==roman[k] && k==3){
                    sum+=50;
                }
                if(s[i]==roman[k] && k==4){
                    if(s[i+1]==roman[k+1] || s[i+1]==roman[k+2]){
                        sum-=100;
                    }else{
                    sum+=100;}
                }
                if(s[i]==roman[k] && k==5){
                    sum+=500;
                }
                if(s[i]==roman[k] && k==6){
                    sum+=1000;
                }
            }
 
        }

        return sum;

    }
};