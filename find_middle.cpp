#include<iostream>
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

Node* FindMiddle(Node* head){
    Node* middle = NULL;
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        if (fast != NULL)
        {
            slow = slow->next;
        }
        
    }
    middle = slow;
     return middle;
    
}

int main(){


    return 0;
}