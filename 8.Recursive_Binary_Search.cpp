#include<iostream>
using namespace std;
int n;
int *p;
int binarySearch(int low,int high,int key){
    int mid;
    if(low<=high){
        mid = (low+high)/2;
        if(p[mid] == key){
            return mid;
        }
        else if(key > p[mid]){
           return binarySearch(mid+1,high,key);
        }
        else{
           return binarySearch(low,mid-1,key);
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

    p = arr;///Pointer pointing to array so it can be accessed from outside

    int index = binarySearch(0,n-1,key);

    if(index == -1){
        cout << "Element is not present in the array!!!" << endl;
    }
    else{
        cout << key << " found at index " << index << endl;
    }

    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }

}