#include<iostream>
using namespace std;

int main(){
    
     int i,k,Size,item;
    cout << "Enter Array Size: ";
    cin >> Size;
    int Arr[Size];

    cout << "Enter " << Size << " Elements: ";
    for(i=0; i<Size; i++)
    {
        cin >>Arr[i];
    }

     cout << "Enter the position you want to Update: ";
    cin >> k;

    if(k<=0 || k>Size-1)
    {
        cout << "Overflow" ;
    }

    else{
        cout << "Enter the element you want to update with: ";
        cin >> item;

        Arr[k-1] = item;
          for(i=0;i<Size;i++){
            cout << Arr[i] << " ";
        }
    }

}
