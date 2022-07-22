#ifndef STACK_H
#define STACK_H
#include <cstdlib>

using namespace std;

template<class StackType>
class Stack {

public:
	Stack(int MaxStackSize = 10);
	~Stack() { delete[] stack; }
		bool isEmpty();
		bool isFull();
	StackType Top()const;
	void push(StackType x);
	StackType pop();
	bool Search(StackType x);

private:
	int top = -1; //top of StackType
	int MaxTop = 10; //Max value for top
	StackType *stack; //element array

};
template<class StackType>
Stack<StackType>::Stack(int MaxStackSize)
{
	MaxTop = 10;
	stack = new StackType[MaxStackSize];
}

template<class StackType>
StackType Stack<StackType>::Top()const
{
	//Pre:stack is not isEmpty
	//Post:Returns top element
	if (isEmpty())
		cout << "Error Displayed" << endl;//Top fails
	return stack[top];

}
template<class StackType>
void Stack<StackType>::push(StackType x)
{
	//Pre:Stack is not isFull
	//Post:Push x to stack
	//Stack has one more element
	if (isFull())
		cout << "Push Fails" << endl; //push fails
	stack[++top] = x;
}

template<class StackType>
StackType Stack<StackType>::pop()
{
	//Pre:Stack is not empty
	//Post:Stack has one less element
	if (isEmpty()) {
		cout << "Pop Fails" << endl;
		exit(1);
	}//pop fails
	else {
		StackType temp = stack[top];
		top--;
		return temp;
	}

}
template<class StackType>
bool Stack<StackType>::Search(StackType x)
{
	for (int i = 0; i<top; i++)
	{
		if (*(stack + i) == x)
			return true;
	}
	return false;
}

#endif


