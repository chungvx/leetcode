#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void addNode(ListNode *&head, int val)
{
    ListNode *newNode = new ListNode(val);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        ListNode *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

ListNode *middleNode(ListNode *head)
{
    ListNode *singleJump = head, *doubleJump = head;
    while (doubleJump != NULL && doubleJump->next != NULL)
    {
        singleJump = singleJump->next;
        doubleJump = doubleJump->next->next;
    }
    return singleJump;
}

int main()
{
    ListNode *head = nullptr;
    addNode(head, 1);
    addNode(head, 2);
    addNode(head, 3);
    addNode(head, 4);
    addNode(head, 5);
    addNode(head, 6);

    ListNode *current = head;
    while (current != nullptr)
    {
        cout << current->val << " ";
        current = current->next;
    }

    cout << endl;
    cout << middleNode(head)->val;
}