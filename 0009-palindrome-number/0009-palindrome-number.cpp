class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || x!=0 && x % 10 == 0)
            return false;
        if(x == 0)
            return true;
        long sum = 0;
        long n = x;
        while(x > 0){
            sum = sum * 10 + x % 10;
            x /= 10;
        }
        if(sum == n)
            return true;
        else
            return false;
    }
};