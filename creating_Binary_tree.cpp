#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data ;
node* left;
node* right;

node( int d){
this-> data = d;
this->left = NULL;
this->right = NULL;
}
};

node* buildtrees(){
cout<<"Enter the data :"<<endl;
  int data;
  cin>>data;
  root = new node(data);
  if(data==-1){
return NULL:
  }
cout<<"enter the data to be inserted in left node"<<endl;
root->left = buildtrees(root->left);
cout<<"enter the data for right node";
root->right = buildtrees(root->right);
return root;
  
}


int main(){
node* root = NULL;
root = buildtrees(root);

return 0 ;
}
  
