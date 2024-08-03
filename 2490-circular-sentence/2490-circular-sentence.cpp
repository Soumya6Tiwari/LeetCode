class Solution {
public:
    bool isCircularSentence(string sentence) 
    {
        int i,j,k,n;
        n=sentence.size();
        // case 2:The last character of the last word is equal to the first character of the first word.
        if(sentence[n-1]==sentence[0])
        {
            for(i=0;i<n;i++)
            {
                if(sentence[i+1]==' '&&sentence[i+2]!=sentence[i])
                {
                    return false;
                }
            }
            return true;
        }
        
        return false;
    }
};