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
    else {

        Node* headNext = head -> next;
        if (head -> value > pivot){
            larger -> next = larger;
            larger = head;
        }
        else{
            head -> next = smaller;
            smaller = head;
        }
    }

    llpivot(headNext, smaller, larger, pivot);
}