#include<iostream>
using namespace std;


struct node{
	int data;
	struct node *next;
};

struct node *create_linked_list();
void traverse(struct node*);
struct node *merge(struct node*,struct node*);
int size_of_linked_list(struct node*);


int main(){
	struct node *h1 = NULL;
	struct node *h2 = NULL;
	struct node *h3 = NULL;
	int size;
	cout<<"create linked list A"<<endl;
	h1 = create_linked_list();
	cout<<"create linked list B"<<endl;
	h2 = create_linked_list();
	cout<<endl<<endl;
	cout<<"linked list A:"<<endl;
	traverse(h1);
	cout<<"linkde list B:"<<endl;
	traverse(h2);
	cout<<"now merge"<<endl;
//	size = size_of_linked_list(h1) + size_of_linked_list(h2);
//	cout<<size<<endl;
	h3 = merge(h1,h2);
	traverse(h3);

//	traverse(h1);
//	int size1 = size_of_linked_list(h1);
//	cout<<"size of list A:"<<size1<<endl;
//	int size2 = size_of_linked_list(h2);
//	cout<<"size of list B:"<<size2<<endl;
	return 0;

}

struct node *create_linked_list(){
	int size,data;
	struct node *head = NULL,*temp  = NULL,*p;
	cout<<"enter the size of list :";
	cin>>size;
	while(size){
		temp = new struct node;
		cout<<"Enter data:";
		cin>>temp->data;
		if(head == NULL){
			head = temp;
		}else{
			p = head;
			while(p->next != NULL)p = p->next;
			p->next = temp;
		}
		size--;
	}
	return head;
}
void traverse(struct node *head){
	while(head != NULL){
		cout<< head->data <<"\t";
		head = head->next;
	}
	cout<<endl;
}
int size_of_linked_list(struct node *head){
	int size = 0;
	while(head != NULL){
		head = head->next;
		size++;
	}
	return size;
}

struct node * merge(struct node *h1, struct node *h2){
	int size = size_of_linked_list(h1) + size_of_linked_list(h2);
	cout<<size<<endl;
	struct node *temp = NULL;
	while(size){
		while( h1->next != NULL && h2->next != NULL){
		temp = new struct node;
		if(h1->data <= h2->data){
			temp->data = h1->data;
			temp = temp->next;
			h1 = h1->next;
			cout<<"if true"<<endl;
		}else{
			temp->data = h2->data;
			temp = temp->next;
			cout<<"else true"<<endl;
			h2 = h2->next;
		}
		}
		size--;
	}
	return temp;

}
