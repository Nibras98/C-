#include <iostream>

using namespace std;
struct node
{
    int id;
    float mid_term_mark;
    float final_term_mark;
    float final_mark;
    node *next;
};
node *head=NULL;
node *tail=NULL;

void add_node(int s_id,float s_mid_term_mark,float s_final_term_mark,node *head_node){
        node *newNode=new node;
        newNode->id = s_id;
        newNode->mid_term_mark=s_mid_term_mark;
        newNode->final_term_mark=s_final_term_mark;
        newNode->final_mark=((s_mid_term_mark*0.4)+(s_final_term_mark*0.6));
        newNode->next = NULL;

        if(head_node==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            tail->next = newNode;
            tail=tail->next;
        }
    }

    void src(node *head_node){
        node *tmp=new node;
        tmp=head_node;
        cout<<"\nStudent who get more than 80: ";
        while(tmp!=NULL){
            if(tmp->final_mark > 80){
                cout<<tmp->id<<" ";
            }
            tmp=tmp->next;
        }

        tmp=head_node;
        cout<<"\nstudent who are fail: ";
        while(tmp!=NULL){
            if(tmp->mid_term_mark < 50 || tmp->final_term_mark < 50 ){
                cout<<tmp->id<<" ";
            }
            tmp=tmp->next;
        }
    }


int main()
{  int size;
   cout<<"Enter number of student: ";
   cin>>size;
   cout<<endl;
   int ID;
   float mid,final;
   for(int i=0;i<size;i++){
    cout<<"\nEnter info of student "<<i+1;
    cout<<"\nEnter id: ";
    cin>>ID;
    cout<<"Enter mid mark: ";
    cin>>mid;
    cout<<"Enter final mark: ";
    cin>>final;
    add_node(ID,mid,final,head);
   }
   src(head);
    return 0;
}
