// Write a program to read in a sequence of integers from standard input. 
// Place the values, in turn, in a builtin array and a vector. 
// Iterate over the containers to sum the values. 
// Display the sum and average of the entered values to standard output.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ivec;
    int integer;
    while(cin >> integer)
        ivec.push_back(integer);

    int sum = 0, ave = 0;
    for(int ix = 0; ix < ivec.size(); ++ix)
        sum += ivec[ix];
    ave = sum / ivec.size();

    cout << "Sum is: " << sum;
    cout << " and average is: " << ave;
    
    return 0;
}