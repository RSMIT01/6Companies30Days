//link:https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1#
class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        if(N==1)
        {
            return 1;
        }
        return (N*N)+squaresInChessBoard(N-1);
    }
};
