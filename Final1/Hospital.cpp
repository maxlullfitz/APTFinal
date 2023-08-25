#include "Patient.h"
#include "PatientRegister.h"
#include "WaitingList.h"
#include <fstream>
#include <iostream>
#include <string>
#include <time.h>
#include <vector>

// Get input using given prompt
std::string getInput(std::string prompt);

void displayMainMenu();

void newPatient(int registrationNumber);

void getPatientDetails(int registrationNumber);

void showWaitingList(Game* game);

void showPatientRegister(Game* game);

void showWaitingList(Game* game);;

int getQueueLength();

int getRegisterLength();

int main(void)
{
    WaitingList waitingList = new WaitingList;
    PatientRegister patientRegister = new Patientregister;
    // Generate new linkedlist
    LinkedList* list = new LinkedList();
    delete list;

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
            startNewGame();
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

void showWaitingList(Game* game);

void showPatientRegister(Game* game);

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
    std::string dob;
    int registrationNumber =  patientRegister->getLength() + 1000000;
    name = getPatientName();
    std::cout << name << "your registration number is " << registrationNumber << std::endl;
    dob = getInput("Enter the patient date of birth seperated by a - as shown in this format -> 10-01-2003");

    Patient patient = new Patient(std::string& name, const std::string& dob, int registrationNumber, std::vector<AdmissionEntry> admissionHistory);
}

void getPatientInformation(){

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
        if (registrationNumber > 100000 && registrationNumber < 10000000) {
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
    } else (
        return false;
    )
}

bool searchPatientInList(int patientNumber){
    if (waitingList->searchPatient()) {
        return true;
    } else (
        return false;
    )
}

std::vector<std::string> getAdmissionHistory(){
    std::vector<std::string> admissionData;
    admissionData[0] = getInput("Enter the date of admission");
    admissionData[1] = getInput("Enter the discharge date (leave blank if not applicable)");
    admissionData[2] = getInput("Enter the admission ward");
    return admissionData;
}