#include <bits/stdc++.h>

using namespace std;

int main()
{
    // *********

    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    //     cout << "*";

    /*

    ******
    ******
    ******

    */

    // for (int i = 1; i <= n; i++) // outer loop -> row
    // {
    //     // cout << "row " << i << " -> ";
    //     for (int j = 1; j <= n; j++) // inner loop -> col
    //     {
    //         // cout << "col" << j << " ";
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*
     *
     **
     ***
     ****
     *****
     */
    // int tot_rows = n;
    // for (int i = 1; i <= tot_rows; i++)
    // {
    //     int tot_cols = i;
    //     for (int j = 1; j <= tot_cols; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*

    ***
    **
    *


    */

    // int tot_rows = n;
    // // for (int i = 1; i <= tot_rows; i++)
    // for (int i = tot_rows; i >= 1; i--)
    // {
    //     int tot_cols = i;
    //     for (int j = 1; j <= tot_cols; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // int tot_rows = n;
    // for (int i = 1; i <= tot_rows; i++)
    // {
    //     int tot_cols = tot_rows - i + 1;
    //     for (int j = 1; j <= tot_cols; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*
    *
     **
     ***
     ****
    ****
    ***
    **
    *


    */

    // int tot_rows = (n + 1) / 2;
    // for (int i = 1; i <= tot_rows; i++)
    // {
    //     int tot_cols = i;
    //     for (int j = 1; j <= tot_cols; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // tot_rows = (n - 1) / 2;
    // for (int i = 1; i <= tot_rows; i++)
    // {
    //     int tot_cols = tot_rows - i + 1;
    //     for (int j = 1; j <= tot_cols; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*

    A
    AB
    ABC
    ABCD
    ABCDE

    */

    // int total_rows = n;

    // for (int i = 1; i <= total_rows; i++)
    // {

    //     int total_cols = i;

    //     for (int j = 1; j <= total_cols; j++)
    //     {

    //         cout << char('A' + j - 1);
    //     }
    //     cout << endl;
    // }

    // /*
    //     *
    //    **
    //   ***
    //  ****
    // *****

    // */

    // int total_rows = n;

    // for (int i = 1; i <= total_rows; i++)
    // {

    //     int tot_col1 = total_rows - i;
    //     // print spaces
    //     for (int j = 1; j <= tot_col1; j++)
    //     {

    //         cout << " ";
    //     }
    //     int tot_col2 = i;
    //     // print stars
    //     for (int j = 1; j <= tot_col2; j++)
    //     {

    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    /*
       *
      ***
     *****
    *******
   *********

   */

    int total_rows = n;

    for (int i = 1; i <= total_rows; i++)
    {

        int tot_col1 = total_rows - i;
        // print spaces
        for (int j = 1; j <= tot_col1; j++)
        {

            cout << " ";
        }
        int tot_col2 = 2 * i - 1;
        // print stars
        for (int j = 1; j <= tot_col2; j++)
        {

            cout << "*";
        }

        cout << endl;
    }
}