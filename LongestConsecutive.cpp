class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int Longest = 0;
        unordered_set<int>s(nums.begin(),nums.end());

        for(int num : s){
            if(s.count(num-1)==0){
                int current = num;
                int length = 1;
            
            while(s.count(current+1)){
                current++;
                length++;
            }
            Longest = max(Longest,length);
            }
        }
        return Longest;
    }
};