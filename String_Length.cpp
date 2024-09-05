#include<iostream>
using namespace std;
int main()
{
    string name = "Munna";
    int i=0,length=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }

    cout << "Array Length is " << length << endl;

    return 0;   
}