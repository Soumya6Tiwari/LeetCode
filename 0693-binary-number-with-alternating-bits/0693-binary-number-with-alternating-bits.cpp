class Solution {
public:
    bool hasAlternatingBits(int n) 
    {
        vector<int>v;
        int i,j,k,val,num;
        while(n>0)
        {
            num=n%2;
            v.push_back(num);
            n=n/2;
        }
        for(i=0;i<v.size()-1;i++)
        {
            if(v[i]==v[i+1])
            {
                return false;
            }
        }
        return true;
    }
};