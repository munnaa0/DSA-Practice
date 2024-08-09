#include<iostream>
using namespace std;

int LinearSearch(int *p,int index){
    for(int i=0;i<p.size();i++){
        
    }
}

int main(){
    int key;
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    cout << "Enter an element to search: ";
    cin >> key;

    int index = LinearSearch(arr,key);
    if(index == -1)
        cout << key << " " << "is not present in the array!!" << endl;
    else
        cout << key << " " << "Found at index " << index << endl;
}