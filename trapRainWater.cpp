class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left_max = 0,right_max = 0;
        int left = 0;
        int right = n-1;
        int water = 0;

        while(left<=right){
            left_max = max(left_max,height[left]);
            right_max = max(right_max,height[right]);

            if(left_max<=right_max){
                water = water+(left_max - height[left]);
                left++;
            }
            else{
                water = water + (right_max - height[right]);
                right--;
            }
        }
        return water;
    }
};