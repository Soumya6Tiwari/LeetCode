class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) 
    {
        map<string,int>m1,m2;
        int i,j,k,count=0;
        for(i=0;i<words1.size();i++)
        {
            m1[words1[i]]++;
        }
        for(i=0;i<words2.size();i++)
        {
            m2[words2[i]]++;
        }
       for (auto i:m1)
       {
           if(i.second==1)
           {
               if(m2.find(i.first)!=m2.end()&&m2[i.first]==1)
               {
                   count++;
               }
           }
       }
        return count;
    }
};