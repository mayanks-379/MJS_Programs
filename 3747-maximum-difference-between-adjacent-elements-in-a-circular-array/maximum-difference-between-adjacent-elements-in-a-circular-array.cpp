class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int res=0, n=nums.size();

        for(int i=0; i<n-1; i++){
            if(res<abs(nums[i]-nums[i+1])){
                res = abs(nums[i]-nums[i+1]);
            }
        }

        if(res < abs(nums[n-1]-nums[0])){
            res = abs(nums[n-1]-nums[0]);
        }

        cout<<res<<endl;

        return res;
    }
};