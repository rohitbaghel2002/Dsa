#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int info;
    Node *next;

    Node(int item)
    {
        info = item;
        next = nullptr;
    }
};
class Linklist
{
private:
    Node *start, *end;

public:
    Linklist()
    {
        start = nullptr;
        end = nullptr;
    }

    void add_first(int item)
    {
        Node *newptr = new Node(item);
        if (start == nullptr)
        {
            start = end = newptr;
        }
        else
        {
            newptr->next = start;
            start = newptr;
        }
    }

    void last_add(int item)
    {
        Node *newptr = new Node(item);
        if (start == nullptr)
        {
            start = end = newptr;
        }
        else
        {
            end->next = newptr;
            end = newptr;
        }
    }

    void output()
    {
        if (start == nullptr)
        {
            cout << "List is empty\n";
            return;
        }
        Node *ptr = start;
        while (ptr != nullptr)
        {
            cout << ptr->info << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }

    void add_before(int item, int loc)
    {
        if (start == nullptr)
        {
            cerr << "UnderFlow" << endl;
        }
        if (start->info == loc)
        {
            add_first(item);
            return;
        }

        Node *ptr = start;

        while (ptr != end and ptr->next->info != loc)
        {
            ptr = ptr->next;
        }
        if (ptr == end)
        {
            cerr << "Location Not Found" << endl;
        }
        Node *newptr = new Node(item);
        newptr->next = ptr->next;
        ptr->next = newptr;
    }

    void add_after(int item, int loc)
    {
        if (start == nullptr)
        {
            cerr << "List is empty\n";
            return;
        }
        if (end->info == loc)
        {
            last_add(item);
            return;
        }
        Node *ptr = start;
        while (ptr != end and ptr->info != loc)
        {
            ptr = ptr->next;
        }
        if (ptr == end)
        {
            cerr << "Location not found\n";
            return;
        }
        Node *newptr = new Node(item);
        newptr->next = ptr->next;
        ptr->next = newptr;
    }

    void del_fir()
    {
        if (start == nullptr)
        {
            cerr << "underflow" << endl;
            return;
        }
        Node *ptr = start;
        if (start == end)
        {
            start = end = nullptr;
        }
        else
        {
            start = start->next;
        }
        cout << ptr->info << " Deleted" << endl;
        delete ptr;
    }

    void del_last()
    {
        if (start == nullptr)
        {
            cerr << "underflow" << endl;
            return;
        }
        Node *ptr = start;
        if (start == end)
        {
            start = end = nullptr;
        }
        else
        {
            while (ptr->next != end)
            {
                ptr = ptr->next;
            }
            end = ptr;
            ptr = ptr->next;
            end->next = nullptr;
        }
        delete ptr;
    }
};

int main()
{
    int n, loc;
    Linklist l1;

    l1.add_first(10);
    l1.last_add(20);
    l1.add_before(15, 20);
    l1.add_after(25, 20);
    l1.del_fir();
    l1.del_last();
    l1.output();
}