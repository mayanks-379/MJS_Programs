class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int min = cost[0], n = cost.size();
        vector<int> ans;
        ans.push_back(cost[0]);

        for(int i=1; i<n; i++){
            if(cost[i] < min){
                min = cost[i];
            }
            ans.push_back(min);
        }

        return ans;
    }
};