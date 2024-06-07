class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        map<int,int>m;
        int i,j,k,val,count;
        for(i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        i=0;
        for(auto i:m)
        {
            val=i.second;
            count=(val*100)/arr.size();
            if(count>25)
            {
                k=i.first;
                return k;
            }
        }
        return 21506;
    }
};