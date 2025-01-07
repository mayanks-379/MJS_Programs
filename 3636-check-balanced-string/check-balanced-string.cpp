class Solution {
public:
    bool isBalanced(string num) {
        int os=0, es=0;
        int n = num.length();
        for(int i=0; i<n; i=i+2){
            es += (num[i]-'0');
            if((i+1)<n){
                os += (num[i+1]-'0');
            }
        }

        return es==os ? 1 : 0;
    }
};