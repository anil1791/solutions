#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      //TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
  TreeNode* newNode(int data) {
     
    TreeNode *temp = new TreeNode;
    temp->val  = data;
    temp->left  = temp->right = NULL;
    return temp;
}

    vector<int> preorderTraversal(TreeNode* root) {
    	if(root==NULL)
    	{
    		//v.push_back(0);
    		return NULL;
		}
    	vector<int>v;
        stack<TreeNode *>s;
        s.push(root);
        while(!s.empty())
        {
        	TreeNode* node=s.top();
        	v.push_back(node->val);
        	s.pop();
        	if(node->right!=NULL)
        	s.push(node->right);
        	if(node->left!=NULL)
        	s.push(node->left);
		}
        
    }
    
int main()
{
	TreeNode* root=newNode(4);
	root->left=newNode(2);
	root->left->left=newNode(1);
	root->left->right=newNode(3);
	root->right=newNode(7);
	root->right->left=newNode(6);
	root->right->right=newNode(9);
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
}
