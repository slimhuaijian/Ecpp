// Write a program to read in a sequence of integers from standard input. 
// Place the values, in turn, in a builtin array. 
// Iterate over the containers to sum the values. 
// Display the sum and average of the entered values to standard output.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    const int asize = 128;
    int ia[asize];
    int integer;
    int aelem = 0, cnt = 0;
    while(cin >> aelem && cnt < asize)
        ia[cnt++] = aelem;

    int sum = 0, ave = 0;
    for(int ix = 0; ix < cnt; ++ix)  //note here ix not < asize, because the array may not be full
        sum += ia[ix];
    ave = sum / cnt;

    cout << "Sum is: " << sum;
    cout << " and average is: " << ave;
    
    return 0;
}