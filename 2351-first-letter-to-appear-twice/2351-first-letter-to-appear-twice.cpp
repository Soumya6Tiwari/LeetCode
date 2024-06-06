class Solution {
public:
    char repeatedCharacter(string s) 
    {
//         map<char,int>m;
//         queue<int>q;
//         int i,j,k,flag=1;
//         for(i=0;i<s.size();i++)
//         {
//             char ch=s[i];
//             m[ch]++;
//             q.push(ch);
//             if()
            
//         }
//         if(i==s.size()-1&&flag==0)
//         {
//             for(i=0;i<s.size();i++)
//         {
//             m[s[i]]++;
//         }
        
//             for(i=0;i<s.size();i++)
//             {
//                 if(m[s[i]]==2)
//                 {
//                      return s[i]; 
//                 }
//             }
//         }
//         return s[i];
        map<char,int>m;
        int i,j,k;
        char ans;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
            if(m[s[i]]==2)
            {
                ans=s[i];
                break;
            }
        }
        return ans;
    }
};