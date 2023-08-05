#include <iostream>
using namespace std;

struct List
{
    int value;
    List *next;
};

void add()
{
    List *ptr;
    List *New;
    cout << "Enter : ";
    cin >> New->value;
    New->next = NULL;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = New;
}

void show(List *start)
{
    List *ptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        cout << ptr->value << " - ";
        ptr = ptr->next;
    }
}

List create(List *start)
{
    cout << "Enter : ";
    cin >> start->value;
    start.next = NULL;
}

int main()
{
    struct List Start;
    int start = create(Start);
    add();
    add();
    add();

    show(start);
    return (0);
}