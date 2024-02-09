class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        int i,j,k;
        set<char>v;
        for(i=0;i<sentence.size();i++)
        {
            v.insert(sentence[i]);
        }
        if(v.size()==26)
        {
            return true;
        }
        return false;
        
    }
};