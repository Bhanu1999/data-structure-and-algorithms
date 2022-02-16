#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;

void solveSudoku(vector<vector<char>>& board) {
    solve(board);
}
bool solve(vector<vector<char>>& board)
{
    for(int i=0;i<9;i++)//in both for loops check for the empty position and fill the appropriate one
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j]=='.')//this specifies and empty position in the board
            {
                for(char c='1';c<='9';c++)//in each empty position try out all possible numbers
                {
                    if(isSafe(board,i,j,c))//check if some particular number is safe at that position
                    {
                        board[i][j]=c;//if position is safe just update that cell;
                        if(solve(board))//call the recursion for filling the further cells
                        {
                            return true;
                        }
                        else{
                            board[i][j]='.';//if solve returns false it means that because if we are filling some value here we are not able fill another value at somewhere so revert this and let the next possible character try at this position
                        }
                    }
                }
                return false;//if no character is suitable at this position return false (backtract)
            }
        }
    }
    return true;//if in board all positions are filled then that means just return true;


}
bool isSafe(vector<vector<char>>& board,int row,int col,char c)
{
    for(int i=0;i<9;i++)
    {
        if(board[i][col]==c)//check for each row
        {
            return false;
        }
        if(board[row][i]==c){//check for each col
            return false;
        }
    }
    while(row>=0)
    {
        if(row%3==0)//check for small 3*3 matrix
        {
            break;
        }
        row--;
    }
    while(col>=0)//
    {
        if(col%3==0)
        {
            break;
        }
        col--;
    }
    for(int i=row;i<row+3;i++)
    {
        for(int j=col;j<col+3;j++)
        {
            if(board[i][j]==c)
            {
                return false;
            }
        }
    }
    return true;}
int32_t main() {


}
