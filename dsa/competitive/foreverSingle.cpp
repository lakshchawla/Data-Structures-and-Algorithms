// #include <iostream>
// using namespace std;

// bool checkKey(int arr[], int key, int l, int n){
//     for (int i = l+1; i < n; i++)
//     {
//         if (arr[i] == key) return false;
//     }
//     return true;
// }

// int main(void)
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];

//     for (int i = 0; i < n; i++)
//     {
//         int key = arr[i];
//         if (checkKey(arr, key, i, n))
//         {
//             cout<<key;
//             return 0;
//         }
//     }
// }

#include <iostream>
using namespace std;

int findKey(int arr[], int size)
{
    int res = arr[0];
    for (int i = 1; i < size; i++)
        res = res ^ arr[i];

    return res;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    cout << findKey(arr, n);
    return 0;
}