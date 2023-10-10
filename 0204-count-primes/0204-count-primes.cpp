class Solution {
public:
    int countPrimes(int n) 
    {
        if(n<=2)
        {
            return 0;
        }
         int count=0;
        vector<bool>array(n,false);
        for(int i=2;i<sqrt(n);i++)
        {
            if(array[i]==false)
            {
                for(int j=i*i;j<n;j+=i)
                {
                    array[j]=true;
                }
            }
        }
        
        for(int i=2;i<n;i++)
        {
            if(array[i]==false)
            {
                count++;
            }
        }
        return count;
       
        
     
}
    
};