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

Node* getMiddle(Node* head){
    Node* fast = head;
    Node* slow = head;

    while (fast != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}

Node* reverseList(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* farword = NULL;

    while (curr != NULL)
    {
        prev = curr;
        curr->next = prev;
        farword = curr->next;
        curr = farword;
    }

    return prev;
    

}

bool checkPalindrome(Node* head){
    Node* temp = head;
    Node* middle = getMiddle(head);

    Node* temp = reverseList(middle->next);
    Node* head1 = head;
    Node* head2 = temp;

    while (head2 != NULL)
    {
    if (head1->data != head2->data)
    {
        return false;
    }
    
    head1 = head1->next;
    head2 = head2->next;;
    }
    return true;
    
}

int main(){


    return 0;
}