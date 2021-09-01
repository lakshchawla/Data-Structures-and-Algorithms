#include<iostream>
#include<cmath>
using namespace std;

int findMean(int arr[], int n){
    float mean = 0;
    
    for (int i = 0; i < n; i++) mean += arr[i];
    return round(mean/n);
}

int main (void){
    int n; cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];

    int o = 0;
    int meanElement = findMean(arr, n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > meanElement)
        {
            arr[i]--;
            o++;
        }

        else if( arr[i] < meanElement){
            arr[i]++;
            o++;
        }
        
    }
    cout<<o;
    
}