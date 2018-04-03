/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on February 20, 2018, 9:29 AM
 * Purpose: Mixing colors
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
    
    //Exit Program!
    return 0;
}

