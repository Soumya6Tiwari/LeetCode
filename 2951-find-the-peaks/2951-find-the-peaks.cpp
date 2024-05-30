class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) 
    {
        vector<int>v;
        int i,j,k;
        for(i=1;i<mountain.size()-1;i++)
        {
            if(mountain[i]>mountain[i-1]&&mountain[i]>mountain[i+1])
            {
                v.push_back(i);
            }
        }
       return v; 
    }
};