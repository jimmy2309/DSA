class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int mainnumber = N;
        int count = 0;
        while(N >0)
        {
            int lastdigit = N%10;
            if(lastdigit > 0 && mainnumber%lastdigit == 0)
            {
                count++;
            }
            N = N/10;
        }
        return count;
    }
};