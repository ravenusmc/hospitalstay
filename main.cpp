#include <iostream>
#include <string>

using namespace std;

/******* Prototype Functions *********
//   All of the prototypes, for the functions
//   will be declared here.
//
*************************************/

void welcome();
int numberPatients();


int main() {

  //Declaring variables to be used with the program. 
  int number_of_patients; count = 0;

  //This is a simple welcoming message function. 
  welcome()

  //
  number_of_patients = numberPatients();

  while (count <= number_of_patients){

  }

}//End of main function

/*************************************

Main Functions to use in the program

***********************************/  

//This function will greet the user. 
void welcome(){

  cout << "-~~~-------~~~-------~~~-------~~~-----" << endl;
  cout << "-----Welcome to Kingdom Hospital's-----" << endl;
  cout << "--~~~--~~--Electronic Health Record--~~"
  cout << "---------------------------------------" << endl;
  cin >> "Press enter to continue!" << endl;

}// End of welcome function.

//This function will get the 
int numberPatients(){

  int number;

  cout << "Please enter the number of patients: " << endl;
  cin >> number;
  while not validOne(number);
    cout << "You cannot enter in a negative number!" << endl;
    cout << "Please enter the number of patients: " << endl;
    cin >> number;


  return number;

}//End of numberpatients function.

/****************************

Validation functions 

****************************/

bool validOne(choice){
  if (choice < 0){
    return false;
  }else {
    return true;
  }
} //End of validOne function 




Write a program that computes and displays the charges for a patient’s hospital stay. 

First, the program should ask if the patient was admitted as an in-patient or an outpatient.

If the patient was an in-patient, the following data should be entered:

The name of the patient
The number of days spent in the hospital
The daily rate
Hospital medication charges
Charges for hospital services (lab tests, etc.)
The program should ask for the following data if the patient was an out-patient:

The name of the patient
Charges for hospital services (lab tests, etc.)
Hospital medication charges
Your program should output the results to the screen but also to a txt file that could be emailed to management. 

Your outputted results should include the following:

The patients name
The total charges

Your program should also allow the user to process as many patients as they would like without having to restart 
the program. This means that the outputted file should have all of the patients that were processed during the 
execution of the program.