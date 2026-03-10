class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int maxFreq = 0;
        int result = 0;
        vector<int>frequency(26,0);

        for(int right=0;right<s.length();right++){
            frequency[s[right]-'A']++;
            maxFreq = max(maxFreq,frequency[s[right]-'A']);

            while((right-left+1)-maxFreq > k){
                frequency[s[left]-'A']--;
                left++;
            }
            result = max(result,right-left+1);
        }
        return result;
    }
};