class Solution {
public:
    int maxProduct(int n) {
        int fl=0, sl=0, temp=n;

        while(temp){
            int r = temp%10;
            if(r>=fl){
                sl = fl;
                fl = r;
            }
            else if(r>sl){
                sl = r;
            }
            temp /= 10;
        }
        
        return fl*sl;
    }
};