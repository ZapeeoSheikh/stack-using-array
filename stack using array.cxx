#include<iostream>
using namespace std;
#define SIZE 3

void push(int);
void pop();
void display();
void peak();
void IsEmpty();
void IsFull();

int stack[SIZE], top = -1;

void main()
{
   int value, choice;
   
      cout << "\n\n***** MENU *****\n";
      cout << "1. Push\n2. Pop\n3. Display\n4. Peak the Stack \n5. Check Weather Stack is Empty or Not \n6. Check Weather Stack is full or not \n7. Exit";
      while(true){
      cout << "\n\nEnter your choice: ";
      cin >> choice;
      switch(choice){
	 case 1: cout <<"Enter the value to be insert: " ;
		 cin >> value;
		 push(value);
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 case 4: peak();
	 	break;
	 case 5: IsEmpty();
		 break;
	 case 6: IsFull();
	 	break;
	 case 7: break;
	 default: cout<<"\nWrong selection!!! Try again!!!";
	 	break;
      }
   }
}
void push(int value){
   if(top == SIZE-1)
      cout<<"\nStack is Full!!! Insertion is not possible!!!";
   else{
      top++;
      stack[top] = value;
      cout<<"\nInsertion success!!!";
   }
}
void pop(){
   if(top == -1)
      cout<<"\nStack is Empty!!! Deletion is not possible!!!";
   else{
      cout<<"\nDeleted : " << stack[top];
      top--;
   }
}
void display(){
   if(top == -1)
      cout<<"\nStack is Empty!!!";
   else{
      int i;
      cout<<"\nStack elements are:\n";
      for(i=top; i>=0; i--){
	    cout<<stack[i] <<"\n";
      }
   }
}
void peak(){
	if (top == -1){
		cout<<"\nNull Stack !!!";
	}
	else {
		cout << stack[top] << " is on the top of stack ";
	}
}
void IsEmpty(){
	if (top == -1){
		cout<<"\nYes, Stack is Empty ";
	}
	else{
		cout<<"\nNo, Stack is not Empty ";
	}
}
void IsFull(){
	if (top == SIZE - 1){
		cout << "\nStack is Full ";
	}
	else{
		cout<<"\nNo, Stack is not Filled ";
	}
}