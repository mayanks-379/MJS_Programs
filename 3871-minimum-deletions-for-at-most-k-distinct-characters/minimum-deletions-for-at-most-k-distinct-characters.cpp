class Solution {
public:
    int minDeletion(string s, int k) {
        map<char, int> mp;
        int len = s.length();

        for(auto c:s){
            mp[c]++;
        }

        int dis = mp.size();

        if(dis <= k) return 0;

        int r = dis-k;

        vector<pair<char, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), [](pair<char, int>& a, pair<char, int>& b) {
            return a.second < b.second;
        });

        int sum=0;

        for(int i=0; i<r; i++){
            sum += vec[i].second;
        }

        return sum;
    }
};