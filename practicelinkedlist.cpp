#include<iostream>
using namespace std;

class Node{
    public: int data;
            Node *next;

    //constructor 

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//Insert at Head 

    void insertathead(Node*&head , int data){
        Node *temp=new Node(data);
        temp->next=head;
        head=temp;
    } 

//Insert at Tail

    void insertattail(Node *&tail, int data){
        Node *temp= new Node(data);
        tail->next=temp;
        tail=temp; // tail=tail->next;
    }

//Insert at position

    void insertatposition(Node *&head, Node *&tail, int position, int data){
        
        //Inserting at first positon 

        if(position==1){
            insertathead(head,data);
            return;
        }

        Node *temp=head;
        int cnt=1;
        while(cnt<position-1){
            temp=temp->next;
            cnt++;
        }

        //inserting at last positon
        if(temp->next==NULL){
            insertattail(tail,data);
            return;
        }

        //creating a node for data
    
    Node* nodetoinsert=new Node(data);

    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

    }

//Traversing whole linked list for printing 

    void print(Node *&head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout << endl;
    } 

int main()
{
    //Created a new node

    Node *node1= new Node(10);

    //head pointed to node1

    Node * head=node1;
    Node * tail=node1;

    print(head);

    insertathead(head,12);
    print(head);

    insertathead(head,14);
    print(head);

    insertattail(tail,20);
    print(head);

    insertattail(tail,25);
    print(head);

    insertatposition(head,tail,3,30);
    print(head);
    
    cout<<"head "<< head->data << endl;
    cout<<"tail "<< tail->data << endl;

    insertatposition(head,tail,1,40);
    print(head);

    cout<<"head "<< head->data << endl;
    cout<<"tail "<< tail->data << endl;

    insertatposition(head,tail,8,50);
    print(head);

    cout<<"head "<< head->data << endl;
    cout<<"tail "<< tail->data << endl;

    return 0;
}