//the efficiency of the quick sort algorithm depends on the pivot selection strategy.
//if the pivot selected is the largest or the smallest element in the array(for eg.in the case of ascending or descending order) then the time complexity in the worst case is O(N2)
//But if the pivot is the middle element of an array arranged in any order then the best time complexity of O(NlogN).
//we can reduce the problem of ascending or descending sequence being the worst case by taking a random element from the array as a pivot or using the middle element  as a pivot
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void input(int A[],int n)
{  printf("enter the elements of the array:\t");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    A[n+1]=INT_MAX;
}
void display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void swap(int *x,int *y)
{
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
}
int Partition(int A[],int l,int h)
{  
    int pivot=A[l];           
    /*In C Random QuickSort:
    int n = sizeof(A) / sizeof(A[0]);
    int randomIndex = rand() % n; included in stdlib library
    int randomElement = arr[randomIndex];
    In C++
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> dist(low, high);

    int randomIndex = dist(rng);
    swap(arr[randomIndex], arr[low]);




    In Median QuickSort:
    int mid=(h+l)/2;;
    if(A[l]>A[mid])    //sort the first ,middle and the last element
    {
        swap(&A[l],&A[mid]);
    }
    if(A[l]>A[h])
    {
        swap(&A[l],&A[h]);
    }
    if(A[mid]>A[h])
    {
        swap(&A[mid],&A[h]);
    }
    int pivot=A[h-1];    //take the 2nd last element as the pivot
    int i=l;
    int j=h;
    */
    int i=l;
    int j=h;
    do
    {
        do
        {
            i++;
        } while (A[i]<=pivot);
        do
        {
            j--;
        } while (A[j]>pivot);
        if(i<j)
        {
            swap(&A[i],&A[j]);
        }
    } while (i<j);
    swap(&A[l],&A[j]); 
    return j;    //returns the partitioned index
}
void QuickSort(int A[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=Partition(A,l,h);
        QuickSort(A,l,j);     //takes the partitioned element as the largest element.
        QuickSort(A,j+1,h);   //takes the largest element(i.e infinity) as the last element.
    }
}
int main()
{   int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int *A;
    A=(int *)malloc((n+1)*sizeof(int));
    if(A==NULL)
    {
        printf("Memory allocation fails");  //to check whether memory is available or not if not give failed memory allocation.
    }
    input(A,n);
    display(A,n);
    QuickSort(A,0,n);
    display(A,n);
    free(A);
    A=NULL;  //to prevent it from being used
    return 0;
}
// the 