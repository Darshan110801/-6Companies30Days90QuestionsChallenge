/*
delete n nodes after m nodes
  The input list will have at least one element  
  Node is defined as 

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

*/
class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        struct Node *itr = head;
        int ind_tb_del = M;
        struct Node* prev = NULL;
        int cur_ind = 0;
        while(itr != NULL)
        {
            if(cur_ind == ind_tb_del)
            {
                int i =0;
                while(i<N && itr != NULL)
                {
                    prev->next = itr->next;
                    free(itr);
                    itr = prev->next;
                    i+=1;
                    cur_ind++;
                }
                ind_tb_del += (N+M);
            }
            else{
              prev = itr;
              itr = itr->next;
              cur_ind++;
            }
            
        }
        
        
    }
};
