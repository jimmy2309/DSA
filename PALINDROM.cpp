class Solution {
public:
    bool isPalindrome(int x) {
        int rn = 0;
        int n = x ;
        if(x == 0)
            return true;
        if(x < 0)
            return false;
        if(x > 0)
        {
            while(x > 0)
            {
                int lastdigit = x % 10;
                rn = (rn*10) + lastdigit;
                x = x/10;

            }
            
        }
        if(rn == n)
                return true;
            
            return false;
    }
};