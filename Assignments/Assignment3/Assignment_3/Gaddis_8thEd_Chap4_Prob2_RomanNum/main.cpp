/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 13, 2018, 12:14 PM
 * Purpose: Roman Numeral Conversion
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short num=0;
    
    //Initial Variables
    cout<<"Enter a number for 1 to 10 -> ";
    cin>>num;
    if (num>10||num<1)cout<<"You did not follow instruction"<<endl;
    
    //Display Outputs
    switch (num){
        case 1:cout<<"The Roman number = I";break;
        case 2:cout<<"The Roman number = II";break;
        case 3:cout<<"The Roman number = III";break;
        case 4:cout<<"The Roman number = IV";break;
        case 5:cout<<"The Roman number = V";break;
        case 6:cout<<"The Roman number = VI";break;
        case 7:cout<<"The Roman number = VII";break;
        case 8:cout<<"The Roman number = VIII";break;
        case 9:cout<<"The Roman number = IX";break;
        case 10:cout<<"The Roman number = X";break;
    }
    
    //Exit Program!
    return 0;
}

