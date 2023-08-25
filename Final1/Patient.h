#include "Node.h"

class Patient
{
   public:
   Patient(std::string& name, const std::string& dob, int registrationNumber, std::vector<AdmissionEntry> admissionHistory);
   showPatientInformation(int registrationNumber);
  

   private:
   std::string admissionDate;
   std::string dischargeDate;
   std::string ward;
   std::string name;
   std::string dob;
   int registrationNumber;
   std::vector<AdmissionEntry> admissionHistory;
};