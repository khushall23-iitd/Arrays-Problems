#include <iostream>
using namespace std;


void print_array(int arr[], int size){
    for(int i=0; i< size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;}
    
void reverse_array(int arr[], int size){
    int s = 0;
    int e = size-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    print_array(arr,size);
}

void merge_Sort_Array(int arr1[], int size1, int arr2[], int size2, int arr3[], int size3){
    int i =0;
    int j =0;
    int k =0;
    while((i<size1) && (j<size2)){
      if(arr1[i]<arr2[j]){
        arr3[k] = arr1[i];
        k++;
        i++;
      }
      else{
        arr3[k] = arr2[j];
        k++;
        j++;
      }
    }
    
    while(i < size1){
      arr3[k] = arr1[i];
      i++;
      k++;
    }
    while(j<size2){
      arr3[k] = arr2[j];
      j++;
      k++;
    }
  print_array(arr3,size3);
}



int main(){
    int arr1[] = {1,4,6,8,10,11,33,44,66,88,99,876};
    int arr2[] = {2,3,5,7,9,43,56,78,90,987};

    int size1 = sizeof(arr1)/4;
    int size2 = sizeof(arr2)/4;
    int size3 = size1 + size2;
    int arr3[size3]={0};
    
    cout << " Array1  : ";
    print_array(arr1,size1);
    
    cout << " Array2  : ";
    print_array(arr2,size2);   

   

    cout << " Array 3 : (Merged and Sort)  : ";
    merge_Sort_Array(arr1,size1, arr2,size2, arr3, size3);
    

}

