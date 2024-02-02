class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        
        string val="123456789";
        string ans=" ";
        int val1;
        vector<int>res;
        int i,j;
        for(i=0;i<val.size();i++)
        {
            for(j=i;j<val.size();j++)
            {
                ans=ans+val[j];
                val1=stoi(ans);
                if(val1>=low&&val1<=high)
                {
                    res.push_back(val1);
                }
                
            }
            ans=" ";
        }
        sort(res.begin(),res.end());
        return res;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        //BRUTE FORCE DID NOT WORK
        
        
//         vector<int>v,v1;
//         int i,j,num,val,flag=0;
//         for(i=low;i<=high;i++)
//         {
//             val=i;
//             while(val>0)
//             {
//                 num=val%10;
//                 v.push_back(num);
//                 val=val/10;
//             }
//             reverse(v.begin(),v.end());
        
//             for(j=1;j<v.size();j++)
//             {
//                 if(v[j]==v[j-1]+1)
//                 {
//                     flag=1;
                    
//                 }
//                 else
//                 {
//                     flag=0;
//                     if(j!=v.size())
//                     {
//                         break;
//                     }
//                 }
//             }
//             if(flag==1)
//             {
//                 v1.push_back(i);
//             }
//             v.clear();
//             flag=0;
//         }
    
//         return v1;
        
    }
};