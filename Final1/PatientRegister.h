
class PatientRegister
{
public:
   LinkedList();
   ~LinkedList();

   int getLength();

   void addBack(Patient* patient);
   int searchRegister(int registrationNumber);

   std::vector<std::string> getPatientInfo(int registrationNumber);
   int getPatient(int location);

   
   void deleteFront();
   void deleteBack();

   
   void addAt(int i);
   void deletePatient(int i);

private:
   Patient* head;
};