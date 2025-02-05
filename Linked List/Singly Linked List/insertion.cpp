#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};



void insertAtHead_Value(Node* &head, int val){
    Node* data = new Node(val);
    
    data->next = head;
    head = data;
}

void insertAtHead(Node* &head){
    while(1){
        int val;
        cin >> val;
        if(val == -1) break;
        insertAtHead_Value(head, val);
    }
}



void insertAtEnd_Value(Node* &head, int val){
    Node* data = new Node(val);
    
    if(head == nullptr){
        head = data;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = data;
}

void insertAtEnd(Node* &head){
    while(1){
        int val;
        cin >> val;
        if(val == -1) break;
        insertAtEnd_Value(head, val);
    }
}



void insertInBetween_Values(Node* &head, int val, int index){
    Node* data = new Node(val);

    if(index == 0){
        data->next = head;
        head = data;
        return;
    }

    Node* temp = head;
    int count = 1;
    while(temp->next != nullptr && count<index){
        temp =temp->next;
        count++;
    }

    if(count != index){
        cout << "Invalid index" << endl;
        return;
    }
    data->next = temp->next;
    temp->next = data;
}

void display(Node* head){
    while(head != nullptr){
        cout << head->data;
        if(head->next != nullptr) cout << "->";
        head = head->next;
    }
    cout << endl;
}

void insertInBetween(Node* &head){

    cout << "Enter the elements: ";
    while(1){
        int val;
        cin >> val;
        if(val == -1) break;
        insertAtEnd_Value(head, val);
    }

    display(head);

    int indx, data;
    cout << "Enter the index and data: ";
    cin >> indx >> data;

    insertInBetween_Values(head, data, indx);
}




int main(){
    Node* head = nullptr;
    
    cout << "Enter your choice: ";
    int ch;
    cin >> ch;

    switch(ch){
        case 1:
            insertAtHead(head);
            display(head);
            break;
        case 2:
            insertInBetween(head);
            display(head);
            break;
        case 3:
            insertAtEnd(head);
            display(head);
            break;
        case 4:
            display(head);
            break;
    }
}