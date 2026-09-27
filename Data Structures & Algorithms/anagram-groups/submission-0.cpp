class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>>p;
        for(auto q:strs)
        {
            string t=q;
            sort(q.begin(),q.end());
            p[q].push_back(t);
        }
        for(auto q:p)
        {
            vector<string>t;
            for(auto r:q.second)
                t.push_back(r);
            ans.push_back(t);
        }
        return ans;
    }
};
