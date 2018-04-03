/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 20, 2018, 11:50 AM
 * Purpose: Green Crud with Fibonacci
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <iomanip>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int fn,fnm1,fnm2,intCrud,days;
    
    //Initial Variables
    fnm2=1;
    fnm1=1;
    intCrud=10;
    days=0;
            
    //Printout the first 2 in the sequence
    cout<<"Fibonacci Sequence with Green Crud"<<endl;
    cout<<"On day "<<setw(3)<<days<<" there is "<<setw(4)<<fnm2*intCrud
            <<" lbs of crud"<<endl;
    days+=5;
    cout<<"Fibonacci Sequence with Green Crud"<<endl;
    cout<<"On day "<<setw(3)<<days<<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    
    //Calculate 3rd element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<cout<<"On day "<<setw(3)<<days<<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    
    //Calculate 4th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<cout<<"On day "<<setw(3)<<days<<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //Calculate 5rd element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<cout<<"On day "<<setw(3)<<days<<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    
    //Calculate 6th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
     days+=5;
    cout<<cout<<"On day "<<setw(3)<<days<<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;

    //Calculate 7th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
     days+=5;
    cout<<cout<<"On day "<<setw(3)<<days<<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    
    //Calculate 8th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
     days+=5;
    cout<<cout<<"On day "<<setw(3)<<days<<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    
     //Calculate 9th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<cout<<"On day "<<setw(3)<<days<<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}

