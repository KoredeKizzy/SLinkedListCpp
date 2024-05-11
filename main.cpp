
#include <iostream>

using namespace std;

// creating a class for nodes
class Node
{
public:
    int key;
    int data;
    Node* next;

    Node()
    {
        key=0;
        data=0;
        next=NULL;
    }

    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};
 // End of class node



 // begin singly linked list
 class singlyLinkedList
 {
 public:
     Node* head;

     //default constructor

     singlyLinkedList()
     {
         head=NULL;
     }
     singlyLinkedList(Node *n)
     {
         head=n;
     }
            // 1. check if node exist using key value
     Node* nodeExists(int k)
     {
         Node* temp = NULL;

         Node* ptr = head;
         while (ptr!=NULL)
         {
            if(ptr->key==k)
            {
               temp=ptr;
            }
            ptr= ptr -> next;
         }
         return temp;
     }

     // 2. Append a node to the list
     void appendNode(Node* n)
     {
         if(nodeExists(n->key)!=NULL)
         {
             cout << "Node already Exists with key value : "<<n->key<<" . Append another node with different key value"<< endl;
         }
     }
     else
     {
         if (head==NULL)
         {
             head = n;
             cout << "Node Appended"<< endl;
         }
         else
         {
             Node* ptr = head;
             while(ptr->next!=NULL)
             {
                 ptr = ptr->next;
             }
             ptr->next=n;
             cout << "Node Appended" << endl;
         }
     }


     // 3. Prepend Node - Attach a Node at the start
     void prepndNode(Node* n)
     {
         if(nodeExists(n->key)!=NULL)
         {
             cout << "Node already Exists with key value : "<<n->key<<", Append another node with different key value"<< endl;
         }
         else
         {
            n->next=head;
            head=n;
            cout << "Node Prepended" << endl;
         }

     }

     // 3. Insert a Node after a particular Node in the List
     void insertNodeAfter (int k, Node *n)
     {
       Node* ptr = nodeExists(k);
       if(ptr==NULL)
       {
         cout << "No Node Exist With Key Value: " << k << endl;
       }
       else
        {
            if(nodeExists(n->key)!=NULL)
         {
             cout << "Node already Exists with key value : "<<n->key<<", Append another node with different key value"<< endl;
         }
       else
       {
           n->next=ptr->next;
           ptr->next=n;
           cout << "Node Inserted" << endl;
       }

        }
     }


    // Delete Node By Unique Key
    void deleteNodeByKey(int k)
    {
        if(head==NULL)
        {
            cout << "Singly Linked List Already Empty.  Stop Messing with Me!!" << endl;
        }
        else if(head!==NULL)
        {
            if (head->key==k)
            {
                head = head-> next;
                cout << "Node UNLINKED With Key Values : " <<k<<endl;
            }
            else
                {

                }
        }
    }












 };

int main()
{

    return 0;
}









