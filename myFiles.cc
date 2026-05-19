#include <iostream>
#include <string>
using namespace std;



void getFileName(string *fileName){
    cout << "Enter the name of the file you want to read: " << endl;
    cin >> *fileName;
    cout << "You entered: " << *fileName << endl;
}

