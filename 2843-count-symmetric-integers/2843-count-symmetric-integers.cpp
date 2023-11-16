class Solution {
public:
    int countSymmetricIntegers(int low, int high) 
    {
//         int i,j,k,count=0,num=0,ans,val,num1,count1=0;
//         num1=num;
//         vector<int>result;
//         for(i=low;i<=high;i++)
//         {
//             val=i;
//             if(val>9)
//             {
//             while(val>0)
//             {
            
//                 num1=val%10;
//                 if(count1==0)
//                 {
//                     num=num1;
//                     count1++;
//                 }
//                 if(num1==num)
//                 {
//                     val=val/10;
//                 }
//                 else
//                 {
//                     count1=0;
//                     break;
//                 }
//             }
            
//             if(val==0)
//             {
//                 result.push_back(i);
//                 count++;
//             }
//             }
//         }
//         return count;
        
        int i,j,k,count=0,num,num1,count1=0;
        vector<int>res;
        int lsum=0,rsum=0;
        for(i=low;i<=high;i++)
        {
            num=i;
            while(num>0)
            {
                num1=num%10;
                
                res.push_back(num1);
                num=num/10;
            }
            if(res.size()%2==0)
            {
                
                
                for(j=0;j<res.size()/2;j++)
                {
                    lsum=lsum+res[j];
                }
                 for(k=j;k<res.size();k++)
                {
                    rsum=rsum+res[k];
                }
                if(lsum==rsum)
                {
                    count1++;
                }
                lsum=0;
                rsum=0;
            
                
            }
            
            res.clear();
        }
        
        return count1;
    }
};