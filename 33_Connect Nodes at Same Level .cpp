class Solution
{
    public:
    //Function to connect nodes at same level.
    void set_connections(deque<Node*>&dq)
    {
       deque<Node*>::iterator it = dq.begin();
       while(it != dq.end())
       {
           if(it+1 == dq.end())
           {
               (*it)->nextRight = NULL;
           }
           else
           {
               (*it)->nextRight = *(it+1);
           }
           it++;
       }
    }
    void connect(Node *root)
    {
       if(root != NULL)
       {
            deque<Node*> dq;
            dq.push_back(root);
            while(!dq.empty())
            {
                set_connections(dq);
                int sz = dq.size();
                for(int i=0;i<sz;i++)
                {
                    Node* ptr = dq.front();
                    dq.pop_front();
                    if(ptr->left) dq.push_back(ptr->left);
                    if(ptr->right) dq.push_back(ptr->right);
                }
            }
       }
    }    
      
};
