#include <iostream>
using namespace std;
 
int binarySearch(int array[], int x, int low, int high)
{
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
            return mid;
        if (array[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
 
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;
    n = binarySearch(arr,x,0,n);
    return 0;
}   