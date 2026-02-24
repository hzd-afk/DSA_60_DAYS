class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;

        int prefix = 0;
        int count = 0;
        for(int i : nums){
            prefix = prefix + i;
            if(mp.find(prefix-k)!=mp.end()){//checking if the current prefix exists or not
                count = count + mp[prefix-k];
            }
            mp[prefix]++;
        }
        return count;
    }
};