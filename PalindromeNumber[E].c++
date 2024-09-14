class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false; 
        }

        int yenisayi = 0, kalan = 0, hasx = x;

        while (x != 0) {
            kalan = x % 10;
            
            
            if (yenisayi > (INT_MAX - kalan) / 10) {
                return false; 
            }

            yenisayi = yenisayi * 10 + kalan;
            x /= 10;
        }
 
        return hasx == yenisayi; 
    }
};
 