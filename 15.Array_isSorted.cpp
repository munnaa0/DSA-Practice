#include<iostream>
using namespace std;

void display(int *Arr,int length){
    for (int i = 0; i < length; i++)
        cout << Arr[i] << " ";
    cout << endl;
}

int isSorted(int *p,int length){

    for(int i = 0; i<length; i++){
        if(p[i] > p[i+1])
            return 0;
    }
    return 1;
}

int main() {
    int i,result;

    int Arr[] = {12, 18, 24, 27, 31, 39, 45, 67, 71};
    int length = sizeof(Arr)/sizeof(int);

    cout << "Before Inserting: ";
    display(Arr,length);

    result = isSorted(Arr, length);

    cout << "After Inserting: ";
    display(Arr,length);

    return 0;
}
