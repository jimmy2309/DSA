class Solution {
public:
    int reverse(int x) {
        int rn = 0 ;
        
        if(x==0)
        {
            return 0;
        }
        if(x>0)
        {
        while(x>0)
        {
            int lastdigit = x % 10 ;
            rn = (rn*10) + lastdigit ;
            x = x / 10 ;
                      
        }
        
        }
        if(x<0)
        {
            x = 0-x;
            while(x>0)
        {
            int lastdigit = x % 10 ;
            rn = (rn*10) + lastdigit ;
            x = x / 10 ;
                      
        }
        rn = 0-rn;
        
            
        }
        
        return rn;
    }
};