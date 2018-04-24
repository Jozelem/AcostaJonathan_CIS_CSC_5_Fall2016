/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on April 24, 2018, 12:05 AM
 * Purpose: CPP Template
 *          To be copy for every project
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 
const int THSND=1000;//Thousands
const int HNDRD=100; //Hundreds
const int TEN=10;    //Tens

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short number;
    char n1000s,n100s,n10s,n1s;
    string english;
    
    //Initial Variables
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    //Calculate the 1000's, 100's, 10's and 1's
    n1000s=number/THSND;
    number-=n1000s*THSND;
    n100s=number/HNDRD;
    number-=n100s*HNDRD;
    n10s=number/TEN;
    number-=n10s*TEN;
    n1s=number;
    
    //Output the check value
    
    //Output 1000's convert
    switch(n1000s){
        case 3:english+="Three Thousand";break;
        case 2:english+="Two Thousand";break;
        case 1:english+="One Thousand";break;
    }
    
    //Output 100's convert
    switch(n100s){
        case 9:english+=" Nine Hundred";break;
        case 8:english+=" Eight Hundred";break;
        case 7:english+=" Seven Hundred";break;
        case 6:english+=" Six Hundred";break;
        case 5:english+=" Five Hundred";break;
        case 4:english+=" Four Hundred";break;
        case 3:english+=" Three Hundred";break;
        case 2:english+=" Two Hundred";break;
        case 1:english+=" One Hundred";break;
    }
    
    //Output 10's convert
    if(n10s>=0 && n1s==1){
        switch(n10s){
            case 9:english+=" Ninety";break;
            case 8:english+=" Eighty";break;
            case 7:english+=" Seventy";break;
            case 6:english+=" Sixty";break;
            case 5:english+="";break;
            case 4:english+="";break;
            case 3:english+=" Thirty";break;
            case 2:english+="";break;
            case 1:english+=" Ten";break;
        }
    }
    if(n10s>=0 && n1s>=0){
        switch(n1s){
            case 9:english+=" Nineteen";break;
            case 8:english+=" Eighteen";break;
            case 7:english+=" Seventeen";break;
            case 6:english+=" Sixteen";break;
            case 5:english+="";break;
            case 4:english+=" Fourteen";break;
            case 3:english+=" Thirteen";break;
            case 2:english+="";break;
            case 1:english+=" Eleven";break;
        }
    }
    if(n10s==0 && n1s>=1){
        switch(n1s){
            case 9:english+=" Nine";break;
            case 8:english+=" Eight";break;
            case 7:english+=" Seven";break;
            case 6:english+=" Six";break;
            case 5:english+=" Five";break;
            case 4:english+=" Four";break;
            case 3:english+=" Three";break;
            case 2:english+=" Two";break;
            case 1:english+=" One";break;
        }
    }
    //Output the English convert of the number
    cout<<"The English conversion = "<<english<<" ";
    cout<<"and no/100's Dollars"<<endl;
    
    //Exit Program!
    return 0;
}

