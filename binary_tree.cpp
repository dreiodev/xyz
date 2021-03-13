#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left, *right;
} *head;

// nwnode fn to build a node
struct node *nwNode(int data)
{
	struct node* node = (struct node*) malloc(sizeof(struct node));
	node ->data = data;
	node ->left = NULL;
	node -> right = NULL;
	return (node);
}

void display() {
	struct node *tmp;
	if (tmp == NULL)
	{ cout << "LIst is empty";}
	else {
		tmp = head;
		while (tmp != NULL) {
			cout << tmp->data;
			tmp -> left;
			tmp ->right;
		}
	}
}

int main() {
	struct node *root;
	root = nwNode(1);
	root ->left = nwNode(2);
	root ->right = nwNode(3);
	root ->left ->left = nwNode(5);
	root ->left ->right = nwNode(19);
	display();
	getchar();
	return 0;
}
