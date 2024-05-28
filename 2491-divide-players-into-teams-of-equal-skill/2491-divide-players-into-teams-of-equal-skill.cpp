class Solution {
public:
    long long dividePlayers(vector<int>& skill) 
    {
        vector<long long> v;
        vector<long long> v1;
        long long i,j,k,sum=0,pro=1;
        set<int>s;
        sort(skill.begin(),skill.end());
        int n=skill.size()-1;
        for(i=0;i<skill.size();i++)
        {
            if(i<=n)
            {
                sum=skill[i]+skill[n];
                pro=skill[i]*skill[n];
                v1.push_back(pro);
                v.push_back(sum);
                n--;    
                s.insert(sum);
            }
        }
        if(s.size()!=1)
        {
            return -1;
        }
        else
        {
            sum=0;
           for(i=0;i<v1.size();i++)
           {
               sum=sum+v1[i];
           }
        }
    
        return sum;
    }
};