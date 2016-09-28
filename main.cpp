/*
 
 program: MidTerm Project
 Programmer: Mike Cuddy
 Date: 28 September 2016
 Other:
 
 */

/*
 
 Explanation: This program is a basic hospital Electronic Health Record. It will show management the name of a patient
 and how much they were billed.
 
 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/******* Prototype Functions *********
 //   All of the prototypes, for the functions
 //   will be declared here.
 //
 *************************************/

void welcome();
int numberPatients();
string patientName();
int numberOfDays();
int patient_type();
float dailyrateCharges();

//bool validOne();

int main() {
    
    //Declaring variables to be used with the program.
    int number_of_patients, count = 1, days;
    string name, patientType;
    float dailyRate;
    
    //This is a simple welcoming message function.
    welcome();
    
    //Here this will get the number of patients.
    number_of_patients = numberPatients();
    
    //This for loop will loop through the number of patients and the user will be inputing
    //The information for each patient.
    while (count <= number_of_patients){
        
        patientType = patient_type();
        
        if (patientType == "in-patient"){
            name = patientName();
            days = numberOfDays();
            dailyRate = dailyrateCharges();
        }
        else if(patientType == "out-patient"){
            name = patientName();
        }
        
        count++;
    }
    
    //system("pause"); //This line is for Microsoft Visual Studio users.
    
    return 0;
    
}//End of main function

/*************************************
 
 Main Functions to use in the program
 
 ***********************************/

//This function will greet the user.
void welcome(){
    
    string a;
    
    cout << "-~~~-------~~~-------~~~-------~~~-----" << endl;
    cout << "-----Welcome to Kingdom Hospital's-----" << endl;
    cout << "--~~~--~~--Electronic Health Record--~~" << endl;
    cout << "---------------------------------------" << endl;

    
}// End of welcome function.

//This function will get the
int numberPatients(){
    
    int number;
    
    cout << "Please enter the number of patients: " << endl;
    cin >> number;
    while (number < 0)
    {
        cout << "You cannot enter in a negative number!" << endl;
        cout << "Please enter the number of patients: " << endl;
        cin >> number;
    };

    
    
    return number;
    
}//End of numberpatients function.


//This function will the patients name.
string patientName() {
    
    string name;
    
    cout << "Please enter the patients full name: " << endl;
    cin >> name;
    
    return name;
    
}//End of patientName function.

//This function will get the number of days that the patient stayed in the hospital.
int numberOfDays(){
    
    int days;
    cout << "Please enter the number of days: " << endl;
    cin >> days;
    while (days <= 0){
        cout << "You cannot enter in a value that is less than 0" << endl;
        cout << "Please enter the number of days: " << endl;
        cin >> days;
    }
    
    return days;
    

} //End of numberOfDays function

//This function will get the patient type.
int patient_type(){
    
    int patient;
    
    cout << "What is the patient type: " << endl;
    cout << "1. in-patient" << endl;
    cout << "2. out-patient" << endl;
    cin >> patient;
    while (patient < 1 || patient > 2){
        cout << "You must type either 1 or 2" << endl;
        cout << "What is the patient type: " << endl;
        cout << "1. in-patient" << endl;
        cout << "2. out-patient" << endl;
        cin >> patient;
    }
    
    return patient;
    
}//End of patient_type function.

//This function will get the daily rate for the patient.
float dailyrateCharges() {
    
    float number;
    
    cout << "What was the daily rate: " << endl;
    cin >> number;
    while (number < 0){
        cout << "The number must be greater than or equal to 0" << endl;
        cin >> number;
    }
    
    return number;
}//End of daily rate charges function. 








/****************************
 
 Validation functions
 
 ****************************/

//This function will verify that the user is entering the correct values in the program.
bool validOne(int choice){
    if (choice < 0){
        return false;
    }else {
        return true;
    }
} //End of validOne function
