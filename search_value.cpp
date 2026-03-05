#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

int FindValue(Node* head, int value){
    Node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            return temp->data;
        }
        temp = temp->next;
        
    }
    return -1;
}

int main(){


    return 0;
}