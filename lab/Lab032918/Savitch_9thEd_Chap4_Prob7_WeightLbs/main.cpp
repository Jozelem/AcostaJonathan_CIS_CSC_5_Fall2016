/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 29, 2018, 12:05 AM
 * Purpose: MY attraction to the earth
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <iomanip>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 
const float GRAVITY=6.673e-8f; //cm^3/g/sec^2
const float CMMTRS=0.01f;//Centimeters to Meters
const float MTRSFT=3.281f;//Meters to feet
const float LBSLUG=32.174f;//Pounds per Slugs

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float myMass,msEarth,rEarth,myWt,myWtCnv;
    
    //Initial Variables
    myMass=6;//6 slugs * Conversion
    myWtCnv=myMass*LBSLUG;
    msEarth=5.972e27f; //grams
    rEarth=6.371e6f;   //meters
    
    //Map/Process Inputs to Outputs
    myWt=GRAVITY*CMMTRS*CMMTRS*CMMTRS*myMass*msEarth*MTRSFT*MTRSFT*MTRSFT
            /(rEarth*rEarth*MTRSFT*MTRSFT);
    
    //Display Outputs
    //Output my Weight
    cout<<fixed<<setprecision(0);
    cout<<myMass<<" slugs = "<<myWt<<" lbs"<<endl;
    cout<<myMass<<" slugs = "<<myWtCnv<<" lbs"<<endl;
    
    //Exit Program!
    return 0;
}

