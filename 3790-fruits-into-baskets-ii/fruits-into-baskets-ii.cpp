class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int res = 0, fl = fruits.size(), bl = baskets.size();

        for(int i=0; i<fl; i++){
            int bl = baskets.size();
            for(int j=0; j<bl; j++){
                if(fruits[i] <= baskets[j]){
                    baskets.erase(baskets.begin()+j);
                    break;
                }
            }
        }

        res = baskets.size();
        
        return res;
    }
};