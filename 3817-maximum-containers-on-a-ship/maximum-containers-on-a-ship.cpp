class Solution {
public:
    int maxContainers(int n, int w, int maxW) {
        int cells = n*n;

        if(cells * w <= maxW) return cells; 

        return maxW/w;
    }
};