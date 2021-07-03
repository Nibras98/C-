#include<bits/stdc++.h>
using namespace std;

struct node
{
    int id;
      string ch;
    double cgpa;
    struct node *left, *right;
};


struct node *newNode(int id,string ch,double p)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->id = id;
    temp->ch=ch;
    temp->cgpa=p;
    temp->left = temp->right = NULL;
    return temp;
}


void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
      cout<<root->id<<"  ->"<<root->ch<<"  ->"<<root->cgpa<<endl;
        inorder(root->right);
    }
}


struct node* insert(struct node* node, int id,string ch,double p)
{
    if (node == NULL) return newNode(id,ch,p);


    if (id < node->id)
        node->left  = insert(node->left, id,ch,p);
    else if (id > node->id)
        node->right = insert(node->right, id,ch,p);

    return node;
}
int minValue(struct node* node)
{
struct node* current = node;


while (current->left != NULL)
{
    current = current->left;
}
return(current->id);
}
int findMax(node* root)
{

    if (root == NULL)
    return INT_MIN;

    int res = root->id;
    int lres = findMax(root->left);
    int rres = findMax(root->right);
    if (lres > res)
    res = lres;
    if (rres > res)
    res = rres;
    return res;
}



int main()
{

    struct node *root = NULL;
    root = insert(root, 5,"Ranu",3.75);
    insert(root, 3,"Jibon",3.10);
    insert(root, 5,"Rifat",2.88);
    insert(root, 8,"Joy",3.15);
    insert(root, 4,"Sourav",2.75);
    insert(root, 2,"Tamim",4.00);
    insert(root, 7,"Sakib",2.00);
    int min1=minValue(root);
    int max1=findMax(root);

    inorder(root);

    cout<<"junior:"<<max1<<"\nsenior:"<<min1<<"\n";


    return 0;
}
