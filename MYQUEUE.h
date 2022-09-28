#include<bits/stdc++.h>
using namespace std;
    template<typename N> class Node{
    public:
        N value;
        Node * Next;

        Node(N val){
            value = val;
            Next = NULL;
        }


    };

    template<typename Q> class Queue{
        Node<Q>* front;
        Node<Q>* rear;

    public:
        Queue(){
            front = NULL;
            rear = NULL;
        }

        //Enqueue --> push
        void push(Q val){
            Node <Q>* newNode = new Node<Q>(val);

            if(front == NULL){
                front = newNode;
                rear = newNode;
                return;
            }
            rear->Next = newNode;
            rear = rear->Next;

        }


        //Dequeue --> pop

        Q pop(){

            Q chk;
            if(rear == NULL){
                cout<<"Queue Underflow"<<endl;
                return chk;
            }
            Node<Q>* delNode;
            chk;
            delNode = front;
            front = front->Next;
            if(front == NULL){
                rear = NULL;
            }
            chk = delNode->value;
            delete delNode;
            return chk;
        }


        //Peek --> font and back
    Q fronT()
    {
        Q chk = front->value;
        return chk;
    }

    Q back()
    {
        Q chk = rear->value;
        return chk;
    }


        //Empty
        bool empty(){
            if(rear == NULL && front == NULL){
                return true;
            }
            else{
                return false;
            }
        }

    };


