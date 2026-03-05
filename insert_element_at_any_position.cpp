#include<iostream>
using namespace std;

class Node{
    public:
    Node* next;
    Node* prev;
    int data;

    //constructor

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = nullptr;
    }
};

void InsertAtHead(Node* head , int d){
    Node* temp = new Node(d);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void InsertAtTail(Node* tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void InsertAtPosition(Node* head, Node* tail , int Position, int d){
    Node* temp = head;
    if (Position == 1)
    {
        InsertAtHead(head, d);
    }
    if (temp->next == nullptr)
    {
        InsertAtTail(tail, d);
    }
    Node* temp = head;
    int count = 1;
    while (count<Position-1 && temp != NULL )
    {
        temp = temp->next;
    }
    Node* Insert = new Node(d);
    Insert->next = temp->next ;
    temp->next->prev = Insert;
    temp->next = Insert;
    Insert->prev = temp;


    
    
}


int main(){


    return 0;
}