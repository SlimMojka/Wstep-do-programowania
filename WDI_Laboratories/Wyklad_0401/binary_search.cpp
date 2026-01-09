#include <iostream>

using namespace std;

int binarySearch( int arr[], int left, int right, int x)
{
    if(left <= right)
    {
        int mid = (left + right)/2;
        if (arr[mid]==x)
        return mid;
        if(arr[mid] > x)
        return binarySearch(arr, left, mid-1, x);
        if(arr[mid] < x)
        return binarySearch(arr, mid+1, right, x);
    }
    return -1;


}

int main(void)
{
    int arr[] = {1,3,7,15,18,20,25,33,36,40,55};
    int n = sizeof(arr)/sizeof/(arr[0]);
    int x;
    cout << "Enter the number";
}
