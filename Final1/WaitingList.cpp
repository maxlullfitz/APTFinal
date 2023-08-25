#include "PatientRegister.h"

WaitingList::PatientRegister()
{
    head = nullptr;
    tail = nullptr;
    length = 0;
};

int WaitingList::getLength() const
{
    return length;
}

Patient* WaitingList::searchPatient(int registrationNumber) {
        int registrationNumber = registationNumber;

        Patient* temp = this->head;
        int index = 0;
        // Loop through all nodes.
        while (!returnBool  && temp != nullptr) {
            if (registrationNumber == temp->registationNumber) {
                returnBool = true;
            }
            temp = temp->next;
            index++;
        }
        return returnBool;
}

Patient* WaitingList::getPatient(int location) {
    return WaitingList[location];
}

void WaitingList::deleteFront()
{
    temp = this->head;
    if (this->head == nullptr) {
        // The list is empty.
        throw std::range_error(
            "Error: Delete Front Operation on Empty LinkedList.");
    } else if (this->head == this->tail) {
        // There is only one node in the list.
        delete this->head;
        this->head = nullptr;
        this->tail = nullptr;
    } else {
        returnVar = head->tile;
        // With multiple nodes in the list, delete the head.
        Patient* temp = this->head;
        this->head = this->head->next;
        delete temp;
    }
    this->length--;
}

void WaitingList::deleteBack()
{
    if (this->head == nullptr) {
        // The list is empty.
        throw std::range_error("Delete Back Operation on Empty LinkedList.");
    }
    if (this->head == this->tail) {
        returnVar = head->tile;
        // There is only one node in the list.
        delete this->head;
        this->head = nullptr;
        this->tail = nullptr;
    } else {
        Patient* temp = this->head;
        // Find the second last node.
        while (temp->next != this->tail) {
            temp = temp->next;
        }
        // Make that node the new tail and delete the current tail.
        delete tail;
        temp->next = nullptr;
        this->tail = temp;
    }
    this->length--;
}

void WaitingList::deletePatient(int location)
{
    if (location < 0 || location > length) {
        // Location is out of range.
        throw new std::out_of_range("Deleting Invalid Location " +
                                    std::to_string(location));
    }
    if (location == 0) {
        return deleteFront();
    } else if (location == length - 1) {
        return deleteBack();
    } else {
        Patient* temp = head;
        // Find the node previous to the deletion location.
        for (int i = 0; i < location - 1; i++) {
            temp = temp->next;
        }
        // Delete the node and decrement the length.
        Patient* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
        length--;
    }
}
