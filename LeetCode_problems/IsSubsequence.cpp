// problem link
// https://leetcode.com/problems/is-subsequence/description/


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pos = 0;
        int count = 0;

        for(int i = 0; i < t.length();i++){
            if(s[pos] == t[i]){
                count++;
                pos++;
            }


        }

        if(count == s.length() || s == ""){
            return true;
        }else{
            return false;
        }
    }
};
