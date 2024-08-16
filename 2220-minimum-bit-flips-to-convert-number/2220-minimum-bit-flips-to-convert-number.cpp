class Solution {
public:
    int minBitFlips(int start, int goal)
    {
        int val,num,count=0;
        val=start^goal;
        while(val>0)
        {
            if(val&1==1)
            {
                count++;
            }
            val=val>>1;
        }
        return count;
    }
};