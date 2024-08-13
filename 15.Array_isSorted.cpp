#include<iostream>
using namespace std;

void display(int *Arr,int length){
    for (int i = 0; i < length; i++)
        cout << Arr[i] << " ";
    cout << endl;
}

int isSorted(int *p,int length){

    for(int i = 0; i<length-1; i++){
        if(p[i] > p[i+1])
            return 0;
    }
    return 1;
}

int main() {
    int i,result;

    int Arr[] = {12, 18, 24, 27, 31, 39, 45, 41 ,67, 71};
    int length = sizeof(Arr)/sizeof(int);

    result = isSorted(Arr, length);

    if(result == 0){
        cout << "Array is not Sorted !!!" << endl;
        display(Arr,length);
    }
    else{
        cout << "Array is Sorted !!!" << endl;
        display(Arr,length);
    }
    

    return 0;
}
