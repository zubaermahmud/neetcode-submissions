class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>a(26,0);
        for(char p:s)
            a[p-'a']++;
        for(char p:t)
            a[p-'a']--;
        for(int p:a)
            if(p)
                return 0;
        return 1;
    }
};
