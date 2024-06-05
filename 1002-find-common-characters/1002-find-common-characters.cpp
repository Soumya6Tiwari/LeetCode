class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        map<char,int>count;
        map<char,int>final_count;
        char i,k;
        int  j,p,val;
        vector<string>res;
        string str;
        // firstly initialize the map final_count with INT_MAX;
        for(i='a';i<='z';i++)
        {
            final_count[i]=INT_MAX;
        }
        
        // Now we will look at the words of the given words
        for(j=0;j<words.size();j++)
        {
            for(p=0;p<words[j].size();p++)
            {
                count[words[j][p]]++;
            }
            for(i='a';i<='z';i++)
            {
                final_count[i]=min(final_count[i],count[i]);
            }
            count.clear();
        }
        for(i='a';i<='z';i++)
        {
            if(final_count[i]>0)
            {
                val=final_count[i];
                while(val!=0)
                {
                    str=i;
                    res.push_back(str);
                    val--;
                }
            }
        }
        return res;
    }
};