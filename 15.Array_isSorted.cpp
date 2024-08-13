#include<iostream>
using namespace std;



int main() {
    int i;

    int Arr[] = {12, 18, 24, 27, 31, 39, 45, 67, 71};
    int length = 9;

    cout << "Before Inserting: ";
    for (i = 0; i < length; i++)
        cout << Arr[i] << " ";
    cout << endl;

    length = insert(Arr, length, 35);

    cout << "After Inserting: ";
    for (i = 0; i < length; i++)
        cout << Arr[i] << " ";
    cout << endl;

    return 0;
}
