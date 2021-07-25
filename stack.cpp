#include <iostream>
using namespace std;
int top = -1, size;
void push(char _stack[])
{
    char element;
    if (size == top + 1)
        cout << "Stackoverflow" << endl;
    else
    {
        cout << "Enter new element" << endl;
        cin >> element;
        top++;
        _stack[top] = element;
    }
}
void pop()
{
    if (top == -1)
        cout << "Stack is empty" << endl;
    else
    {
        top--;
    }
}
void _print(char _stack[])
{
    if (top = -1)
        cout << "Empty stack" << endl;
    else
    {
        for (int i = 0; i <= top; i++)
            cout << _stack[i] << " ";
        cout << endl;
    }
}
int main()
{
    int option = 1;
    cout << "Enter size of stack" << endl;
    cin >> size;
    char _stack[size];
    cout << "Choose operation: " << endl;
    cout << "0. To exit" << endl;
    cout << "1. To add element in stack" << endl;
    cout << "2. To delete element form the stack" << endl;
    cout << "3. To know current size of stack" << endl;
    cout << "4. To check space availabel" << endl;
    cout << "5. To print stack" << endl;

    while (option)
    {
        cout << "Choose operation: " << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            push(_stack);
            break;
        case 2:
            pop();
            break;
        case 3:
            cout << top + 1 << endl;
            break;
        case 4:
            cout << size - (top + 1) << endl;
            break;
        case 5:
            _print(_stack);
            break;
        default:
            cout << "Inappropriate choice" << endl;
            break;
        }
    }
}
