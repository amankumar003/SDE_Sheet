#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

//constructor to create the data
    node(int data){
        this ->next=NULL;
        this->data = data;
    }
//destructor
    ~node(){
        int value = this->data;
        //freeing memory
        if(this->next!= NULL){
            delete next;
            this->next = NULL;
        }
    }
};
void deletenode(int pos, node* &head){
    if(pos==1){
        node* temp = head;
        head = head ->next;
        //free meemory
        temp->next =NULL;
        delete temp;
    }
    else{
        //deleting for the middle and last node
        node* curr = head;
        node* prev = NULL;
        int cnt =1;
        if( cnt <= pos){
            prev = curr;
            curr = curr->next;
            cnt++; 
        }
        curr->next= NULL;
        prev->next = curr->next;
    }
}
void insertatHead(node* &head, int d){
    //create new data for the coming data d
    node* temp = new node(d);
    temp ->next = head;
    head =temp ;

}
void insertatTail(node* &tail, int d){
    node*temp = new node(d);
    tail->next = temp ;
    tail = temp ;
}

void insertatpos(node* &tail, node* &head, int position, int d){
    if(position ==1) {
        insertatHead(head,d);
        return ;
    } 
    node* temp = head;
    int cnt =1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    //insert at last position
    if(temp ->next == NULL){
        insertatTail(tail,d);
        return;
        }
    // creating a node for d
    node* nodetoinsert = new node(d);
    nodetoinsert -> next = temp->next;
    temp->next=nodetoinsert;
}



void print(node* &head){
    node* temp = head;
    while (temp != NULL){
        cout << "->" << temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";

    }
       


int main(){
    node* node1 = new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;


    //head pointed to node1
    node* head = node1;
    node* tail = head;
    print( head);
    insertatHead(head, 12);
    print( head);
    insertatTail(tail, 15);
    print( head);
    insertatpos(tail,head,3,789) ;
    print(head);

    return 0;

}