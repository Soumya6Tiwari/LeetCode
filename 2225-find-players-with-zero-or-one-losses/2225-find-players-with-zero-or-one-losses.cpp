class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        // int i,j,k;
        // vector<int>win,loose,res1,res2;
        // vector<vector<int>>ans;
        // set<int>s,s_loose;
        // map<int,int>m;
//         j=0;
//         for(i=0;i<matches.size();i++)
//         {
            
//                     win.push_back(matches[i][0]);
//                    loose.push_back(matches[i][1]);
//         }
//         sort(win.begin(),win.end());
//         sort(loose.begin(),loose.end());
//         for(i=0;i<win.size();i++)
//         {
//             s.insert(win[i]);
//         }
//         win.clear();
//         win.assign(s.begin(),s.end());
//         for(i=0;i<win.size();i++)
//         {
//             for(j=0;j<loose.size();j++)
//             {
//                 if(win[i]==loose[j])
//                 {
//                     break;
//                 }
//             }
//             if(j==loose.size())
//             {
//                 res1.push_back(win[i]);
//             }
//         }
//         for(i=0;i<loose.size();i++)
//         {
//             m[loose[i]]++;
//         }
//         i=0;
//         for(auto i:m)
//         {
//             if(i.second==1)
//             {
//                 res2.push_back(i.first);
//             }
//         }
        
        // ans.push_back(res1);
        // ans.push_back(res2);
        // return ans;
        ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // Initialization \U0001f3c1
    int present[100001] = {0};
    int losses[100001] = {0};
    vector<vector<int>> res(2);

    // Iterate through Matches \U0001f504
    for(auto &it: matches){
        int winner = it[0], loser = it[1];
        present[winner] = 1; 
        present[loser] = 1;
        losses[loser]++;
    }

    // Identify Undefeated and One-Loss Players \U0001f3c6
    for(int i=1; i<100001; i++){
        if(!present[i]) continue;
        
        if(losses[i] == 0) res[0].push_back(i);
        else if(losses[i] == 1) res[1].push_back(i);
    }

    // Return Result \U0001f4ca
    return res;
        
    }
};