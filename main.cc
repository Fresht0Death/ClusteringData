#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
#include <algorithm>
#include "myMath.h"
#include "myFiles.h"


using namespace std;






int main(void){

    string fileName;

    getFileName(&fileName);

    cout << "Reading file: " << fileName << endl;


    string line;
    string word;
    bool inRange = false;
    bool inAmp = false;
    int rangeIndex = 0;
    int ampIndex = 0;
    cout << "Reading file: " << fileName << endl;

    ifstream out(fileName);

    if(!out){
    cout << "Error: could not open " << fileName << endl;
    return 1;
    }

    while(out >> word){

        if(word == "Range:"){
                inRange = true;
                inAmp = false;

        }
        if (word == "Amp:"){
            
                inAmp = true;
                inRange = false;

        }
        if(isdigit(word[0])){
                if(inRange){
                    checkClusters(stoi(word));
                }else if (inAmp)
                {
                    //checkClusters(stoi(word));
                }
                

        }   

    }

    out.close();
    cout << "Test 1: Max Range: 1100" << endl;
    printClusters();
    resetClusters();




     getFileName(&fileName);
    ifstream out2(fileName);
    if(!out2){
    cout << "Error: could not open " << fileName << endl;
    return 1;
    }

    while(out2 >> word){

        if(word == "Range:"){
                inRange = true;
                inAmp = false;

        }
        if (word == "Amp:"){
            
                inAmp = true;
                inRange = false;

        }
        if(isdigit(word[0])){
                if(inRange){
                    checkClusters(stoi(word));
                }else if (inAmp)
                {
                    //checkClusters(stoi(word));
                }
                

        }   

    }

    cout << endl;
    cout << "---------------------------------" << endl;
    cout << "Test 2: Max Range: 200" << endl;
    printClusters();
    resetClusters();
    out2.close();


     getFileName(&fileName);
    ifstream out3(fileName);
    if(!out3){
    cout << "Error: could not open " << fileName << endl;
    return 1;
    }

    while(out3 >> word){

        if(word == "Range:"){
                inRange = true;
                inAmp = false;

        }
        if (word == "Amp:"){
            
                inAmp = true;
                inRange = false;

        }
        if(isdigit(word[0])){
                if(inRange){
                    checkClusters(stoi(word));
                }else if (inAmp)
                {
                    //checkClusters(stoi(word));
                }
                

        }   

    }

    cout << endl;
    cout << "---------------------------------" << endl;
    cout << "Test 3: Max Range: 600" << endl;
    printClusters();
    resetClusters();
    out3.close();


    return (0);
}







