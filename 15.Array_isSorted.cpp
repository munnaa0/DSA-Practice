#include<iostream>
using namespace std;

void display(){
    for (i = 0; i < length; i++)
        cout << Arr[i] << " ";
    cout << endl;
}

int main() {
    int i;

    int Arr[] = {12, 18, 24, 27, 31, 39, 45, 67, 71};
    int length = 9;

    cout << "Before Inserting: ";
    display(Arr,length);

    length = insert(Arr, length, 35);

    cout << "After Inserting: ";
    display(Arr,length);

    return 0;
}
