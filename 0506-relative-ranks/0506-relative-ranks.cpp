class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score)
    {
        vector<string>ans;
        if(score.size()==1)
        {
            ans.push_back("Gold Medal");
            return ans;
        }
         if (score.size()==2)
        {
            if(score[0]>score[1])
            {
                ans.push_back("Gold Medal");
                ans.push_back("Silver Medal");
            }
             else
             {
                 ans.push_back("Silver Medal");
                 ans.push_back("Gold Medal");
             }
             return ans;
        }
        
         vector<int>v;
        
        string str;
        v=score;
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int f,s,t;
        f=v[0];
        s=v[1];
        t=v[2];
        
        
      
        map<int,int>m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]=i+1;
        }
        int i=0,j=0;
        for(i=0;i<score.size();i++)
        {
            if(score[i]==f)
            {
                ans.push_back("Gold Medal");
            }
            else if(score[i]==s)
            {
                ans.push_back("Silver Medal");
            }
            else if( score[i]==t)
            {
                ans.push_back("Bronze Medal");
            }
            else
            { 
                       
                        str=to_string(m[score[i]]);
                        ans.push_back(str);
                    
            }
        }
        return ans;
        
    }
};