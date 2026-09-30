class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t f=1ll<<31;
        uint32_t ans=0;
        while(n)
        {
            if(n&1)ans|=f;
            f>>=1;
            n>>=1;
        }
        return ans;
    }
};
