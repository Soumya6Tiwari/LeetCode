class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        int i,j=0,k,count=0;
        map<char,int>m;
        for(i=0;i<stones.size();i++)
        {
            m[stones[i]]++;
        }
        for(i=0;i<jewels.size();i++)
        {
            for(auto j:m)
            {
                if(jewels[i]==j.first)
                {
                    count=count+j.second;
                }
            }
        }
        return count;
    }
};