#include <bits/stdc++.h>

using namespace std;

int n,x;  // n个数  x读入数


struct Node
{
    int data;
    struct Node *left,*right;
    Node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
    Node(int a,Node*b,Node*c)
    {
        data = a;
        left = b;
        right = c;
    }
}*tree;

void build(struct Node*t,int data)
{
    if(!t)
    {
        t = new Node(data,NULL,NULL);
    }
    else if(t->data < data)
    {
        build(t->left,data);
    }
    else
        build(t->right,data);
}

void Level(struct Node*t)
{
    if(!t) return ;
    queue<struct Node*> que;
    que.push(t);
    struct Node* k;
    int flag = 0;
    while(!que.empty())
    {
        k = que.front();
        que.pop();
        if(flag==0)
        {
            flag = 1;
            cout << k->data;
        }
        else
        {
            cout << " " << k->data;
        }
        if(k->left)
        que.push(k->left);
        if(k->right)
        que.push(k->right);
    }
    return;
}

void Judge(struct Node* t)
{
    if(t==NULL)
    {
        cout << "NO" << endl;
        return;
    }
    bool flag = true;
    queue<struct Node*> que;
    que.push(t);
    struct Node* k;
    while (!que.empty())
    {
        k = que.front();
        if(!flag&&(k->left||k->right))
        {
            cout << "NO" << endl;
            return;
        }
        if(k->left&&k->right) //如果左右孩子都有，则弹出根节点，插入左子树和右子树
        {
            que.pop();
            que.push(k->left);
            que.push(k->right);
        }
        else if(!k->left&&k->right)    //如果右孩子存在，左孩子不存在，必不可能是完全二叉树
        {
            cout << "NO" << endl;
            return;
        }
        else if(k->left&&!k->right)  //如果存在左子树，不存在右子树，则判断剩下的是否都为叶子节点
                                     //若有非叶子节点，则不为完全二叉树
        {
            if(k->left->left||k->left->right)
            {
                cout << "NO" << endl;
                return;
            }
            flag = false;
            que.pop();
            que.push(k->left);
        }
        else{          //如果左右孩子都没有，则直接弹出
            que.pop();
            flag = false;
        }
    }
}

int main()
{
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&x);
        build(tree,x);
    }
    Level(tree);
    cout << endl;
    Judge(tree);
    return 0;
}