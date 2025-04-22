#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Q1 find sum of elements of array

    int n = 7;
    int arr[n] = {3, 1, 5, 3, 18, 12, 4};
    //            0  1  2  3    4

    cout << arr[0] << endl; // 7
    // cout<< arr[1]
    // cout<< arr[2]

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // sum btao

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum of all elements of array is " << sum << endl;

    // cout << arr[7];

    // Q2. find largest elment of array
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    cout << "largest element of array is" << ans << endl;

    // Q3. find 2nd largest element in array

    int m1 = INT_MIN;
    int m2 = INT_MIN;
    // TC -> O(N)
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > m1)
        {
            m2 = m1;
            m1 = arr[i];
        }
        else if (arr[i] > m2)
        {
            m2 = arr[i];
        }
    }
    cout << "largest element is " << m1 << "and second largest element is " << m2 << endl;

    // Q4. check if an array is in ascending order
    bool is_sorted = true;
    // for (int i = 0; i < n; i++) // i = 0 , 1 , 2 , 3 , n-1      -> [0 ,  n-1 ]
    // i+1 -> 1  2, 3,4,     n
    // for (int i = 0; i + 1 < n; i++)
    // {
    //     if (arr[i] < arr[i + 1])
    //     {
    //         ;
    //     }
    //     else
    //     {
    //         is_sorted = false;
    //     }
    // }

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] < arr[i])
        {
            ;
        }
        else
        {
            is_sorted = false;
        }
    }

    if (is_sorted == true)
    {
        cout << "array is sorted" << endl;
    }
    else
    {
        cout << "array is not sorted" << endl;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////

    // Q5. reverse an array Approach 1  TC -> O(N+N)  => O(N)   SC-> O(N)
    int rarr[n]{};

    int i = n - 1;
    int j = 0;
    while (i >= 0 and j < n) // j <= n-1
    {
        rarr[j] = arr[i];
        j++;
        i--;
    }
    cout << "reverse arr :";
    for (int i = 0; i < n; i++)
    {
        cout << rarr[i] << " ";
    }
    cout << endl;

    //// Approach 2 -> TC-> O(n/2) -> O(N)  //// SC-> O(1)
    i = 0;
    j = n - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "reverse orginal arr :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    ///////////////////////////////////////////////

    // Q6 Rotate an array by 1 // TC -> O(N) SC->O(1)

    int x = arr[0];

    for (int i = 0; i + 1 < n; i++) //  i < n-1
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = x;

    // for(int i = 1 ; i < n ; i++){
    //  arr[i-1] = arr[i];
    // }

    cout << "array after rotating by one :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    ///////////////////////////////////////////////

    // Q7 rotate by k -> Brute force -> TC O(N*K) -> for(i = 1 ; i < k ) { rotate_by_1};

    
}