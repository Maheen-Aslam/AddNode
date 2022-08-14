
 #include<iostream>
#include <stdlib.h>
using namespace std;
class Node{
public:
//Node have one value or pointer
    int Value;
    Node* Next;
};
class LinkedList{
public:
//points the head of first element in  link list
 Node*head;
//last element of the link list
 Node*tail;
//Constructor
 LinkedList(){
     head=NULL;
     tail=NULL;
 }
void addList(int posi){
//assin a new memory of node
    Node *ptr=new Node;
//assin the function pass value to node value
    ptr->Value=posi;
//assign a poiter to null
    ptr->Next=NULL;
//if head is null 
    if(head==NULL){
//then assign head or tail to ptr
        head=ptr;
        tail=ptr;
//assign a ptr to null
        ptr=NULL;
    }
//tail points the next ptr 
    else{
        tail->Next=ptr;
//assign a tail to ptr
        tail=ptr;
        ptr=NULL;
        delete ptr;
    }
}
void printList(){
//1)make a current node pointer
//2)assign a newnode pointer to value head
//3)newnode not equal to tail
    for(Node* n=head;n!=tail;){
          cout<<n->Value<<endl;
          //assign a next pointer value to print
          n=n->Next;
    }
    //they print the last node value
    cout<<tail->Value<<endl;
}

};

int main(){
    LinkedList l;
    l.addList(4);
    l.addList(5);
    l.addList(6);
    l.printList();
}