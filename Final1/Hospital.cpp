#include "Patient.h"
#include "PatientRegister.h"
//#include "WaitingList.h"
#include <iostream>
#include <string>
#include <time.h>
#include <vector>

// Get input using given prompt
std::string getInput(std::string prompt);

void displayMainMenu();

void newPatient(PatientRegister* patientRegister);

//void printWaitingList(WaitingList* waitingList);

void printPatientRegister(PatientRegister* patientRegister);

int getQueueLength();

int getRegisterLength();

int main(void)
{
    // Generate new linkedlists
    //WaitingList waitingList = new WaitingList*[10];
    PatientRegister patientRegister = new PatientRegister*[10];;
    // delete waitingList;
    // delete patientRegister;
    bool programloop = true;

    // Welcome message
    std::cout << "Welcome to the Brisbane Hospital" << std::endl;


    while (programloop) {

        std::string choice;


        displayMainMenu();


        choice =
            getInput("Make your choice by entering a number between 1 and 4");
        std::cout << "Your choice was: " << choice << std::endl;

        if (choice == "1") {
            std::cout << "Adding a patient to the patient register..." << std::endl;
            newPatient(patientRegister);
        }


        // else if (choice == "2") {
        //     std::cout << "Adding a patient to the waiting list..." << std::endl;
        //     loadGame();
        // }

        else if (choice == "3") {
            std::cout << "Showing patient information..." << std::endl;
            printPatientInformation(int registationNumber);
        }

        else if (choice == "4") {
            std::cout << "Showing patients in patient register..." << std::endl;
            printPatientRegister(patientRegister);
        }
        // else if (choice == "5") {
        //     std::cout << "Showing waiting list..." << std::endl;
        //     programloop = false;
        // }

        else if (choice == "6") {
            std::cout << "Removing patient from register..." << std::endl;
            removePatientFromRegister(int patientNumber);
        }

        // else if (choice == "7") {
        //     std::cout << "Removing patient from waiting list..." << std::endl;
        //     programloop = false;
        // }

        else if (choice == "8") {
            std::cout << "Quitting..." << std::endl;
            programloop = false;
        }

        // EOF Character
        else if (std::cin.fail()) {
            std::cout << "Exiting hostpial, Goodbye!" << std::endl;
            programloop = false;
        }

        // Invalid Input
        else {
            std::cout << "Your choice was invalid." << std::endl;
        }
   }
}

// Get input using given prompt
std::string getInput(std::string prompt)
{
    std::string temp;
    std::cout << prompt << std::endl;
    std::getline(std::cin, temp);
    if (std::cin.fail()) {
        temp = "";
    }
    return temp;
}

// void printWaitingList(WaitingList* waitingList) {
    
//     Patient* temp = null;
//     std::cout << "\n"
//     std::string[] patientInfo;
//     std::vector<> admissionEntry;
//     int queuePosition = 0;

//     for (int i=0; i < waitingList->getLength(); i++) {
//         temp = waitinglist[i];
//         patientInfo = temp->getPatientInfo;
//         std::cout << "Patient name: " << patientInfo[0] << std::endl;
//         std::cout << "Patient date of birth: " << patientInfo[1] << std::endl;
//         std::cout << "Patient registration number: " << patientInfo[2] << std::endl;

//         std::cout << "Patient queue position: " << i + 1;

//         admissionData = waitingList->getAdmissionHistory();

//         std::cout << "Date of admission: " << admissionData[0];
//         if (!admissionData[1] == "") {
//             std::cout << "Discharge Date: " << admissionData[1];
//         } else {
//             std::cout << "Patient has not yet been discharged." << std::endl;
//         }
//         std::cout << "Patient is in  the " << admissionData[2]<< << " ward."std::endl;
//         return;
//     }
// }

void printPatientRegister(PatientRegister* patientRegister) {
    
    Patient* temp = null;
    std::cout << "\n"
    std::string[] patientInfo;
    std::vector<> admissionEntry;
    int queuePosition = 0;

    for (int i=0; i < patientRegister->getLength(); i++) {
        temp = patientRegister[i];
        patientInfo = temp->getPatientInfo;
        std::cout << "Patient name: " << patientInfo[0] << std::endl;
        std::cout << "Patient date of birth: " << patientInfo[1] << std::endl;
        std::cout << "Patient registration number: " << patientInfo[2] << std::endl;

        std::cout << "Patient queue position: " << i + 1;

        std::cout << "Date of admission: " << patientInfo[3] << std::endl;
        if (!admissionData[4] == "") {
            std::cout << "Date of admission: " << patientInfo[4] << std::endl;
        } else {
            std::cout << "Patient has not yet been discharged." << std::endl;
        }
        std::cout << "Patient is in the atient is in  the " << patientInfo[5] << " ward." << std::endl;
        return;
    }
}

