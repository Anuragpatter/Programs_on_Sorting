#include <bits/stdc++.h>
#include <sys/time.h>
using namespace std;
#define ac auto const
#define max 10000

void merge(int arr[], int const x, int const y, int const z)
{
    ac arr1 = y - x + 1;
    ac arr2 = z - y;

    auto *x_arr = new int[arr1],
        *z_arr = new int[arr2];

    for (auto i = 0; i < arr1; i++)
        x_arr[i] = arr[x + i];
    for (auto j = 0; j < arr2; j++)
        z_arr[j] = arr[y + 1 + j];

    auto ai1 = 0, ai2 = 0; 
    int index_merged_arr = x; 

    while (ai1 < arr1 && ai2 < arr2) {
        if (x_arr[ai1] <= z_arr[ai2]) {
            arr[index_merged_arr] = x_arr[ai1];
            ai1++;
        }
        else {
            arr[index_merged_arr] = z_arr[ai2];
            ai2++;
        }
        index_merged_arr++;
    }
    
    while (ai1 < arr1) {
        arr[index_merged_arr] = x_arr[ai1];
        ai1++;
        index_merged_arr++;
    }
    
    while (ai2 < arr2) {
        arr[index_merged_arr] = z_arr[ai2];
        ai2++;
        index_merged_arr++;
    }
}

void merge(int arr[], int const begin, int const end)
{
    if (begin >= end)
        return;

    auto y = begin + (end - begin) / 2;
    merge(arr, begin, y);
    merge(arr, y + 1, end);
    merge(arr, begin, y, end);
}

void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main()
{
    int n;
    cout<< "Enter the number of Randomly generated numbers to be sorted through merge sort: \n";
    cin>>n;
    
    struct timespec start, end;
  
    clock_gettime(CLOCK_MONOTONIC, &start);
  
    ios_base::sync_with_stdio(false);
    
    srand(time(0));
    int arr[n];    
    for(int i=0 ; i<n ; i++){
        arr[i] = rand() % max;
    }
    
    auto arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arr_size);

    merge(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
  
    clock_gettime(CLOCK_MONOTONIC, &end);

    double time_taken;
    time_taken = (end.tv_sec - start.tv_sec) * 1e9;
    time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9;
  
    cout << "\n\nTime taken by program is : " << fixed<< time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}
