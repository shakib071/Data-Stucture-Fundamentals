#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    string val;
    node *next;
    node *pre;
    node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void insert_at_tail(node *&head, node *&tail, string val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->pre = tail;
    tail = tail->next;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
    {
        string s;
        cin >> s;
        node *tmp = head;
        node*cur=head;
        if (s == "visit")
        {
            string s2;
            cin >> s2;
            int flag=0;
            while (tmp != NULL)
            {
                if (tmp->val == s2)
                {
                    flag=1;
                    cout << s2<<endl;
                    cur=tmp;
                    break;
                }
                tmp = tmp->next;
            }
            if(flag==0)
            {
               cout << "Not Available";
            }
        }

        else if (s == "prev")
         {
             cout << cur->pre->val<<endl;
         }
        else if (s == "next")
        {
            cout << cur->next->val<<endl;
        }
    }
    return 0;
}