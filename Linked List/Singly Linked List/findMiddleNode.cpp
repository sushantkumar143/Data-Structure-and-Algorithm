// TWO POINTER METHOD

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

int findMiddleElement(Node* head){
    if(head == nullptr) return head->data;
    Node* slow = head;
    Node* fast = head;

    while (fast->next != nullptr && fast->next->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;    
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
    cout << "Enter the elements: ";
    insertAtEnd(head);
    display(head);

    cout << "Middle value = " << findMiddleElement(head);
}