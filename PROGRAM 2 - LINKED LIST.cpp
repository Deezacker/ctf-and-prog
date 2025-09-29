// Program to insert a new node in the Linked List at specific position

#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;
};

int main() 
{
    Node* head = NULL;

    // Insert 10 at index 0
    Node* newNode = new Node();
    newNode->data = 10;
    newNode->next = head;
    head = newNode;

    // Insert 20 at index 1
    newNode = new Node();
    newNode->data = 20;
    newNode->next = NULL;
    head->next = newNode;

    // Insert 15 at index 1
    newNode = new Node();
    newNode->data = 15;
    newNode->next = head->next;
    head->next = newNode;

    // Print the list
    Node* temp = head;
    while (temp != NULL) 
    {
        cout << temp->data << " \n";
        temp = temp->next;
    }

    return 0;
}
