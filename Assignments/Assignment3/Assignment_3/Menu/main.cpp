/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 15, 2018, 5:41 PM
 * Purpose: Menu for chapter 4
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
    //Declare Variables
    char choice;
    
    //Display menu
    cout<<"Choose form the following menu"<<endl;
    cout<<"Type 1 Math Tutor"<<endl;
    cout<<"Type 2 Determine the smallest and largest number"<<endl;
    cout<<"Type 3 Roman Numeral Conversion"<<endl;
    cout<<"Type 4 Magic Date"<<endl;
    cout<<"Type 5 To compere two areas of different rectangles"<<endl;
    cout<<"Type 6 Body Mass"<<endl;
    cout<<"Type 7 To convert kilograms into newtons"<<endl;
    cout<<"Type 8 Mixing colors"<<endl;
    cout<<"Type 9 Green Crud with Fibonacci"<<endl;
    cin>>choice;
    
    //Map/Process Inputs to Outputs
    if (choice>='1'&&choice<='9'){
        switch(choice){
            case '1':{
                //Out putting the title of the program
                cout<<"Math Tutor"<<endl;
                
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
                if(stuAns==correct)cout<<"Your Answer is correct";
                else cout<<"Your Answer is wrong, the correct answer is "<<correct<<endl;
                
                break;
            }
            case '2':{
                //Out putting the title of the program
                cout<<"Determine the smallest and largest number"<<endl;
                
                //Declare Variables
                short num1=0,num2=0;

                //Initial Variables
                cout<<"Enter two number (press enter after each) -> ";
                cin>>num1;
                cin>>num2;

                //Display Outputs
                if (num1>num2)cout<<num1<<" is larger"<<endl;
                else cout<<num2<<" is larger"<<endl;
                if (num1<num2)cout<<num1<<" is smaller"<<endl;
                else cout<<num2<<" is smaller"<<endl;
                
                break;
            }
            case '3':{
                //Out putting the title of the program
                cout<<"Roman Numeral Conversion"<<endl;
                
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
                break;
            }
            case '4':{
                //Out putting the title of the program
                cout<<"Magic Date"<<endl;
                
                //Declare Variables
                short month,year,day,smMthDy;

              //Initial Variables
                cout<<"Enter a Month (in number form) -> ";
                cin>>month;
                cout<<"Enter a Day (in number form) -> ";
                cin>>day;
                cout<<"Enter a Year (in number form) -> ";
                cin>>year;

              //Map/Process Inputs to Outputs
                smMthDy=month*day;

              //Display Outputs
              if (year==smMthDy)cout<<"Date is magic"<<endl;
                else cout<<"Date is not magic"<<endl;
                
                break;
            }
            case '5':{
                //Out putting the title of the program
                cout<<"Compere two areas of different rectangles"<<endl;
                
                //Declare Variables
                short int rcLth1,  //Length of the first rectangle in cm
                          rcWth1,  //Width of the first rectangle in cm
                          rcLth2,  //Length of the second rectangle in cm
                          rcWth2,  //Width of the second rectangle in cm
                          area1,   //area of the first rectangle in cm^2
                          area2;   //area of the second rectangle in cm^2

                //Initial Variables
                cout<<"Enter the length of the first rectangle in cm -> ";
                cin>>rcLth1;
                cout<<"The width in cm -> ";
                cin>>rcWth1;
                cout<<"Enter the length of the second rectangle in cm -> ";
                cin>>rcLth2;
                cout<<"the width in cm -> ";
                cin>>rcWth2;

                //Map/Process Inputs to Outputs
                area1=rcLth1*rcWth1;
                area2=rcLth2*rcWth2;

                //Display Outputs
                if (area1>area2)cout<<"The rectangle with greater area is "<<area1<<endl;
                else if(area1==area2)cout<<"The rectangle's areas are the same"<<endl; 
                else cout<<"The rectangle with greater area is "<<area2<<endl;
                
                break;
            }
            case '6':{
                //Out putting the title of the program
                cout<<"Body Mass"<<endl;
                
                //Declare Variables
                float BMI,   //Body Mass Index
                      wght,  //Weight in pounds
                      hght;  //Height in inches

                //Initial Variables
                cout<<"This program will tell you if you are underweight, overweight "
                        "or have optima weight"<<endl;
                cout<<"Enter your weight in pounds -> ";
                cin>>wght;
                cout<<"Enter your height in inches -> ";
                cin>>hght;

                //Map/Process Inputs to Outputs
                BMI=(wght*703)/hght;

                //Display Outputs
                if (BMI>=18.5&&BMI<=25)cout<<"You have optimal weight"<<endl;
                else if (BMI<18.5)cout<<"You are underweight"<<endl;
                else if (BMI>25)cout<<"You are overweight"<<endl;
                
                break;
            }
            case '7':{
                //Out putting the title of the program
                cout<<"Convert kilograms into newtons"<<endl;
                
                //Declare Variables
                float wght,  //the weight of an object in kilograms
                      nwts;  //the weight of an object in newtons

                //Initial Variables
                //Declaring the weight of the object
                cout<<"How much does the object weight in kilograms? ->";
                cin>>wght;

                //Map/Process Inputs to Outputs
                nwts=wght*9.8;

                //Display Outputs
                //setting the bounds of how much the object can weight
                if (nwts>1000)cout<<"The object is too heavy"<<endl;
                else if (nwts<10)cout<<"The object is too light"<<endl;
                else cout<<"The object weights "<<nwts<<" newtons"<<endl;
                
                break;
            }
            case '8':{
                //Out putting the title of the program
                cout<<"Mixing colors"<<endl;
                
                //Declare Variables
                char clr1, //Color one
                     clr2; //Color two

                //Initial Variables
                //Inputing the color and using a do while loop to repeat if the color is wrong
                do{
                cout<<"Ender two of this color ('r' for red, 'b' for blue, "
                        " 'g' for green and 'y' for yellow)"<<endl;
                cin>>clr1;
                cin>>clr2;
                if ((clr1!='r'&&clr1!='b'&&clr1!='y')||(clr2!='r'&&clr2!='b'
                        &&clr2!='y')) cout<<"You did not follow instructions"<<endl;
               }while((clr1!='r'&&clr1!='b'&&clr1!='y')||(clr2!='r'&&clr2!='b'
                        &&clr2!='y'));

                //Display Outputs
                //display the new color created
                if ((clr1=='r'&&clr2=='b')||(clr1=='b'&&clr2=='r'))
                    cout<<"your new color is purple"<<endl;
                else if ((clr1=='r'&&clr2=='y')||(clr1=='y'&&clr2=='r'))
                    cout<<"your new color is orange"<<endl;
                else if ((clr1=='b'&&clr2=='y')||(clr1=='y'&&clr2=='b'))
                    cout<<"your new color is green"<<endl;
                else cout<<"The color that you pick do not created a new color"<<endl;
                
                break;
            }
            case '9':{
                //Out putting the title of the program
                cout<<"Green Crud with Fibonacci"<<endl;
                
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
    
                break;
            }
            
        }
    }else{
        cout<<"Exiting Menu"<<endl;
    }
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}

