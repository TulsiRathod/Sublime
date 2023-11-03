#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

class Solution
{
    public:
    
    Node* reverseList(Node *head){
        if(head==NULL||head->next==NULL)return head;
        Node *newHead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;
    }
    
    void insertNode(Node * &head, Node * &tail,int val){
        Node *temp=new Node(val);
        if(head==NULL){
            head=temp;
            tail=temp;
            return ;
        }else{
            tail->next=temp;
            tail=temp;
        }
    }
    
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first=reverseList(first);
        second=reverseList(second);
        
        Node *head=NULL,*tail=NULL;
        int carry=0;
        
        while(first!=NULL&&second!=NULL){
            int sum=first->data+second->data+carry;
            int val=sum%10;
            carry=sum/10;
            insertNode(head,tail,val);
            first=first->next;
            second=second->next;
        }
        
        // while(first!=NULL){
        //     int sum=first->data+carry;
        //     int val=sum%10;
        //     carry=sum/10;
        //     insertTail(head,tail,val);
        //     first=first->next;
        // }
        
        // while(second!=NULL){
        //     int sum=second->data+carry;
        //     int val=sum%10;
        //     carry=sum/10;
        //     insertTail(head,tail,val);
        //     second=second->next;
        // }
        
        // if(carry!=0){
        //     insertTail(head,tail,carry);
        // }
        
        return reverseList(head);
    }
};


//{ Driver Code Starts.

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends