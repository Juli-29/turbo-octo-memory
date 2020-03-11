//В программе я работаю только с натуральными числами

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Node
{
	int key;
	Node* left = NULL;
	Node* right = NULL;
	
	Node(int z)
	{
	    key = z;
	}
};

Node* minimum(Node* x)
{
  if (x->left == NULL)
     return x;
  return minimum(x->left);
}

Node* search(Node* x, int k)
{
    if (x == NULL || k == x->key)
      return x;
   if (k < x->key)
      return search(x->left, k);
   else
      return search(x->right, k);
}

Node* insert(Node* x, int z)
{
   if (x == NULL)
      return new Node(z);
   else if (z < x->key)
      x->left = insert(x->left, z);
   else if (z > x->key)
      x->right = insert(x->right, z);
   return x;
}

Node* del(Node* root, int z)
{
  if (root == NULL)
    return root;
  if (z < root->key)
    root->left = del(root->left, z);
  else if (z > root->key)
    root->right = del(root->right, z);
  else if (root->left != NULL && root->right != NULL)
    {
        root->key = minimum(root->right)->key;
        root->right = del(root->right, root->key);
    }
  else
    if (root->left != NULL)
      root = root->left;
    else if (root->right != NULL)
      root = root->right;
    else
      root = NULL;
  return root;
}

int main()
{
    Node root(0);
	string s;
	int key;
	bool work = 1;
	cin >> s;
	if (s != "exit")
	{
	    cin >> key;
	}
	else
	{
	    work = 0;
	}
	while (work)
	{
		if (s == "insert")
		{
			insert(&root, key);
		}
		else
		{
			if (s == "delete")
			{
				del(&root, key);
			}
			else
			{
				if (s == "find")
				{
					if (search(&root, key))
					{
						cout << "true\n";
					}
					else
					{
						cout << "false\n";
					}
				}
			}
		}
		cin >> s;
		if (s != "exit")
		{
		    cin >> key;
		}
		else
		{
		    work = 0;
		}
	}
	return 0;
}