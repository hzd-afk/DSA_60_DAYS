class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>subString;
        int left = 0;
        int maxLen = 0;
        for(int right = 0; right < s.size(); right++)
        {
            while(subString.count(s[right])!=0){
                subString.erase(s[left]);
                left++;
            }
            subString.insert(s[right]);
            maxLen = max(maxLen,right-left+1);
        }
        return maxLen;
    }
};