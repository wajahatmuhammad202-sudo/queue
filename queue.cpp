#include<iostream>
using namespace std;


class Node{
    public:
    
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class Queue{
    public:

    Node* head;
    Node* tail;
    

    Queue()
    {
        head=tail=NULL;
    }
    
    void push(int val){
        Node* newNode=new Node(val);
        if(empty()){
            head=tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
    }

    void pop(){
        Node* temp=head;
        head=head->next;
        delete temp;
    }

    bool empty(){
        return head==NULL;
    }

    int front(){
        if(empty()){
            cout<<"Queue is empty";
        }
        else{
            return head->data;
        }
        return head->data;
    }

};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.push(7);
    q.pop();
    q.push(8);



    while(!q.empty())
    {
        cout<<q.front()<<"--";
        q.pop();
    }
}