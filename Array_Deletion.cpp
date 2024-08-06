#include<iostream>
using namespace std;
int Index;
void deletion(int *p,int position){
    int i;
    ///Shifting elements by one index ahead
    for(i=position-1;i<Index;i++ ){
        p[i] = p[i+1];
    }
    Index--;
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
    deletion(p,3);
    // Array Output
    for(int i = 0;i<Index;i++){
        cout << p[i] << " ";
    }
}