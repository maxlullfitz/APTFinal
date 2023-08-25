

class PatientRegister
{
public:
   LinkedList();
   ~LinkedList();

   int getLength(int i);

   void addBack(Patient* patient);
   bool searchPatient(int registrationNumber);
   
   void deleteFront();
   void deleteBack();

   
   void addAt(int i);
   void deleteAt(int i);

private:
   Patient* head;
};