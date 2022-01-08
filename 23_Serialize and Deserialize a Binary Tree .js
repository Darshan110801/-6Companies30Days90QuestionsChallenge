//User function Template for javascript

/*
class Node{
    constructor(data){
        this.data = data;
        this.left = null;
        this.right = null;
    }
}
*/

class Solution 
{
    /**
     * @param {Node} root
     * @returns {number[]}
    */
    constructor(){
        this.index=0;
    }
    
    //Function to serialize a tree and return a list containing nodes of tree.
    tp(root,preorder){
        if(root === null) preorder.push(null);
        else{
            preorder.push(root.data);
            this.tp(root.left,preorder);
            this.tp(root.right,preorder);
        }
    }
    serialize(root)
    {
        let preorder = [];
        this.tp(root,preorder);
        return preorder;
    }
    
    /**
     * @param {number[]} A
     * @returns {Node}
    */
    
    //Function to deserialize a list and construct the tree
   
    deSerialize(A)
    {
       if(A.length === 0 || A[this.index] === null ){
           this.index++;
           return null;
       }
       else{
           let root = new Node(A[this.index]);
           this.index++;
           root.left = this.deSerialize(A);
           root.right = this.deSerialize(A);
           return root;
           
       }
    }
}
