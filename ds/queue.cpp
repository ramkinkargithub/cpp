#include <iostream>
using namespace std;
int front, _end, size;
void Enqueue(char queue[])
{
    char element;
    if (_end == size - 1)
        cout << "Overflow" << endl;
    else
    {
        cout << "Enter new element" << endl;
        cin >> element;
        _end++;
        queue[_end] = element;
    }
}
void Dequeue()
{
    if (front == _end)
        cout << "Queue is empty" << endl;
    else
        front++;
}
void _print(char queue[])
{
    if (front == _end)
        cout << "Empty Queue" << endl;
    else
    {
        for (int i = front; i <= _end; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}
int main()
{
    int option = 1;
    cout << "Enter size of queue" << endl;
    cin >> size;
    front = _end = -1;
    char queue[size];
    cout << "Choose operation: " << endl;
    cout << "0. To exit" << endl;
    cout << "1. To add element at End of Queue" << endl;
    cout << "2. To delete element from the Front" << endl;
    cout << "3. To know current size of Queue" << endl;
    cout << "4. To check space availabel" << endl;
    cout << "5. To print Queue" << endl;

    while (option)
    {
        cout << "Choose operation: " << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            Enqueue(queue);
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            cout << _end + 1 << endl;
            break;
        case 4:
            cout << size - (_end + 1) << endl;
            break;
        case 5:
            _print(queue);
            break;
        default:
            cout << "Inappropriate choice" << endl;
            break;
        }
    }
}
