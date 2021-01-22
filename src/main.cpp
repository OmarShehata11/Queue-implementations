#include <iostream>
#include "./queue.cpp"
using namespace std;

#define QUEUE_BASED_ARRAY 

int main() {
   int ch;
   cout<<"1) adding element to the queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Quit"<<endl;
 
 while( ch!=4 )
   {
   cout<<"Enter your choice : "<<endl;
   cin>>ch;
   switch (ch) {
      case 1: add_Queue();
         break;
      case 2: Queue_Delete();
         break;
      case 3: Display_Queue ();
         break;
      case 4: cout<<"Exit"<<endl;
         break;
      default: cout<<"Invalid choice"<<endl;
               }
   }


   return 0;
}


