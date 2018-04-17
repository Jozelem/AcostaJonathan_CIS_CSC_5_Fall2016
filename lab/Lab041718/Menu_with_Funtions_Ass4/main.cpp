/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on April 17th, 2018, 12:33 PM
 * Purpose:  Menu using Functions With Assignment 4 Problems
 */

//System Libraries
#include <iostream>
#include <cstdlib>  //Get ramdom number
#include <ctime>    //Time to set random number seed
#include <iomanip>  //format library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float GRAVITY=6.673e-8f; //cm^3/g/sec^2
const float CMMTRS=0.01f;//Centimeters to Meters
const float MTRSFT=3.281f;//Meters to feet
const float LBSLUG=32.174f;//Pounds per Slugs
//Function Prototypes
void menu();
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop and Display menu
    do{
        menu();
        cin>>choice;

        //Process/Map inputs to outputs
        switch(choice){
            case '1':{prblm1();break;}
            case '2':{prblm2();break;}
            case '3':{prblm3();break;}
            case '4':{prblm4();break;}
            case '5':{prblm5();break;}
            default: cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='5');
    
    //Exit stage right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Menu
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void menu(){
    //Display menu
    cout<<endl<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 Math Tutor"<<endl;
    cout<<"Type 2 Sum of Numbers"<<endl;
    cout<<"Type 3 Pennies for Paid"<<endl;   
    cout<<"Type 4 Stock Purchase"<<endl;
    cout<<"Type 5 My attraction to the earth"<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Math Tutor
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm1(){
    cout<<"Math Tutor"<<endl;
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float op1,op2,stuAns,correct;
    char choice;
    
    //Initial Variables
    //choosing the two random numbers
    op1=rand()%900+100; //[100,999]
    op2=rand()%999+1;   //[1,999]
    //Menu of the Program
    do{
        cout<<"This is a simple Math tutor program"<<endl;
        cout<<"Choose form the following menu"<<endl;
        cout<<"Type 1 Addition"<<endl;
        cout<<"Type 2 Subtraction"<<endl;
        cout<<"Type 3 Multiplication"<<endl;
        cout<<"Type 4 Division"<<endl;
        cout<<"Type 5 Close the menu"<<endl;
        cin>>choice;
    }while(choice>=1&&choice<=4);
    //Map/Process Inputs to Outputs
    switch(choice){
        case '1':{
            cout<<"Input the Answer to the following addition problem"<<endl;
            cout<<setw(5)<<op1<<endl;
            cout<<"+ "<<setw(3)<<op2<<endl;
            cout<<"-----"<<endl;
            correct=op1+op2;
            cout<<((correct>1000)?" ":"  ");
            cin>>stuAns;
            //Display Outputs
            if(stuAns==correct)cout<<"Your Answer is correct";
            else cout<<"Your Answer is wrong, the correct answer is "
                    <<correct<<endl;
            break;
        }
        case '2':{
            cout<<"Input the Answer to the following subtraction problem"<<endl;
            cout<<setw(5)<<op1<<endl;
            cout<<"- "<<setw(3)<<op2<<endl;
            cout<<"-----"<<endl;

            //Map/Process Inputs to Outputs
            correct=op1-op2;
            cout<<((correct>1000)?" ":"  ");
            cin>>stuAns;
            //Display Outputs
            if(stuAns==correct)cout<<"Your Answer is correct";
            else cout<<"Your Answer is wrong, the correct answer is "
                    <<correct<<endl;
            break;
        }
        case '3':{
            cout<<"Input the Answer to the following Multiplication problem"<<endl;
            cout<<setw(5)<<op1<<endl;
            cout<<"* "<<setw(3)<<op2<<endl;
            cout<<"-----"<<endl;

            //Map/Process Inputs to Outputs
            correct=op1*op2;
            cout<<((correct>1000)?" ":"  ");
            cin>>stuAns;
            //Display Outputs
            if(stuAns==correct)cout<<"Your Answer is correct";
            else cout<<"Your Answer is wrong, the correct answer is "
                    <<correct<<endl;
            break;
        }
        case '4':{
            cout<<"Input the Answer to the following division problem"<<endl;
            cout<<setw(5)<<op1<<endl;
            cout<<"/ "<<setw(3)<<op2<<endl;
            cout<<"-----"<<endl;

            //Map/Process Inputs to Outputs
            correct=op1/op2;
            cout<<((correct>1000)?" ":"  ");
            cin>>stuAns;
            //Display Outputs
            if(stuAns==correct)cout<<"Your Answer is correct";
            else cout<<"Your Answer is wrong, the correct answer is "
                    <<correct<<endl;
            break;
        }
        case '5':{
            cout<<"The application will be closing now"<<endl;
            break;
        }
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Sum of Numbers
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm2(){
    cout<<"Sum of Numbers"<<endl;
    cout<<"This Programs will sum the number input form 1 to that number"<<endl;
    //Declare Variables
    int intVlu, //A positive integer value
        sum;

    //Initial Variables
    intVlu=0;
    //Enter the value that will determent how many number will be sum
    do{
       cout<<"Enter a positive integer value"<<endl;
       cin>>intVlu;
    }while(intVlu<1);
    
    //Map/Process Inputs to Outputs
    //adding all the number upto the number input
    for(int i=0; i<=intVlu; i++){
        int a=1;
        a=i;
        sum+=a;
    }
    //Display Outputs
    cout<<"The sum of numbers = "<<sum<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Pennies for Paid
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm3(){
    cout<<"Pennies for Paid"<<endl;
    ///Declare Variables
    unsigned int totPay,pyPrDay; //pennies of pay
    char numDays=31; //Most number of days in Month
    //Initial Variables
    totPay=0;  //total amount
    pyPrDay=1; //1 pennis of pay
            
    //Map/Process Inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Day       Pay          Total"<<endl;
    for(int day=1;day<=numDays;day++) {
        cout<<setw(2)<<day<<setw(12)<<pyPrDay/100.0f<<setw(14)
                <<totPay/100.0f<<endl;
        pyPrDay*=2;
        totPay+=pyPrDay;
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Stock Purchase
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm4(){
    cout<<"Stock Purchase"<<endl;
    //initialize the random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int dolStk, numStk, denStk; //shock price  $ num/den
    int numShrs; //number of shares
    float valStks; //Value of the stocks in $'s
    char again; //continue or not
    
    //Initial Variables
    denStk=8;
    
    //Map/Process Inputs to Outputs
    do{
        //Randomly choose the stock price
        dolStk=rand()%1000; //[0-999]
        numStk=rand()%8; //[0-7]/8
        numShrs=rand()%90+10; //[10-99]
        
        //Calculate the stock value
        valStks=numShrs*(dolStk+static_cast<float>(numStk)/denStk);
    
        //Display Outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The number of shares of stock = "<<numShrs<<endl;
        cout<<"The value of the stock/share = $"<<dolStk<<" "<<numStk<<"/"
                <<denStk<<endl;
        cout<<"The total value of the stock = $"<<valStks<<endl;
        
        //Prompt the user to see if you want to continue
        cout<<endl<<"Would you like to continue Y/N"<<endl;
        cin>>again;
    }while(again=='Y'||again=='y');
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         My attraction to the earth
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm5(){
    cout<<"My attraction to the earth"<<endl;
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
}