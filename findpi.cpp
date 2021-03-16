//  findpi.cpp
//  Created by Paweł Kęcerski on 2021/03/16
//  @pkecerski
//  Finds Pi to Nth digits, entered by User


#include <iostream>
#include <stdio.h>

//  Define namespace for easier typing
using namespace std;

//  Define functions
void findPi();

// Define variables


// Program loop
int main(int argc, char *argv[]){
    //while(1){
        findPi();
    //}
}

// Custom functions
void findPi(){
    int nPrecision;
    int nIterations = 500000;
    double dPi = 3.14159, dPiApprox;

    //  Prompt user for desired precision of π
    printf("Please enter your desired precision, up to 15 maximum digits:\n");
    scanf("%d",&nPrecision);
    //  Double type generally holds up to 15 decimal point numbers
    if(nPrecision>15){
        nPrecision = 15;
        printf("The maximum precision is 15 characters, I changed that up for you.\n");
    }

    //  Nilakantha Series
    dPiApprox = 3.0;
    for (int i=2; i<(nIterations+2); i=i+2){
        double dIncrement = (4.0/(i*(i+1.0)*(i+2.0)));
        if(i%4!=0){
            dPiApprox = dPiApprox + dIncrement;
        }
        else if(i%4==0){
            dPiApprox = dPiApprox - dIncrement;
        }
       
    }
    printf("\u03c0 approximation using the Nilakantha Series of %d iterations is: %1.*f.\n\n", nIterations, nPrecision, dPiApprox);
}