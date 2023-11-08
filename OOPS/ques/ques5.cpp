#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

// Linked List class
class LinkedList
{
private:
    Node *head;

public:
    // constructor to initialize head
    LinkedList()
    {
        head = nullptr;
    }

    // function to insert a new node at the beginning
    void insert(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // function to display the linked list
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;
    list.insert(5);
    list.insert(10);
    list.insert(15);
    list.display();

    return 0;
}
