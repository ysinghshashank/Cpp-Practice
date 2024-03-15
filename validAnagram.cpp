class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        int arrS[26]={0};
        for(int i=0;i<s.length();i++){
            arrS[s[i]-'a']++;
            arrS[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(arrS[i]!=0){
                return false;
            }
        }
        return true;
    }
};