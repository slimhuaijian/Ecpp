// Write a program to ask the user his or her name. Read the response. Confirm that the input 
// is at least two characters in length. If the name seems valid, respond to the user.
// Provide two implementations: one using a C-style character string, and 
// the other using a string class object.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;

    cout << "Please input your name: ";
    cin >> name;

    if(name.size() < 2) cout << "Name seems valid! ";
    else cout << "Hello! " << name;

    return 0;
} 