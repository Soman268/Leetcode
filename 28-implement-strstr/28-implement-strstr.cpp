class Solution {
public:
    int strStr(string haystack, string needle) {
        char n = needle[0];
        int haysize = haystack.size();
        int nsize = needle.size();
        int match = 0;
        for(int i=0; i<haysize; ++i){
            if(haystack[i]==n){
                match = 1;
                for(int j=0; j<nsize; ++j){
                    if(haystack[i+j]!=needle[j]){
                        match = 0;
                        break;
                    }
                }
                if(match == 1) return i;
            }
        }
        return -1;
    }
};