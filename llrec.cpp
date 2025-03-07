 #include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot)
{
    if (head == nullptr){
        smaller = nullptr;
        larger = nullptr;
        return;
    }

    //save for next node
    Node* headNext = head -> next;

    if (head -> val > pivot){
        larger = head;
        llpivot(headNext, smaller, larger->next, pivot);
    }
    else {
        smaller = head;
        llpivot(headNext, smaller->next, larger, pivot);
    }

    head = nullptr;
}