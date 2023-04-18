#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL && list2 == NULL)
            return NULL;
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
        ListNode mergeList(0);
        ListNode *last = &mergeList;
        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val < list2->val)
            {
                last->next = list1;
                last = list1;
                list1 = list1->next;
            }
            else
            {
                last->next = list2;
                last = list2;
                list2 = list2->next;
            }
        }
        if (list1 != NULL)
            last->next = list1;
        if (list2 != NULL)
            last->next = list2;
        return mergeList.next;
    }
};

int main()
{
}