class linkedList
{
public:
	void addNode(int addData);
	void printList();
	void displayNode();
	linkedList();
	~linkedList();
private:
	struct node
	{
	int data;
	node* link;
	};
	
	node* tail;
	node* head;
	node* current;
	node* temp;
};
