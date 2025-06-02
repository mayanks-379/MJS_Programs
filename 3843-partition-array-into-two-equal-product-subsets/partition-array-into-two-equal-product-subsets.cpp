typedef __int128 ll;

class Solution {
public:
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        int n = nums.size();
        ll ans = 1;
        for(auto i:nums){
            ans *= i;
        }

        if(ans > (ll)target*target)
            return false;

        if(ans != (ll)target*target)
            return false;

        int mx = (1<<n);
        for(int i=1; i<mx-1; i++){
            ll sub = 1;
            for(int j=0; j<n; j++){
                if(i & (1<<j)){
                    sub *= nums[j];
                    if(sub>target)
                    break;
                }
            }
            if(sub == target)
            return true;
        } 

        return false;
    }
};