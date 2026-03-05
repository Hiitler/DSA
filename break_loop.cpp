#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void RemoveLoop(Node* head){
    Node* slow = head;
    Node* fast = head;
    bool LoopDetected = false;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next->next;
        if (fast == slow)
        {
            LoopDetected = true;
        }
    }
    if (LoopDetected)
    {
        slow = head;
        while (fast->next != slow)
        {
            fast = fast->next;
        }

            
        }
        else{
            while (fast->next != slow->next)
            {
                slow = slow->next;
                fast = fast->next;
            }
            
        }
        fast->next = NULL;
    }
    
    

  
    
    
}

int main(){


    return 0;
}