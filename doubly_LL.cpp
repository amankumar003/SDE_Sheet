#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* curr;
    node* next;

    
    //constructor
    node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print(node* & head){
    node*temp = head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
//gives lenght of linked list 
void getlength(node* & head){
    int len=0;
    node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    cout<<len<<endl;
}

void insertattail(node* &tail, node* &head, int data){
    if(tail==NULL){
        node*temp = new node(data);
        tail = temp;
        head = temp;
    }
    else{
        node* temp = new node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    

}

void insertathead(node* &head, int data){
    //empty list 
    if(head==NULL){
        node*temp = new node(data);
        head = temp;
    }
    else{
        node* temp = new node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    

}

void insertatposition(node* &tail, node* & head, int data, int position){
    //insertion at start
    if(position ==1){
        insertathead(head, data);
        return;
    }

    node* temp = head;
    int cnt = 1;
    while(cnt<position){
        temp =temp -> next ;
        ++cnt;
    }

    //inserrt at tail
    if(temp->next == NULL){
        insertattail(tail, data);
        return;
    }
    //creating a node for the upcoming data;
    node *nodetoinsert = new node(data);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;

}

int main(){

node* node1 = new node(10);
node* head= node1;
node* tail = node1;
print(head);

cout<< getlength(head)<<endl;

insertathead(head,25);
print( head);   
insertattail(tail, 4);
insertatposition(tail, head, 45, 3);
print(head);
return 0;

}