#include <iostream>

using namespace std;
/// Time complexity O(n^2)
const int N = 1000;

void BubbleSort(int arr[], int n);
void ReadArray(int arr[], int& n);
void WriteArray(int arr[], int n);

int main()
{
    int arr[N], n;
    ReadArray(arr, n);
    BubbleSort(arr, n);
    WriteArray(arr, n);
}

void BubbleSort(int arr[], int n)
{
    bool sorted = false;
    while (!sorted){
        sorted = true; /// We presume the array is sorted
        for (int i = 1; i < n; ++i)
            if (arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
                sorted = false;
            }
    }
}

void ReadArray(int arr[], int& n)
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
}

void WriteArray(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
}
