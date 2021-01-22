#ifdef QUEUE_BASED_ARRAY

int queue[50];
int n = 50;
int front = - 1;
int rear = - 1;


//Implementation of EnQueue 
bool isempty();
void add_Queue();
void Queue_Delete();
void Display_Queue () ;


//*********************************************//


#else 

struct Node
{
int data;

Node *link;
};

Node *front = NULL;
Node *rear = NULL;

bool isempty();
void Queue_add(int value);
void Queue_Delete();
void Display_Queue () ;




#endif

