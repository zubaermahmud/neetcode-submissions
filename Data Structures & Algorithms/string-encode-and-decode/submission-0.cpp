class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        string d="3115";
        bool e=0;
        for(auto p:strs)
        {
            ans+=p;
            ans+=d;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int co=0;
        while(1)
        {
            int x=s.find("3115");
            if(x==string::npos)
                break;
            ans.push_back(s.substr(co,x-co));
            co=x+4;
            s[x]='0';
        }
        return ans;
    }
};
