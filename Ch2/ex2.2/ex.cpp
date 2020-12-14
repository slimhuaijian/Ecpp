// The formula for the Pentagonal numeric sequence is Pn=n*(3n-1)/2. This yields the sequence
// 1, 5, 12, 22, 35, and so on. Define a function to fill a vector of elements passed in to the function
// calculated to some user-specified position. Be sure to verify that the position specified is valid.
// Write a second function that, given a vector, displays its elements. It should take a second
// parameter identifying the type of numeric series the vector represents. Write a main() function to
// exercise these functions.
#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool calcu_elem(vector<int> &pent, int pos);
void display(vector<int> &pent, const string &type, ostream &os=cout);

int main(){
    vector<int> pent;
    const string type("Pentagonal Numeric Series");

    if(calcu_elem(pent, 0))
        display(pent, type);
    
    if(calcu_elem(pent, 8))
        display(pent, type);
    if(calcu_elem(pent, 14))
        display(pent, type);
    if(calcu_elem(pent, 14))
        display(pent, type);
}

bool calcu_elem(vector<int> &pent, int pos){   //& pass by address
    if(pos <= 0 || pos > 64){
        cerr << "invalid position: " << pos << endl;
        return false;
    } 

    for(int ix = pent.size() + 1; ix <= pos; ++ix)
        pent.push_back((ix*(3*ix-1))/2);
    return true;
}



void display(vector<int> &pent, const string &type, ostream &out){
    out << '\n' << type << "\n\t";
    for(int ix = 0; ix < pent.size(); ++ix)
        out << pent[ix] << ' ';
    out << endl;
}
