#include <iostream>
using namespace std;
int partition(int A[], int low, int high)
{   int mid=(low+high)/2;
    int i = low;
    int j = high + 1;
    swap(A[low],A[mid]);
    int pivot = A[low];
    do
    {
        do
        {
            i++;
        } while (A[i] < pivot);
        do
        {
            j--;
        } while (A[j] > pivot);
        if (i < j)
        {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    int swap = A[j];
    A[j] = A[low];
    A[low] = swap;
    return j;
}
void QuickSort(int A[], int low, int high)
{
    if (low < high)
    {
        int j = partition(A, low, high);
        QuickSort(A, low, j - 1);
        QuickSort(A, j + 1, high);
    }
}
int main()
{
    int A[10] = {30, 20, 50, 40, 60, 80, 90, 121, 111};
    A[9] = INT32_MAX;
    QuickSort(A, 0, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}