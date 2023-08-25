#include "Patient.h"
#include <vector>
#include "PatientRegister.h"

class Patient {
   public:
      Patient(std::vector<std::string> admissionHistory);
      std::string getRegistrationumber();
      std::vector<std::string> getPatientInfo();
      Patient* Patient::getPatientByRegistrationNumber(int registrationNumber);
   
   private:
      std::string admissionDate;
      std::string dischargeDate;
      std::string ward;
      std::string name;
      std::string dob;
      std::string registrationNumber;
      std::vector<> admissionHistory;
};

std::string Patient::getPatientNumber() {
    if (admissionHistory.size() > 1) {
        return admissionHistory[1]; // Return patient number at location 1
    }
    return ""; // Return empty string if admissionHistory is empty
}

std::vector<std::string> Patient::getPatientInfo() {
    return admissionHistory; // Simply return the admissionHistory vector
}


