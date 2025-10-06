class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i=i+2){
            arr.push_back(nums[i+1]);
            arr.push_back(nums[i]);
        }

        return arr;
    }
};