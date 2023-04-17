#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node *_left, Node *_right, Node *_next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution
{
public:
    vector<Node *> lvl;

    void dfs(Node *root, int level)
    {
        if (root == NULL)
        {
            return;
        }

        if (lvl.size() == level)
        {
            lvl.push_back(root);
        }
        else
        {
            lvl[level]->next = root;
            lvl[level] = root;
        }
        dfs(root->left, level + 1);
        dfs(root->right, level + 1);
    }
    Node *connect(Node *root)
    {
        if (!root)
            return NULL;
        dfs(root, 0);
        return root;
    }
};

int main()
{
}