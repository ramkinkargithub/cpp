#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
void PrintSLL();
struct SLLNode
{
    int data;
    SLLNode *next;
};
typedef SLLNode *node_ptr;
node_ptr head = NULL, last = NULL, temp;

void CreateNode()
{
    cout << "Enter value for new node   ";
    temp = new (struct SLLNode);
    temp->next = NULL;
    cin >> temp->data;
    if (head == NULL)
    {
        head = temp;
        last = temp;
    }
    else
    {
        last->next = temp;
        last = temp;
    }
}
void DeleteNode()
{
    int index;
    cout << "Enter node number/position     " << endl;
    cin >> index;
    if (head == NULL)
        cout << "Can't Delete an empty SLL     " << endl;
    else
    {
        int flag = 0;
        temp = head->next;
        node_ptr temp2 = head;
        while (index > 0)
        {
            if (temp2 == NULL)
            {
                cout << "Position > SLL length  " << endl;
                flag = 1;
                break;
            }
            else
            {
                temp2 = temp;
                temp = temp->next;
                index--;
            }
        }
        if (flag == 0)
        {
            temp2->next = temp->next;
            cout << "Deleted , now SLL is : ";
            PrintSLL();
        }
    }
}
void PrintSize()
{
    int count = 0;
    temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    cout << count << endl;
}
void PrintSLL()
{
    if (head == NULL)
        cout << "SLL is empty   " << endl;
    else
    {
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
int main()
{
    int option = 1;
    cout << "Choose operation: " << endl;
    cout << "0. To exit " << endl;
    cout << "1. To add a new node" << endl;
    cout << "2. To delete a node" << endl;
    cout << "3. To know length of SLL" << endl;
    cout << "4. To print SLL" << endl;
    while (option)
    {
        cout << "Choose operation:  ";
        cin >> option;
        switch (option)
        {
        case 1:
            CreateNode();
            break;
        case 2:
            DeleteNode();
            break;
        case 3:
            PrintSize();
            break;
        case 4:
            PrintSLL();
            break;
        default:
            cout << "Inappropriate choice   " << endl;
            break;
        }
    }
}