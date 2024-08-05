#include<iostream>
using namespace std;
int Index;
void insert(int *p,int position,int number){
    int i;
    ///Shifting elements by one index ahead
    for(i=Index;i>=position;i-- ){
        p[i] = p[i-1];
    }
    p[position-1] = number;
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