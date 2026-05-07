#include<iostream>
#define MAX 5
using namespace std;
class Queue{
	private:
		
		int arr[MAX];
		int front;
		int rear;
		
	public:
		
		Queue(){
			
			front=-1;
			rear=-1;
		
		}
	
	    bool isEmpty(){
	    	
	    	return (front == -1 || front > rear);
	    	
		}
		
		bool isFull(){
			
			return(rear == MAX -1);
			
		}
		
		void enqueue(int x){
			
			if (isFull()){
				cout<< " Queue Overflow! cannot insert"<< x << endl;
			return;	
			
			}
					
			if(front == -1) front=0 ;
			arr[++rear]=x;
			cout<< x << " inserted into the queue."<< endl;
			
		}
		
		void dequeue(){
			if(isEmpty()){
				cout<<" underflow";
				return;
			}
			cout<< arr[front]<<" dequeue";
			front++;
		}
		
		void display(){
			
			if(isEmpty()){
				cout<< " Queue is Empty!"<< endl;
				return;
			}
			cout<<" Queue Elements: ";
			for(int i= front; i<= rear ; i++)
		 	    cout<< arr[i]<< " ";
		 	cout<<endl;    
		}
};

int main(){
	
	Queue q;
	cout<< " Queue created successfully!"<<endl;
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(7);
	q.enqueue(9);
	q.enqueue(6);
	q.display();
	q.isFull();
	q.isEmpty();
	q.dequeue();
	q.display();
	q.dequeue();
	q.display();
	q.dequeue();
	q.display();
	q.dequeue();
	q.display();
	q.dequeue();
	q.display();
	q.dequeue();
	q.display();
	q.isEmpty();
	return 0;
	
}