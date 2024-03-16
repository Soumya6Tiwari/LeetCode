class Solution {
public:
    vector<char> vow;
    bool vowels(char ch){
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return true;
        else
        return false;
    }
    string sortVowels(string s)
    {
//         int i,j=0;
        
//         char ch='@';
//         string str="",sol;
//         for(i=0;i<s.size();i++)
//         {
//             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
//             {
//                 sol=sol+s[i];
//                 s[i]=ch;
//             }
//         }
//         sort(sol.begin(),sol.end());
//         for(i=0;i<s.size();i++)
//         {
//                        if(s[i]==ch)
//                        {
//                            s[i]=sol[j];
//                            j++;
//                        }
        
//         }

        
//         return s;
//         class Solution {
// public:
    
        for(int i=0;i<s.size();i++){
            if(vowels(s[i]))
            vow.push_back(s[i]);
        }
        sort(vow.begin(),vow.end());
        for(int i=0,j=0;i<s.size();i++){
            if(vowels(s[i])){
                s[i]=vow[j];
                j++;
            }
        }
        return s;
    
    }
};