#include<iostream>
#include<malloc.h>

using namespace std;
struct node {
	node* left;
	node* right;
	char value;
};

node* ans;
void search(node* n,char val) {
	if (n->value == val)
		ans = n;
	if (n->left!=NULL)
		search(n->left, val);
	if(n->right!=NULL)
		search(n->right, val);
}

void createNode(node* v, char left,char right) {

	if (left != '.') {
		node *l;
		l = (node*)malloc(sizeof(node));
		v->left = l;
		l->value = left;
		l->left = NULL;
		l->right = NULL;

	}
	if (right != '.') {
		node *r;
		r = (node*)malloc(sizeof(node));
		v->right = r;
		r->value = right;
		r->left = NULL;
		r->right = NULL;
	}

}
void pre(node *n) {
	cout << n->value << " ";
	if(n->left!=NULL)
		pre(n->left);
	if (n->right != NULL)
		pre(n->right);
}
void in(node *n) {
	if (n->left != NULL)
		in(n->left);
	cout << n->value << " ";
	if (n->right != NULL)
		in(n->right);
}
void post(node *n) {
	if (n->left != NULL)
		post(n->left);
	if (n->right != NULL)
		post(n->right);
	cout << n->value << " ";
}

int main() {
	node *tree;
	tree = (node*)malloc(sizeof(node));
	tree->value = 'A';
	tree->left = NULL;
	tree->right = NULL;

	int N;
	cin >> N;
	char v, left, right;
	
	for (int i = 0; i < N; i++) {
		cin >> v >> left >> right;
		search(tree, v);
		//cout << "search:" << v<<" "<<ans->value << endl;
		createNode(ans , left, right);
		
	}

	pre(tree);
	cout << endl;
	in(tree);
	cout << endl;
	post(tree);
	cout << endl;

	system("pause");
	return 0;
}