void printPatientInformation() {
    getRegistrationNumber();
    int regNo = registrationNumber;
    Patient* temp = null;
    if (patientRegister->searchPatient(int regNo) > 0) {
        temp = patientRegister[i];
        patientInfo = temp->getPatientInfo();
        std::cout << "Patient name: " << patientInfo[0] << std::endl;
        std::cout << "Patient date of birth: " << patientInfo[1] << std::endl;
        std::cout << "Patient registration number: " << patientInfo[2] << std::endl;
        std::cout << "Date of admission: " << patientInfo[3] << std::endl;
        if (!admissionData[4] == "") {
            std::cout << "Date of discharge: " << patientInfo[4] << std::endl;
        } else {
            std::cout << "Patient has not yet been discharged." << std::endl;
        }
        std::cout << "Patient is in the atient is in  the " << patientInfo[5] << " ward." << std::endl;
        return;
    }
    return;
}

// Display main menu
void displayMainMenu()
{
   std::cout << "Main Menu" << std::endl;
   std::cout << "1. Add a patient to the patient register" << std::endl;
   std::cout << "2. Add a patient to the waiting list" << std::endl;
   std::cout << "3. Show patient information" << std::endl;
   std::cout << "4. Show patient register" << std::endl;
   std::cout << "5. Show waiting list" << std::endl;
   std::cout << "6. Remove patient from patient register" << std::endl;
   std::cout << "7. Remove patient from waiting list" << std::endl;
   std::cout << "8. Quit" << std::endl;
}

// Get input using given prompt
std::string getInput(std::string prompt)
{
    std::string temp;
    std::cout << prompt << std::endl;
    std::getline(std::cin, temp);
    if (std::cin.fail()) {
        temp = "";
    }
    return temp;
}

void newPatient(registrationList){
    std::vector<> patientInfo;

    
    patientInfo[0] = getInput("Enter the patient name");
    int registrationNumber =  patientRegister->getLength() + 1;
    patientInfo[1] = std::to_string(registrationNumber);
    std::cout << name << "your registration number is " << registrationNumber << std::endl;
    patientInfo[2] = getInput("Enter the patient date of birth seperated by a - as shown in this format -> 10-01-2003");
    patientInfo[3] = getInput("Enter the current day");
    patientInfo[4] = getInput("Enter the date that the patient will be discharged");
    patientInfo[5] = getInput("Enter the patient's ward");
    Patient patient = new Patient(patientInfo);

    registrationList->addBack(patient);

}

// void addPatientToWaitingList(int RegistrationNumber, Patient* patient){
//     int registrationNumber = RegistrationNumber;
//     if (waitingList->searchPatient(registrationNumber)){
//         std::cout << name << "Patient is already in waiting list " << std::endl;
//     } else {
//         waitingList->addBack(patient);
//     }
// }


void showWaitingList(){
    waitinglist->getLength();
}

int getQueueLength(){
    int queueLength = waitingList->getLength();
    std::cout << "The waiting list queue is " 
    << queueLength << " patients long." << std::endl;
    return;
}

int getRegisterLength(){
    int registerLength = patientRegister->getLength();
    std::cout << "The Patient Register length is " 
    << registerLength << " patients long." << std::endl;
    return;
}

std::string removePatientFromRegister(){
    getRegistrationNumber();
    int patientNumber = patientNumber;
    if (searchPatientInRegister) {

    } else {
        std::cout << "Could not find patient in waiting list." << std::endl;
    }
    return;
}

std::string getRegistrationNumber() {
    int registrationNumber = 0;
    std::string registrationNo;
    bool validNumber = false;
    while (!validNumber){
        registrationNo = getInput("Enter the patient number between 1,000,000 and 9,999,999");
        registrationNumber = std::stoi(registrationNo);
        if (registrationNumber > 1000000 && registrationNumber < 10000000) {
            validNumber = true;
        }
    }
    return patientNumber;
}


void removePatientFromWaitingList(int patientNumber){
    int patientNumber = patientNumber;
    if (searchPatientInList) {
        
    } else {
        std::cout << "Could not find patient in waiting list." << std::endl;
    }
    return;
}

bool searchPatientInQueue(){
    getRegistrationNumber();
    if (searchPatient(int registrationNumber) > 0) {
        return true;
    } 
    return false;
}

bool searchPatientInList(int patientNumber, PatientRegister* patientRegister){
    int patientNumber = patientNumber;
    if (patientRegister->searchPatient(patientNumber)) {
        return true;
    } 
    return false;
}
