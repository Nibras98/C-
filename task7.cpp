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
        cout<<"id: "<<root->id<<"  name:"<<root->ch<<"  cgpa:"<<root->cgpa<<endl;
        inorder(root->right);
    }
}


struct node* insert(struct node* node, int id,string ch,double p)
{
    if (node == NULL)
        return newNode(id,ch,p);


    if (id < node->id)
        node->left  = insert(node->left, id,ch,p);
    else if (id > node->id)
        node->right = insert(node->right, id,ch,p);

    return node;
}

struct node*search(struct node* root, int id)
{

    if (root == NULL || root->id==id)
    {
        return root;

    }
    if (root->id < id)
    {
        return search(root->right,id);
    }
    else

        return search(root->left,id);
}


int main()
{

    struct node *root = NULL;
    root = insert(root, 3,"Thertho",3.75);
    insert(root, 5,"Jibon",3.10);
    insert(root, 8,"Shuvo",2.88);
    insert(root, 4,"Alif",3.15);
    insert(root, 2,"Shanto",2.75);
    insert(root, 7,"Tonmoy",4.00);
    insert(root, 1,"Sakil",2.00);
    insert(root, 6,"Siam",2.10);


    inorder(root);


    cout<<endl<<endl<<endl;



    cout<<"enter a id number for search:";
    int n;
    cin>>n;

    cout<<endl;
    search(root, n)?cout <<"id "<<n<<" present in the list" :cout <<"id "<<n<<" not present in the list";



    return 0;
}

