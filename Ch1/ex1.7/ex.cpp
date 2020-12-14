#include<iostream>
#include<algorithm>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
//open both inputfile and outputfile in case error
int main(){
    ifstream infile("data.txt");
    if(!infile)  cerr << "Oops! Uanble to open input file!\n";
    
    ofstream outfile("sort.txt");
    if(!outfile) cerr << "Oops! Uanble to open output file!\n";

    string word;
    vector<string> text;
    while(cin >> word)
        text.push_back(word);

    int ix;
    cout << "unsorted text: \n";
    
    for(ix = 0; ix < text.size(); ++ix)
        cout << text[ix] << ' ';
    cout << endl;

    outfile << "sorted text: \n";
    sort(text.begin(), text.end());
    for(ix = 0; ix < text.size(); ++ix)
        outfile << text[ix] << ' ';
    cout << endl;

    return 0;
}
