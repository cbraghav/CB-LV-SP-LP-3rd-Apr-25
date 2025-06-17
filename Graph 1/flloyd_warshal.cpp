#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mat[6][6]{500};
    int N = 6;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                mat[i][j] = 0;
            else
                mat[i][j] = 10000;
        }
    }

    mat[1][5] = 7;
    mat[1][3] = 3;
    mat[5][3] = 2;
    mat[3][2] = 1;
    mat[3][4] = 5;
    mat[2][4] = 1;

    for (int K = 0; K < N; K++)
    {
        for (int A = 0; A < N; A++)
        {
            for (int B = 0; B < N; B++)
            {
                mat[A][B] = min(mat[A][B], mat[A][K] + mat[K][B]);
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < N; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}