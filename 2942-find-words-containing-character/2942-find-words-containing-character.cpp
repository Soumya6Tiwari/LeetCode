class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        int i,j,k;
        vector<int>res;
        string val=" ";
        for(i=0;i<words.size();i++)
        {
            val=words[i];
            for(j=0;j<val.size();j++)
            {
                if(val[j]==x)
                {
                    res.push_back(i);
                    val=" ";
                    break;
                }
            }
            
        }
        return res;
        
    }
};