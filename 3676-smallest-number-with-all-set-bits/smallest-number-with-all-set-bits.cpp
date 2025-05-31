class Solution {
public:
    int smallestNumber(int n) {
        int num = 0, i =0;
        while(n){
            i++;
            n = n>>1;
        }

        int ans=0;
        for(int k=0; k<i; k++){
            ans = ans + pow(2, k);
        }
        return ans;
    }
};