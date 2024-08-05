class Solution {
public:
    bool isSafe(int row,int column,int n,vector<string>&board)
    {
        int dupRow=row;
        int dupCol=column;
        
        // process upper diagonal
        while(row>=0&&column>=0)
        {
            if(board[row][column]=='Q')
            {
                return false;
            }
            row--;
            column--;
        }
        
        // process left row
        row=dupRow;
        column=dupCol;
        while(column>=0)
        {
            if(board[row][column]=='Q')
            {
                return false;
            }
            
            column--;
        }
        // process lower row
        row=dupRow;
        column=dupCol;
        while(row<n&&column>=0)
        {
            if(board[row][column]=='Q')
            {
                return false;
            }
            
            column--;
            row++;
        }
        return true;
    }
    void calculate(int column,vector<vector<string>>&ans,vector<string>&board,int n)
    {
        if(column==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(isSafe(row,column,n,board))
            {
                board[row][column]='Q';
                calculate(column+1,ans,board,n);
                
                // backtrack
                board[row][column]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) 
    {
        // BRUTE FORCE APPROACH
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n, '.');
      for (int i = 0; i < n; i++) {
        board[i] = s;
      }
        int column=0;
        calculate(column,ans,board,n);
        return ans;
        
        
    }
};