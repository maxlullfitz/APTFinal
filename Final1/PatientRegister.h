
class PatientRegister
{
public:
   PatientRegister();  // Constructor
   ~PatientRegister(); // Destructor

   int getLength();

   void addBack(Patient* patient);
   int searchRegister(int registrationNumber);
   void printPatientRegister(PatientRegister* patientRegister);
   Patient* getPatientByRegistrationNumber(int registrationNumber);

   std::vector<std::string> getPatientInfo(int registrationNumber);
   int getPatient(int location);

   
   void deleteFront();
   void deleteBack();

   
   void addAt(int i);
   void deletePatient(int i);

private:
   Patient* head;
};