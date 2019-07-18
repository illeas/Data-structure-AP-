#include<iostream>
#include<cstdlib>
using namespace std;

class Node {
  private:
    int data;
    Node* next;

  public:
    Node(){
        data = 0;
        next = NULL;
    }

    Node(int d){
        data = d;
        next = NULL;
    }

    Node(int d, Node* n){
        data = d;
        next = n;
    }

    void setData(int x){
        data = x;
    }

    int getData(){
        return data;
    }

    void setNext(Node* x){
        next = x;
    }

    Node* getNext(){
        return next;
    }

};


class LinkedList {
   private:
       Node* head;

   public:
        LinkedList(){
         head = NULL;
        }
        bool isEmpty(){

        }

        void insertAtFront(int data){
            Node* n = new Node(data, head);
            head = n;
        }

        void insertAtBack(int data){
            Node* n = new Node(data);
            if(head == NULL){
                head = n;
            }else{
                Node* i;
                for(i = head; i->getNext() != NULL; i=i->getNext()){

                }
                i->setNext(n);
            }
       }

        void print(){
            for(Node* i = head; i != NULL; i = i->getNext()){
                cout  << i->getData() << " ";
            }
            cout << endl;
       }
};

int main(){
    LinkedList list;
    // insert at BACK
    list.insertAtBack(10);
    list.insertAtBack(15);
    list.print();

    //insert at FRONT
    list.insertAtFront(2);
    list.print();
    return 0;
}
