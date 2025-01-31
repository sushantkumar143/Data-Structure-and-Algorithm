#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int i = low;
    int j = mid + 1;
    int k = 0;
    int temp[high - low + 1];
    
    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    
    while (i <= mid){
        temp[k++] = arr[i++];
    }
    
    while (j <= high){
        temp[k++] = arr[j++];
    }
    
    for (int i = low, k = 0; i <= high; i++, k++) {
        arr[i] = temp[k];
    }
}

void MergeSort(int arr[], int low, int high){
    if(low < high) {
        int mid = (high + low) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];

    MergeSort(arr, 0, n - 1);
    
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";

    return 0;
}
