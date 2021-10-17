/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// Should return true if tree is Sum Tree, else false

int sum(Node* root,bool & ans){
    if(root==NULL){
        return false;
    }
    int l=sum(root->left,ans);
    int r=sum(root->right,ans);
    if(l+r!=0&&l+r!=root->data){
        ans=false;
    }
    
    return l+r+root->data;
}



bool isSumTree(Node* root)
{
     // Your code here
     bool ans=true;
     int s=sum(root,ans);
     return ans;
     
}
