class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> f;
        int res = 0;
        for(auto i:nums)
            f[i]++;
        
        for(auto [k,v]:f){
            if(v==2)
                res ^= k;
        }
        
        return res;
    }
};