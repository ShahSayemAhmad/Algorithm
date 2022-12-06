#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int nums[], int n)
{
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (nums[j] > nums[j+1])
                swap(nums[j], nums[j+1]);
        }
    } 
}

int main()
{
    int n;
    cin>>n;

    int nums[n];
    for (int i = 0; i < n; i++){
       cin>>nums[i];
    }

    bubbleSort(nums, n);
    for (int i = 0; i < n; i++){
       cout<<nums[i]<<" ";
    }
    
    return 0;
}
