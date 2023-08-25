#include "Patient.h"
#include "PatientRegister.h"
#include "WaitingList.h"
#include <iostream>
#include <string>
#include <time.h>
#include <vector>

// Get input using given prompt
std::string getInput(std::string prompt);

void displayMainMenu();

void newPatient(int registrationNumber);

void getPatientDetails(int registrationNumber);

void printWaitingList(WaitingList* waitingList);

void printPatientRegister(PatientRegister* patientRegister);

int getQueueLength();

int getRegisterLength();

int main(void)
{
    // Generate new linkedlists
    WaitingList waitingList = new WaitingList*[10];
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
            newPatient();
        }


        else if (choice == "2") {
            std::cout << "Adding a patient to the waiting list..." << std::endl;
            loadGame();
        }

        else if (choice == "3") {
            std::cout << "Showing patient information..." << std::endl;
            showCredits();
        }


        else if (choice == "4") {
            std::cout << "Showing patient register..." << std::endl;
            programloop 
            = false;
        }
        else if (choice == "5") {
            std::cout << "Showing waiting list..." << std::endl;
            programloop = false;
        }

        else if (choice == "6") {
            std::cout << "Removing patient from register..." << std::endl;
            programloop = false;
        }

        else if (choice == "7") {
            std::cout << "Removing patient from waiting list..." << std::endl;
            programloop = false;
        }

        else if (choice == "8") {
            std::cout << "Quitting..." << std::endl;
            programloop = false;
        }

        // EOF Character
        else if (std::cin.fail()) {
            std::cout << "Exiting game, Goodbye!" << std::endl;
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

void printWaitingList(WaitingList* waitingList) {
    
    Patient* temp = null;
    std::cout << "\n"
    std::string[] patientInfo;
    std::vector<> admissionEntry;
    int queuePosition = 0;

    for (int i=0; i < waitingList->getLength(); i++) {
        temp = waitinglist[i];
        patientInfo = temp->getPatientInfo;
        std::cout << "Patient name: " << patientInfo[0] << std::endl;
        std::cout << "Patient date of birth: " << patientInfo[1] << std::endl;
        std::cout << "Patient registration number: " << patientInfo[2] << std::endl;

        std::cout << "Patient queue position: " << i + 1;

        admissionData = waitingList->getAdmissionHistory();

        std::cout << "Date of admission: " << admissionData[0];
        if (!admissionData[1] == "") {
            std::cout << "Discharge Date: " << admissionData[1];
        } else {
            std::cout << "Patient has not yet been discharged." << std::endl;
        }
        std::cout << "Patient is in  the " << admissionData[2]<< << " ward."std::endl;
        return;
    }
}

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

        admissionData = waitingList->getAdmissionHistory();

        std::cout << "Date of admission: " << admissionData[0];
        if (!admissionData[1] == "") {
            std::cout << "Discharge Date: " << admissionData[1];
        } else {
            std::cout << "Patient has not yet been discharged." << std::endl;
        }
        std::cout << "Patient is in  the " << admissionData[2]<< << " ward."std::endl;
        return;
    }
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

void newPatient(){
    std::string name;
    std::string dob;
    int registrationNumber =  PatientRegister->getLength() + 1000000;
    name = getPatientName();
    std::cout << name << "your registration number is " << registrationNumber << std::endl;
    dob = getInput("Enter the patient date of birth seperated by a - as shown in this format -> 10-01-2003");

    Patient patient = new Patient(std::string& name, const std::string& dob, int registrationNumber, std::vector<AdmissionEntry> admissionHistory);
}

void addPatientToWaitingList(int RegistrationNumber, Patient* patient){
    int registrationNumber = RegistrationNumber;
    if (waitingList->searchPatient(registrationNumber)){
        std::cout << name << "Patient is already in waiting list " << std::endl;
    } else {
        waitingList->addBack(patient);
    }
}


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

std::string removePatientFromRegister(int patientNumber){
    int patientNumber = patientNumber;
    if (searchPatientInRegister) {

    } else {
        std::cout << "Could not find patient in waiting list." << std::endl;
    }
    return;
}

int getRegistrationNumber() {
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

bool searchPatientInQueue(int patientNumber){
    if (patientRegister->searchPatient()) {
        return true;
    } else {return false; }
}

bool searchPatientInList(int patientNumber){
    int patientNumber = patientNumber;
    if (waitingList->searchPatient(patientNumber)) {
        return true;
    } else {return false;}
}

std::vector<std::string> getAdmissionHistory(){
    std::vector<std::string> admissionData;
    admissionData[0] = getInput("Enter the date of admission");
    admissionData[1] = getInput("Enter the discharge date (leave blank if not applicable)");
    admissionData[2] = getInput("Enter the admission ward");
    return admissionData;
}