#include <bits/stdc++.h>

using namespace std;


struct Node {
	int data; // data of the Node attribute
	struct Node *next; // pointe to next node
			  
};

struct Node *head;

void create(vector<int> &arr) {
	head = (struct Node *)malloc(sizeof(struct Node));
	head -> data = arr[0];
	head -> next = NULL;

	struct Node *last = head; // create his as last Node
	
	for (int i = 1; i < arr.size(); i++) {
		struct Node *middle = (struct Node *)malloc(sizeof(struct Node));
		middle -> data = arr[i];
		middle -> next = NULL;
		last -> next = middle;
		last = middle;
	}
}


void display(struct Node *p) {
	while (p) {
		cout << p -> data << '\n';
		p = p -> next;
	}
}

bool cycleCheck() {
	struct Node *slow = head;
	struct Node *fast = head;
	while (fast && fast -> next) {
		slow = slow -> next;
		fast = fast -> next -> next;

		if (slow == fast) {
			return true;
		}
	}
	return false;
}

void reverse() {
	struct Node *prev = nullptr;
	struct Node *current = head;
	struct Node *next = nullptr;

	while (current) {
		next = current -> next;
		current -> next = prev;
		prev = current;
		current = next;
	}

	head = prev;
}

int main() {
	vector<int> a = {1,2,3,4,5};
	create(a);
	display(head);
	reverse();
	display(head);

	//if (cycleCheck()) {
	//	cout << "Cycle found" << '\n';

	//}
	//else {
	//	cout << "Cycle not found" << '\n';
	//}

	
	return 0;
}

