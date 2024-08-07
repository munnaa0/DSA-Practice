#include<iostream>
using namespace std;
int Index; //Made global so it can be accessed from other functions

// This function does the insertion process
void insert(int *p,int position,int number){
    int i;
    ///Shifting elements by one index ahead
    for(i=Index;i>=position;i-- ){
        p[i] = p[i-1];
    }
    // After it reached the index it enters the value to that index
    p[position-1] = number;
    // Incrementing index cause the elements increased by 1
    Index++;
}

int main(){
    int *p;
    int size;
    cout << "Enter array size: ";
    cin >> size;
    cout << "How many numbers: ";
    cin >> Index;
    p = new int[size];
    cout << "Enter " << Index << " Numbers: ";
    ///Array initial input
    for(int i = 0;i<Index;i++){
        cin >> p[i];
    }
    insert(p,3,30);
    // Array Output
    for(int i = 0;i<Index;i++){
        cout << p[i] << " ";
    }
}