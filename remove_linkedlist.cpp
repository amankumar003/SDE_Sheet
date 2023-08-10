Node * removeDuplicates(Node *head)
{
    // Write your code here
    Node* curr = head;
    while(curr!=NULL){
        if((curr->next!=NULL)&&curr->data ==curr->next->data){
            Node*next_next = curr->next->next;
            delete(curr->next);
            curr->next = curr->next->next;

        }
        else{
            curr = curr->next;
        }
    }
    return head;
}
