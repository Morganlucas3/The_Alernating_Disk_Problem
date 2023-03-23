//
//  main.cpp
//  The Alternating Disk Problem
//
//  Created by Morgan Lucas and Edgar Torres on 2/12/22.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {

    //declare array
    int n;
    int j = 0;
    
    cin >> n;
    
    int array[2*n];
    
    int swaps = 0;
    int runs = 0;
    int lastIndex = 2*n-1;
    
    //initialize array
    for(int i = 0; i < 2*n; i++){
        if(i % 2 == 0){
            array[i] = 0;
        }
        else{
            array[i] = 1;
        }
    }

    for(int i = 0; i < 2*n; i++){
        cout << array[i];
    }
    cout << endl;
    cout << "======================" << endl;

    //"repeat n/2 times"
    while(j <= ceil(n/2)){
        for(int i = runs; i < 2*n-1; i++){
            if(array[i]!=array[i+1]){
                swap(array[i],array[i+1]);
                swaps++;
            }
        }
        runs++;
    for(int i = 0; i < 2*n; i++){
        cout << array[i];
    }
        cout << "\nLEFT TO RIGHT" << endl;
    //iterate from right to left, swapping where necessary
    for(int i = lastIndex-runs; i > 1; i--){
        if(array[i]!=array[i-1]){
            swap(array[i],array[i-1]);
            swaps++;
        }
    }
    runs++;
    for(int i = 0; i < 2*n; i++){
        cout << array[i];
    }
        cout << "\nRIGHT TO LEFT" << endl;
    j++;
    cout << j << endl;
    }

    cout << swaps;

    return 0;
}

