class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<nums.size(); i++){
            nums[i] = nums[i]&1;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};