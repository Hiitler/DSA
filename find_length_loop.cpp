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

int GetLoopLength(Node* head){
    Node* slow = head;
    Node* fast = head;
    int len = 0;

    while (fast != NULL && fast->next != NULL)
    {
       fast = fast->next->next;
       slow = slow->next;
    

       if (slow == fast)
       {
        len = 1;
         Node* temp = slow;
       
       
    while (temp != slow)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
    
}
 return 0;
}


int main(){


    return 0;
}