//link:https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1/#
class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here
        Node *temp=head;
        int m=M;
        int n=N;
        while(temp && M)
        {
             M--;
             if(M==0)
             {
                 Node *nxt=temp;
                while(N-- && temp->next)
                {
                    temp=temp->next;
                }
                 nxt->next=temp->next;
                M=m;
                N=n;
             }
           temp=temp->next;
        }
    }
};