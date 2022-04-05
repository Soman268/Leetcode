class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i=0, j=height.size()-1;
        int mx=0;
        
        while(i<j){
            mx=max((j-i)*min(height[i],height[j]),mx);
            if(height[i]==height[j]){
                j--,i++;
            }else if(height[i]> height[j]){
                j--;
            }else {
                i++;
            }
        }
        
        return mx;
    }
};