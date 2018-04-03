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
    float op1,op2,stuAns,correct;
    char choice;
    
    //Initial Variables
    op1=rand()%900+100; //[100,999]
    op2=rand()%999+1;   //[1,999]
    cout<<"This is a simple Math tutor program"<<endl;
    cout<<"Choose form the following menu"<<endl;
    cout<<"Type 1 Addition"<<endl;
    cout<<"Type 2 Subtraction"<<endl;
    cout<<"Type 3 Multiplication"<<endl;
    cout<<"Type 4 Division"<<endl;
    cout<<"Type 5 Close the menu"<<endl;
    cin>>choice;
    //loop the menu
    do{
        //Map/Process Inputs to Outputs
        if (choice>='1'&&choice<='5'){
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
    }while(choice>='1'&&choice<='4');   
    
    //Exit Program!
    return 0;
}

