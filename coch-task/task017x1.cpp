#include<iostream>
using namespace std;

struct node{							//node
	int data;
	struct node * next;
};

struct node *create_linked_list();
int traverse(struct node*);
void do_loop(struct  node*);
int check_loop(struct node*);

int main(){
	int opt,size,check1,c;
	struct node *head = NULL;
	while(1){
		cout<<"1:create"<<endl;
		cout<<"3:traverse"<<endl;
		cout<<"4:do loop"<<endl;
		cout<<"5:check loop"<<endl;
		cout<<"9:Exit"<<endl;
		cin>>opt;
	switch(opt){
			case 1:
				cout<<"Create a linkled list"<<endl;
				head = create_linked_list();
			break;
			case 3:
				size  = traverse(head);
				cout<<"size of linked-list :"<<size<<endl;
			break;
			case 4:
				do_loop(head);
			//	if(check1 == 1)cout<<"loop found"<<endl;
			break;
			case 5:
				c = check_loop(head);
				if(c == 1){cout<<"loop found at :"<<endl;}
				if(c != 1){cout<<"no loop found"<<endl;}
			break;
			case 9:
				cout<<"Exit"<<endl;
				return 0;
		}
	}
	return 0;
}

struct node *create_linked_list(){
	int size;
	struct node *head=NULL,*temp=NULL,*p;
	cout<<"enter the size of linked_list:"<<endl;
	cin>>size;
	while(size){
		temp = new struct node;
		temp ->next = NULL;
		cout<<"Enter data :"<<endl;
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

int traverse(struct node * head){
	int count =0;
	while(head != NULL){
		cout<< (head->data);
		cout<<"\t";
		head = head->next;
		count++;
	}
	cout<<endl;
	return count;
}

void do_loop(struct node *head){
	struct node * p,*q;
	p = head;
	q = head;
	p = p->next->next;
//	p = p->next;
	while(q->next != NULL){
		q = q->next;
	}
	q->next = p;
}
int check_loop(struct node *head){
	struct node * p,*q;
	int count;
	p = head;
	q = head;
	while( (p->next != NULL) && (q->next != NULL) ){
		p = p->next;
		count++;
		q = q->next->next;
		if(p == q)return 1;
//		if(p == q)return count;
	}
	return count;
}


