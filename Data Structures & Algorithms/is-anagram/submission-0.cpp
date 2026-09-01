class Solution {
public:
    unordered_map<char, int> check(string s){
        int n = s.length();
        unordered_map<char,int> mp;
        for(int i=0; i<n; i++){
            mp[s[i]] ++;
        }
        return mp;
    }
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char,int> mpS = check(s);
        unordered_map<char,int> mpT = check(t);

        return mpS== mpT;

        
    }
};
