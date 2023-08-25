

class WaitingList
{
public:
   LinkedList();
   ~LinkedList();
   
   int size();
   void clear();
   int getLength(int i);
   int getQueueposition(int registrationNumber);

   void addFront(Patient* n);
   void addBack(Patient* n);
   bool searchPatient(int registrationNumber);
   
   void deleteFront();
   void deleteBack();
   void deletePatient(int registrationNumber);

   void getNextPatient();
   
   void addAt(int i);
   void deleteAt(int registrationNumber);

private:
   Patient* head;
};