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

void deleteNode(Node* &head, int data){
    Node* temp = head;
    if(head==nullptr || head->data == data){
        if(!head) return;
        head = head->next;
        delete temp;
    }

    while(temp->next != nullptr){
        if(temp->next->data == data){
            Node* todel = temp->next;
            temp->next = todel->next;
            delete todel;
            return;
        }
        temp = temp->next;
    }
    cout << "Data not found.";
}

void display(Node* head){
    while(head != nullptr){
        cout << head->data;
        if(head->next != nullptr) cout << "->";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Node* head = nullptr;
    insertAtEnd(head);
    display(head);

    int todel;
    cin >> todel;

    deleteNode(head, todel);
    display(head);
}