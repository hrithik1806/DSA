#include <iostream>
using namespace std;
bool ratInMaze(char maze[10][10], int soln[][10], int i, int j, int m, int n)
{
    // base case
    if (i == m and j == n)
    {
        soln[m][n] = 1;
        // Print the path
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                cout << soln[i][j] << " "   ;
            }
            cout << endl;
        }
        cout << endl;
        return true;
    }
    // rec case
    // Rat should be inside grid
    if (i > m || j > n)
    {
        return false;
    }
    if (maze[i][j] == 'X')
    {
        return false;
    }
    // Assume solution exist throuh the maze
    soln[i][j] = 1;
    bool rightsuccess = ratInMaze(maze, soln, i, j + 1, m, n);
    bool downsuccess = ratInMaze(maze, soln, i + 1, j, m, n);

    // Backtracking
    soln[i][j] = 0; // making all path 0 or normal after returning for finding further paths
    if (rightsuccess || downsuccess)
    {
        return true;
    }
    return false;
}
int main()
{
    char maze[10][10] = {
        "000X",
        "00X0",
        "000X",
        "0X00"

    };
    int soln[10][10] = {0};
    int m = 4, n = 4;
    bool ans = ratInMaze(maze, soln, 0, 0, m - 1, n - 1);
    if (ans == false)
    {
        cout << "Path does not exist";
    }

    return 0;
}