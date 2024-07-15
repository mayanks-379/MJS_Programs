class Solution {
public:
    int minimumChairs(string s) {
         int res=0, c=0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'E'){
                res++;
            }
            else{
                c = max(res, c);
                res--;
            }
        }
        
        c = max(res, c);
        return c;
    }
};