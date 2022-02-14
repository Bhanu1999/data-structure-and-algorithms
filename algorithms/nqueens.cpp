#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;

void print(int a[], int n) {

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void print(vector<int> a) {
    int n = a.size();
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
vector<vector<string>> ans;
bool isSafe(int row,int col,vector<string> board)
{
    int duprow=row;
    int dupcol=col;
    while(row>=0 && col>=0)
    {
        if(board[row][col]=='Q')
        {
            return false;
        }
        row--;
        col--;

    }
    row=duprow;
    col=dupcol;

    while(col>=0)
    {
        if(board[row][col]=='Q')
        {
            return false;
        }
        col--;
    }
    row=duprow;
    col=dupcol;
    while(row<board.size() && col>=0)
    {
        if(board[row][col]=='Q')
        {
            return false;
        }
        col--;
        row++;
    }

    return true;

}
void solve(int n,int col,vector<string> board)
{
    if(col==n)
    {
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++)
    {
        if(isSafe(row,col,board))
        {
            board[row][col]='Q';
            solve(n,col+1,board);
            board[row][col]='.';
        }
    }
    return;

}
vector<vector<string>> solveNQueens(int n) {
    string str(n,'.');
    vector<string> board(n,str);
    solve(n,0,board);
    return ans;
}
int32_t main() {


}
