#include<iostream>
using namespace std;
int n;

void swapping(int *p,int i){
    int temp;
    temp = p[0];
    p[0] = p[i];
    p[i] = temp;
}

int LinearSearch(int *p,int key){

    for(int i=0;i<n;i++){
        if(p[i]==key){
            swapping(p,i);///After finding it swaps the key with first element
            return 0;
        }
            
    }
    return -1;
}

int main(){
     int key;
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    n = sizeof(arr) / sizeof(int);
    cout << "Enter an element to search: ";
    cin >> key;

    int index = LinearSearch(arr,key);
    if(index == -1)
        cout << key << " " << "is not present in the array!!" << endl;
    else
        cout << key << " " << "Found at index " << index << endl;

    ///Printing Array
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}