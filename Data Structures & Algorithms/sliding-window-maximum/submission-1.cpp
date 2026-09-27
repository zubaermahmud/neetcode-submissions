class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        vector<int>ans;
        queue<int>av;
        deque<int>bv;
        for(int i=0;i<k;i++)
        {
            av.push(a[i]);
            while(!bv.empty())
            {
                if(a[i]>bv.front())
                    bv.pop_front();
                else
                    break;
            }
            bv.push_front(a[i]);
        }
        ans.push_back(bv.back());
        for(int i=k;i<a.size();i++)
        {
            if(bv.back()==av.front())
                bv.pop_back();
            av.pop();

            av.push(a[i]);
            while(!bv.empty())
            {
                if(a[i]>bv.front())
                    bv.pop_front();
                else
                    break;
            }
            bv.push_front(a[i]);
            ans.push_back(bv.back());
        }
        return ans;
    }
};
