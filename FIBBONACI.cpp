class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1)
        {
            return n;
        }
        if(n == 2)
        {
            return 1;
        }
        return fib(n-2) + fib(n-1);
        
    }
};