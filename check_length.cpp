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

int findLength(Node* head){
    Node* temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
    
}

int main(){

    return 0;
}