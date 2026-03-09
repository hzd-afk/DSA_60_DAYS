class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans(0);
        if(p.length() > s.length()) return ans;
        unordered_map<char,int>scount;
        unordered_map<char,int>pcount;

        for(int num=0;num<p.length();num++){
            scount[s[num]]++;
            pcount[p[num]]++;
        }
        if(scount==pcount) ans.push_back(0);
        

        int left = 0;
        for(int right = p.length(); right < s.length(); right++){
            scount[s[right]]++;
            scount[s[left]]--;

            if(scount[s[left]]==0){
                scount.erase(s[left]);
            }
            if(scount==pcount){
                ans.push_back(left+1);
            }
            left++;
            
        }
        return ans;
    }
};