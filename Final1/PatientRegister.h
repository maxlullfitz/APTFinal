

class PatientRegister
{
public:
   LinkedList();
   ~LinkedList();

   int getLength(int i);

   void addBack(Patient* patient);
   int searchPatient(int registrationNumber);

   std::vector<std::string> getPatientInfo(int registrationNumber);
   
   void deleteFront();
   void deleteBack();

   
   void addAt(int i);
   void deleteAt(int i);

private:
   Patient* head;
};