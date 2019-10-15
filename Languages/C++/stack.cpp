#include<iostream>
using namespace std;
int stack[100],n=100,top=-1;
void push(int val)
{
	if(top>=(n-1))
	cout<<"stack overflow"<<endl;
	else
	{
		top++;
		stack[top]=val;
	}
}
void pop()
{
	if(top<=-1)
	cout<<"stack underflow"<<endl;
	else
	{
		cout<<"the popped element is "<<stack[top]<<endl;
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		cout<<"stack elements are:"<<endl;
		for(int i=top;i>=0;i--)
		cout<<stack[i]<<" ";
		cout<<endl;
	}
	else
	cout<<"stack is empty"<<endl;
}
int main()
{
	int ch,val;
	cout<<"1) Push in stack"<<endl;
	cout<<"2) Pop from stack"<<endl;
	cout<<"3) Display stack"<<endl;
	cout<<"4) Exit"<<endl;
	do
	{
		cout<<"enter choice: "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				cout<<"enter value to be pushed:"<<endl;
				cin>>val;
				push(val);
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				cout<<"Exit"<<endl;
				break;
			}
			default:
			{
				cout<<"Invalid Choice"<<endl;
				break;
			}
				
		}
	}
	while(ch!=4);
	return 0;
}
