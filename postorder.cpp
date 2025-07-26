#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;

        left=right = nullptr;

    }

};

Node* insert(Node* root, int val){

    if(root==nullptr){
        return new Node(val);
    }
    if(val<root->data){
        root->left= insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }

    return root;


}

void postorder(Node* root){

    if(root==nullptr) return;
    postorder(root->left);
    postorder(root->right);

    cout<<root->data<<" ";

}


int main(){

    int values[]={44,30,50,22,60,55,77,57};
    Node* root=nullptr;

    for(int val: values){

        root=insert(root,val);

    }

    postorder(root);
}
