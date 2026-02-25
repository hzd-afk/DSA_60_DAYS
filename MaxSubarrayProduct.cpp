class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int old_max=nums[0];
        int old_min=nums[0];
        int result=nums[0];
        
        for(int i=1;i<n;i++){
            int temp_max = old_max;
            int temp_min = old_min;
            int current=nums[i];
            old_max = max({current,current*temp_max,current*temp_min});
            old_min = min({current,current*temp_max,current*temp_min});
            result = max(result,old_max);
        }
        return result;
    }
};