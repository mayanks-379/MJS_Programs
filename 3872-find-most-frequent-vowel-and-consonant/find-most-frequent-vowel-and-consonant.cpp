class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26] = {0};
        string vow = "aeiou";
        for(char ch:s){
            freq[ch-'a']++ ;
        }

        int max_v=0;
        int max_c=0;

        for(int i=0; i<26; i++){
            char ch = 'a'+i;
            if(vow.find(ch) != string::npos){
                max_v = max(max_v, freq[i]);
            }
            else{
                max_c = max(max_c, freq[i]);
            }
        }

        return max_v+max_c;
    }
};