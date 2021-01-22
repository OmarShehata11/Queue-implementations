#include "../include/queue.h"
using namespace std;

#ifdef QUEUE_BASED_ARRAY

bool isempty()
{
 if(front == -1)
 return true;
 else
 return false;
}

void add_Queue() {
   int val;
   if (rear == n-1)
      cout<<"Queue Overflow"<<endl;
   else {
    
      front = 0;
      cout<<" insert value in the queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   		}
}


//Implementation of DeQueue 
void Queue_Delete() {
   if (front == - 1) {
      cout<<"Queue Underflow ";
   return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
//Implementation of display Queue 


void Display_Queue () {
   if ( isempty() )
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
         cout<<queue[i]<<" ";
      cout<<endl;
   }
}



//************************************************************************************//



#else 


//Function to check if queue is empty or not
bool isempty()
{
 if(front == NULL && rear == NULL)
 return true;
 else
 return false;
}

//function to enter elements in queue
void Queue_add ( int value )
{
 Node *ptr = new Node();
 ptr->data= value;
 ptr->link = NULL;

 //If inserting the first element/node
 if( front == NULL )
 {
  front = ptr;
  rear = ptr;
 }
 else
 {
  rear ->link = ptr;
  rear = ptr;
 }
}

//function to delete/remove element from queue
void Queue_Delete ()
{
 if( isempty() )
 cout<<"Queue is empty\n";
 else
 //only one element/node in queue.
 if( front == rear)
 {
  free(front);
  front = rear = NULL;
 }
 else
 {
  Node *ptr = front;
  front = front->link;
  free(ptr);
 }
}


//function to display queue
void Display_Queue()
{
 if (isempty())
  cout<<"Queue is empty\n";
 else
 {
  Node *ptr = front;
  while( ptr !=NULL)
  {
   cout<<ptr->data<<" ";
   ptr= ptr->link;
  }
 }
}

#endif