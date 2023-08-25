#include "Node.h"

class PatientRegister
{
public:
   LinkedList();
   ~LinkedList();

   int getLength(int i);

   void addBack(int data);
   bool searchPatient(int registrationNumber);
   
   void deleteFront();
   void deleteBack();

   
   void addAt(int i);
   void deleteAt(int i);

private:
   Node* head;
};