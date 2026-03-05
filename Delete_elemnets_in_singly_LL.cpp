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

void InsetAtHead(Node* head){
    Node* temp = head;
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* tail , int d){
    Node* temp = tail;
    tail->next = temp;
    temp = tail;
}

void DeleteNode(Node* head, int position){
    if (head == NULL)
    {
        return ;
    }
    
    Node* temp = head;
    if (position)
    {
        head->next =temp;
        head->next = NULL;
        delete head;;
        head = temp;
    }
    int count = 0;
    Node* curr = head;
    Node* prev = NULL;

    while (count <position && curr != NULL)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }

    if (curr != NULL)
    {
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    }     
}

int main(){



    return 0;
}