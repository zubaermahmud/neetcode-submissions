class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        vector<int>ans(a.size(),0);
        stack<int>av;
        for(int i=a.size()-1;0<=i;i--){
            while(!av.empty())
            {
                if(a[av.top()]<=a[i])
                    av.pop();
                else
                    break;
            }
            if(!av.empty())
                ans[i]=av.top()-i;
            av.push(i);
        }
        return ans;
    }
};
