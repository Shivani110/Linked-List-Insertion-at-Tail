#include <iostream>
using namespace std;
class link 
{
public:
	int n;
	link* nxt;
    link(int x)	
	{					
		n = x;	 
		nxt = NULL;	
	}
};
void Insert_at_Tail(link*& h, int x)
{
	link* a = new link(x);
	if (h == NULL) 
	{
		h = a;
		return;
	}
    link* p = h;
	while (p->nxt != NULL) 
	{
		p = p->nxt;
	}
	p->nxt = a;
}
void printlist(link*& h)
{
	link* p = h;

	while (p != NULL) 
	{
		cout << p->n << " -> ";
		p = p->nxt;
	}
	cout << "NULL" << endl;
}
int main()
{
	link* h = NULL;	

	Insert_at_Tail(h, 1);
	Insert_at_Tail(h, 2);
	Insert_at_Tail(h, 3);
	Insert_at_Tail(h, 4);
	cout << "Linked List Insertion at Tail: ";
	printlist(h);
	cout << endl;
    return 0;
}

 
