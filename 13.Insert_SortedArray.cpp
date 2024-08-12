#include<iostream>
using namespace std;

int insert(int *p, int n, int key) {
    int i = n - 1;
    while (i >= 0 && key < p[i]) {
        p[i + 1] = p[i];
        i--;
    }
    p[i + 1] = key;
    return n + 1; 
}

int main() {
    int i;
    int *Arr = new int[15]; 

    int initialArr[] = {12, 18, 24, 27, 31, 39, 45, 67, 71};
    int length = 9;

    for (i = 0; i < length; i++) {
        Arr[i] = initialArr[i];
    }

    cout << "Before Inserting: ";
    for (i = 0; i < length; i++)
        cout << Arr[i] << " ";
    cout << endl;

    length = insert(Arr, length, 35);

    cout << "After Inserting: ";
    for (i = 0; i < length; i++)
        cout << Arr[i] << " ";
    cout << endl;

    delete[] Arr;
    return 0;
}
