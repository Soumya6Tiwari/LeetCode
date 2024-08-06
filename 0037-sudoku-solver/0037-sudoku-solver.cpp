class Solution {
public:
    bool isValid(vector<vector<char>>&board,int row,int col,char c)
    {
        for(int i=0;i<9;i++)
        {
            // checking if the character c exist in the same row or not
            if(board[row][i]==c)
            {
                return false;
            }
            // checking if the character c exist in the same column or not
            if(board[i][col]==c)
            {
                return false;
            }
            // checking if the character c exist in the same 3*3 matrix or not
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
            {
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>&board)
    {
        // firstly we need to trace through the entire sudoku puzzle ie tracing in a matrix
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                // if a cell of a matrix is found to be empty then we will check that with which 
                //character it can be filled starting from 1 to 9
                if(board[i][j]=='.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        // if it is a valid character that can be filled up ,then fill it up 
                        // and call up the recursion , if recursion returns true means the we have the valid 
                        // sudoku otherwise backtrack
                        if(isValid(board,i,j,c))
                        {
                            board[i][j]=c;
                            if(solve(board)==true)
                            {
                                return true;
                            }
                            else
                            {
                                board[i][j]='.';
                            }
                        }
                        
                    }
                    return false;
                }
            }
            
        }
        // if the loop gets over ie all the cells are completely filled up then 
        // it means we already have the valid sudoko
        return true;
    }
    void solveSudoku(vector<vector<char>>& board)
    {
        // firstly here we have called the function solve
        solve(board);
    }
};