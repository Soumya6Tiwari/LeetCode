class Solution {
public:
    int hammingWeight(uint32_t n)
    {
        int count=0,num,val,i,j;
        while(n>0)
        {
            num=n%2;
            if(num==1)
            {
                count++;
            }
            n=n/2;
        }
        return count;
        
    }
};