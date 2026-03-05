#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void InsertAtHead(Node* head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}


int main(){
int data;
cout<<"Enter the value you want to insert: "<<endl;
cin>>data;
Node* node1 = new Node(data); 
    return 0;
}
