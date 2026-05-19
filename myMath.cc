#include <iostream>

using namespace std;

int arrayofclusters[15] = {0};


void checkClusters(int num){

    int i = 0;

    if(num == 0){
            arrayofclusters[0]++;
            
        }else if((0 < num) && (num < 10)){
            arrayofclusters[1]++;
    }else if((10 <= num) && (num < 20)){
            arrayofclusters[2]++;
    }else if((20 <= num) && (num < 30)){
            arrayofclusters[3]++;
    }else if((30 <= num) && (num < 40)){
            arrayofclusters[4]++;
    }else if((40 <= num) && (num < 50)){
            arrayofclusters[5]++;           
    }else if((50 <= num) && (num < 60)){     
            arrayofclusters[6]++;   
    }else if((60 <= num) && (num < 70)){         
            arrayofclusters[7]++;   
    }else if((70 <= num) && (num < 80)){
            arrayofclusters[8]++;   
    }else if((80 <= num) && (num < 90)){     
            arrayofclusters[9]++;   
    }else if((90 <= num) && (num < 100)){
            arrayofclusters[10]++;
    }else if((100 <= num) && (num < 110)){
            arrayofclusters[11]++;      
    
    }else if((110 <= num) && (num < 120)){
            arrayofclusters[12]++;
    }else if((120 <= num) && (num < 130)){
            arrayofclusters[13]++;
    }else if((130 <= num) && (num < 140)){
            arrayofclusters[14]++;
    }


}

void printClusters(void){
        for (int i = 0; i < 15; i++){
    if(i == 0){
        cout << "Range: num == 0" << endl;
    }else if(i == 1){
        cout << "Range: 0 < num < 10" << endl;
    }else if(i == 2){
        cout << "Range: 10 <= num < 20" << endl;
    }else if(i == 3){
        cout << "Range: 20 <= num < 30" << endl;
    }else if(i == 4){
        cout << "Range: 30 <= num < 40" << endl;
    }else if(i == 5){
        cout << "Range: 40 <= num < 50" << endl;
    }else if(i == 6){
        cout << "Range: 50 <= num < 60" << endl;
    }else if(i == 7){
        cout << "Range: 60 <= num < 70" << endl;
    }else if(i == 8){
        cout << "Range: 70 <= num < 80" << endl;
    }else if(i == 9){
        cout << "Range: 80 <= num < 90" << endl;
    }else if(i == 10){
        cout << "Range: 90 <= num < 100" << endl;
    }else if(i == 11){
        cout << "Range: 100 <= num < 110" << endl;
    }else if(i == 12){
        cout << "Range: 110 <= num < 120" << endl;
    }else if(i == 13){
        cout << "Range: 120 <= num < 130" << endl;
    }else if(i == 14){
        cout << "Range: 130 <= num < 140" << endl;
    }
        cout << "Cluster " << i << ": " << arrayofclusters[i] << endl;
    }
}

void resetClusters(void){
    for(int i = 0; i < 15; i++){
        arrayofclusters[i] = 0;
    }
}