class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int maxarea = 0;
        
        while(left<right){
            int currentArea = min(height[right],height[left])*(right-left);
            maxarea = max(maxarea,currentArea);
            if(height[left]<=height[right]){
                left++;
            }
            else{
                right--;   
            }
              
        }
        return maxarea;
    }
};