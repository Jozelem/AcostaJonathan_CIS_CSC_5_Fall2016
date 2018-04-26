/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on April 26th, 2018, 12:09 PM
 * Purpose: Shooter Program
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <iomanip>
#include <cstdlib> //Srand
#include <ctime>   //Time function
#include <cmath>   //Math Library

using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 

//Function Prototypes
float frand();//probability form 0 to 1
bool shoot(float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    bool aLive,bLive,cLive;
    char remain;
    float aPk,bPk,cPk;
    int aCnt,bCnt,cCnt;
    
    //Initial Variables
    aCnt=bCnt=cCnt=0;
    
    aPk=1.0f/3.0f;
    bPk=1.0f/2.0f;
    cPk=1.0f;
    for(int game=1;game<=1000;game++){
        aLive=bLive=cLive=true;
        //Test the shoot function
        int count=0;
        for(int i=1;i<1000;i++){
            if(shoot(aPk))count++;
        }
        cout<<"Count = "<<count<<endl;

        //Map/Process Inputs to Outputs
        do{
            if(aLive){
                if(cLive)       cLive=shoot(aPk);
                else if(bLive)  bLive=shoot(aPk);
            }
            if(bLive){
                if(cLive)       cLive=shoot(bPk);
                else if(aLive)  aLive=shoot(bPk);
            }
            if(cLive){
                if(bLive)       bLive=shoot(cPk);
                else if(aLive)  aLive=shoot(cPk);
            }

            remain=aLive+bLive+cLive;
        }while(remain>1);
        aCnt+=aLive;
        bCnt+=aLive;
        cCnt+=cLive;
    }
  
    //Display Outputs
    cout<<"Aaron   PK = "<<aPk<<endl;
    cout<<"Bob     PK = "<<bPk<<endl;
    cout<<"Charlie PK = "<<cPk<<endl;
    cout<<"Aaron   Lives "<<aCnt<<" Times"<<endl;
    cout<<"Bob     Lives "<<bCnt<<" Times"<<endl;
    cout<<"Charlie Lives "<<cCnt<<" Times"<<endl;
    
    //Exit Program!
    return 0;
}

bool shoot(float pk){
    if (frand()>pk)return true;
    return false;
}

float frand(){
    static float MAXRAND=pow(2,31)-1;
    return rand()/MAXRAND;
}