class Solution {
public:
    int numberOfSpecialChars(string word) {
        int cnt=0;
        unordered_map<int, int> f;
        for(auto c:word)
            f[c]++;
        
        for(auto it=f.begin(); it!=f.end(); it++){
            int curr = it->first;
            if(f.count(curr+32))
                cnt++;
        }
        
        return cnt;
    }
};