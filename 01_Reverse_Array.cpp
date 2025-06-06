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





int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10 };
    cout << " Array  : ";
    print_array(arr,10);
    cout << "Reverse Arr : ";
    reverse_array(arr,10);
}

