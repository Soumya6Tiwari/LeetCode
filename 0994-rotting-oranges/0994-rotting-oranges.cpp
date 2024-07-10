class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        // figure out the grid size
        int m=grid.size();
        int n=grid[0].size();
        int visit[m][n];
        int count=0,time,count1=0;
        
        //  store <{row,col},time>
        queue<pair<pair<int,int> , int>>q;
        
        // initially put all the rotten oranges in the queue at time t=0
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                // if cell contains rotten orange
                if(grid[i][j]==2)
                {
                   q.push({{i,j},0});
                // mark as visited (rotten) in visited array
                    visit[i][j]=2;
                }
                
                // if not rotten
                else
                {
                    visit[i][j]=0;
                }
                if(grid[i][j]==1)
                {
                    count++;
                }
            }
        }
        
        int delta_row[]={-1,0,1,0};
        int delta_col[]={0,1,0,-1};
         int tm=0;
        // start the bfs traversal
        while(!q.empty())
        {
            int row=q.front().first.first;
            int col=q.front().first.second;
             time=q.front().second;
            tm=max(tm,time);
            q.pop();
            
            
            // exactly 4 neighbors
            for(int i=0;i<4;i++)
            {
                // neighboring row and column
                int ne_row=row+delta_row[i];
                int ne_col=col+delta_col[i];
                
                // very important line
                // check for valid cell and
                // then for unvisited fresh orange
                
                if(ne_row>=0&&ne_row<m&&ne_col>=0&&ne_col<n&&grid[ne_row][ne_col]==1&&visit[ne_row][ne_col]==0)
                {
                    // mark as rotten
                    visit[ne_row][ne_col]=2;
                
                    // push in queue with timer increased
                    q.push({{ne_row,ne_col},time+1});
                    count1++;
                }
            }
        }
        
        if(count==count1)
        {
            return tm;
        }
        
        return -1;
        
    }
};