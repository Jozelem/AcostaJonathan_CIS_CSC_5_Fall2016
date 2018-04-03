/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 8, 2018, 11:23 AM
 * Purpose: Math Tutor
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <cstdlib>  //Get ramdom number
#include <ctime>    //Time to set random number seed
#include <iomanip>  //format library
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned short op1,op2,stuAns,correct;
    
    //Initial Variables
    op1=rand()%900+100; //[100,999]
    op2=rand()%999+1;   //[1,999]
    cout<<"This is a simple Math tutor program"<<endl;
    cout<<"Input the Answer to the following addition problem"<<endl;
    cout<<setw(5)<<op1<<endl;
    cout<<"+ "<<setw(3)<<op2<<endl;
    cout<<"-----"<<endl;
    
    //Map/Process Inputs to Outputs
    correct=op1+op2;
    cout<<((correct>1000)?" ":"  ");
    cin>>stuAns;
    //Display Outputs
    cout<<endl<<(stuAns==correct?"Correct Answer":"Wrong Answer")<<endl;
    
    //Exit Program!
    return 0;
}

