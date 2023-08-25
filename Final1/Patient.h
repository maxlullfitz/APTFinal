#include <vector>
#include <string>

class Patient {
public:
    Patient(std::vector<std::string> admissionHistory);
    int searchPatient(int registrationNumber);
    std::vector<std::string> getPatientInfo(int i);
    std::string getRegistrationumber();

private:
    std::string name;
    std::string dob;
    std::string registrationNumber;  
    std::string admissionDate;
    std::string dischargeDate;
    std::string ward;
};