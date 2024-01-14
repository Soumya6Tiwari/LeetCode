class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        map<int,int>m;
        int i,j,k=INT_MIN;
        for(i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        i=0;
        for(auto i:m)
        {
            if(i.first==i.second)
            {
                k=max(i.first,k);
                
            }
        }
        if(k!=INT_MIN)
        {
            return k;
        }
        return -1;
        
    }
};