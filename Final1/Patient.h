

class Patient
{
   public:
   Patient(std::string[] patientInfo, std::vector<AdmissionEntry> admissionHistory);
   getPatient(int registrationNumber);
   searchPatient(int registrationNumber);
   getPatientInfo(int registrationNumber);
  

   private:
   std::string admissionDate;
   std::string dischargeDate;
   std::string ward;
   std::string name;
   std::string dob;
   int registrationNumber;
   std::vector<AdmissionEntry> admissionHistory;
};