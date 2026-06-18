// #include <iostream>
// using namespace std;

// void print(int arr[], int n){
//   for (int i = 0; i < n; i++){
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// void bubbleSort(int arr[], int n){
//   for (int i = 0; i < n - 1; i++){
//      for (int j = 0; j < n - i - 1; j++)
//        if (arr[j] < arr[j+1]){
//          swap(arr[j], arr[j+1]);
//        }
//   }
//   print(arr, n);
// }
// int main(){
//   int arr[] = {1,2,3,4,5};
//   bubbleSort(arr, 5);
//   return 0;  
// }


#include <iostream>
using namespace std;

void print(int arr[], int n){
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void bubbleSort(int arr[], int n){
  for (int i = 0; i < n - 1; i++){
     bool isSwap = false;
     cout << "outer loop";
     for (int j = 0; j < n - i - 1; j++)
       if (arr[j] > arr[j+1]){
         swap(arr[j], arr[j+1]);
         isSwap = true;
        }
    }
    if (!isSwap){
      //array is already sorted
      return;
    }
}
  print(arr, n);

int main(){
  // int arr[] = {1,2,3,4,5};
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  bubbleSort(arr, 10);
  return 0;  
}