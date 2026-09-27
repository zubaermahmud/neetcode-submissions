class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        stack<int>av;
        for(int i=prices.size()-1;0<=i;i--)
        {
            if(av.empty())
                av.push(prices[i]);
            else
                av.push(max(av.top(),prices[i]));
        }
        for(int p:prices)
        {
            ans=max(ans,av.top()-p);
            av.pop();
        }
        return ans;
    }
};
