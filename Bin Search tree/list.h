#ifndef LIST_H
#define LIST_H


class BST
{

    private:
        struct node{
            int data;
            node *left;
            node *right;
        };
        node *root;

        void addLeafPrivate(int item, node* ptr);
        void InOrder(node* ptr);
        void preOrder(node* ptr);
        void postOrder(node* ptr);


    public:
        BST();
        ~BST();
        void original(int x);
        void input(int x);
        void addLeaves(int item);
        node* createLeaf(int item);
        void printInOrder();
        void printPreOrder();
        void printPostOrder();

};

#endif // LIST_H
