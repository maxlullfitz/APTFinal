

class Patient
{
   public:
   Patient(std::vector<AdmissionEntry> patientInfo);

   Patient* getPatient(int registrationNumber);

   int searchPatient(int registrationNumber);

   std::vector<std::string> getPatientInfo(int registrationNumber);

   private:
   std::string name;
   std::string dob;
   std::string registrationNumber;
   std::string admissionDate;
   std::string dischargeDate;
   std::string ward;

};