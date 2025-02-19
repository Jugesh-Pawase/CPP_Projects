#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

        node(int val){
            data = val;
            next = NULL;
        }
};

void insertAtTail(node* &head, int val){
    node *n = new node(val);
    if(head == NULL){
        head = n;
    }
    else{
        node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;//imp
    }
}

void insertAtHead(node* &head, int val){
    node *n = new node(val);
    if(head==NULL){
        head = n;
    }
    else{
        n->next = head;
        head = n;
    }
}

void display(node* &head){
    node *temp = head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}

bool search(node* &head, int key){
    node *temp = head;
    while(temp!=NULL){
        if(temp->data==key)
            return true;
        temp = temp->next;
    }
    return false;
}

void deletion(node* &head, int key){
    node *temp = head;
    if(temp->data == key){
        temp = temp->next;
        head = temp;
        return;
    }
    while(temp->next != NULL){
        if(temp->next->data == key){
            temp->next = temp->next->next;
            break;
        }
        temp = temp->next;
    }
}

int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);

    deletion(head, 3);
    display(head);

    deletion(head, 1);
    display(head);

    // deleteAtHead(head);
    // display(head);

    return 0;
}