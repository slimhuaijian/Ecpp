#include<iostream>
#include<cstring> // use strlen()
#include<iomanip> // use setw() to guarantee do not read in more than 127 chara
using namespace std;
int main(){
    const int name_size = 128;
    char name[name_size];
    cout << "Please input your name: ";
    cin >> setw(name_size) >> name;
    
    if(strlen(name) < 2) cout << "Name seems valid! ";
    else cout << "Hello! " << name;

    return 0;
}