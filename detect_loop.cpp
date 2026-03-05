#include<iostream>
using namespace std;

class Node{
    public:
    Node* next;
    int data;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

bool DetectLoop(Node* head){
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        if (fast != NULL)
        {
            slow = slow->next;
        }
        
        if (fast == slow)
        {
            return true;
        }
        
    }
    return false;
}

int main(){


    return 0;
}