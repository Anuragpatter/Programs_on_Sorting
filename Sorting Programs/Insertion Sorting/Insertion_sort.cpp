#include <bits/stdc++.h>
#include <sys/time.h>
using namespace std;
#define max 10000

void insertion(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void print(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    struct timeval start, end;

    int input;
    cout<< "Number of Randomly generated elements to be Sorted \n"; 
    cin >> input;

    gettimeofday(&start, NULL);
    ios_base::sync_with_stdio(false);

    srand(time(0));

    int arr[input];
    for (int i = 0; i < input; i++)
    {
        arr[i] = rand();
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion(arr, n);
    cout << "Sorted array: \n";
    print(arr, n);
	
    gettimeofday(&end, NULL);

    double time_taken;

    time_taken = (end.tv_sec - start.tv_sec) * 1e6;
    time_taken = (time_taken + (end.tv_usec - start.tv_usec)) * 1e-6;

    cout << endl
         << "Time taken by program is : " << fixed << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}