// Addition of two square matrices
// Difficulty: BasicAccuracy: 61.66%Submissions: 14K+Points: 1Average Time: 5m
// You are given two square matrices, a[][] and b[][], each of size n x n. Your task is to compute the sum of these two matrices and store the result in the matrix a[][] itself.

// Examples:

// Input: a[][] = [[1, 2], [3, 4]],
//        b[][] = [[4, 3], [2, 1]]
// Output: [[5, 5], [5, 5]]
// Explanation: The will be: [[5, 5], [5, 5]] on adding the corresponding elements of both matrices.
// Input: a[][] = [[7, 8], [9, 10]],
//        b[][] = [[1, 2], [3, 4]]
// Output: [[8, 10], [12, 14]]
// Explanation: The result will be [[8, 10], [12, 14]] after adding the corresponding elements of both matrices. 
// Constraints:
// 1 <= n <= 100

// Expected Complexities
// User function Template for C++

class Solution {
  public:
    void Addition(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) {
        for(int i=0;i<matrixA.size();i++){
            for(int j=0;j<matrixA[i].size();j++){
                matrixA[i][j]=matrixA[i][j]+matrixB[i][j];
            }
        }
    }
};
