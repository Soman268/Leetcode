class Solution {
public:
    bool isPalindrome(int x) {
        int temp;
        long sum=0;
        int r;
        temp=x;
        while(x>0)
        {
            r=x%10;
            sum=(sum*10)+r ;
             x=x/10;
        }
        
        if(temp==sum)
            return true;
        else 
            return false;
    }
};