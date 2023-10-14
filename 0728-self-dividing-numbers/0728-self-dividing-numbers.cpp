class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
      int i,j,k,num,val;
        vector<int>result;
        for(i=left;i<=right;i++)
        {
            val=i;
            while(val!=0)
            {
                num=val%10;
                if(num==0)
                {
                    break;
                }
                if(i%num==0)
                {
                val=val/10;
                }
                else
                {
                    break;
                }
            }
            if(val==0)
            {
                result.push_back(i);
            }
        }
        return result;
        
    }
};