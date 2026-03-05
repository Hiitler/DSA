#include<iostream>
using namespace std;

class Node{
    public:
    Node* next;
    int data;

    // constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

Node* ReverseList(Node* head){
    if (head == NULL)
    {
        return head;
    }
    Node* curr = head;
    Node* prev = NULL;
    Node* farword = NULL;

    while (curr != NULL)
    {
         farword = curr->next;
        curr->next = prev;
        curr = prev;
        curr = farword;
    }
    return prev;
    
}

int main(){


    return 0;
}