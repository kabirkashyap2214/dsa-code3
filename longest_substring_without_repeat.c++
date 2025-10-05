class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int start = 0, maxLen = 0;

        for(int end = 0; end < s.length(); ++end){
            while(window.count(s[end])){
                window.erase(s[start]);
                ++start;
            }
            window.insert(s[end]);
            maxLen = max(maxLen, end - start + 1);
        }
        return maxLen;
    }
};
