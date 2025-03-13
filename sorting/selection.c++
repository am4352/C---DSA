#include<iostream>
using namespace std;
void selection_sort(int arr[], int n)
{
  for (int i = 0; i <= n-2; i++)
  {
      int mini = i;
      for (int j = i; j <= n-1; j++)
      {
          if (arr[j]<arr[mini])
          {
              mini = j;
        }
        
      }
      int temp = arr[mini];
       arr[mini] = arr[i];
       arr[i] = temp;
  }

}
void insertion_sort(int arr[], int n)
{
for (int i = 0; i <=n-1 ; i++)
{
  int j = i;
  while (j > 0 && arr[j-1]>arr[j])    
  {
    swap(arr[j - 1], arr[j]);
    j--;
    cout << "run" << endl;
  } 
}
}



int main()
{
  int n = 5;
  int arr[n] = {5,4,3,2,1};
  // selection_sort(arr,n );
  insertion_sort(arr, n);

  for (int j = 0; j < n; j++)
  {
    cout << arr[j] << " ";
  }
  return 0;
}





















