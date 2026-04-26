#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node Node;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Insert(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(Node));

    newn -> data   = no;
    newn -> lchild = NULL;
    newn -> rchild = NULL;

    if (*first == NULL)             // If tree is empty
    {
        *first = newn;
    }
    else                             // If tree is not empty
    {
        temp = *first;
        
        while (1)
        {
            if (no > temp->data)            // If element is grater
            {
                if (temp ->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp -> rchild;
            }
            else if (no < temp->data)            // If element is grater
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;                
            }
            else if (no == temp->data)            // If element is (same/identical)
            {
                printf("Unable to insert as there is duplicate\n");
                free(newn);                                            // already allocate kele asel na memory ti free karavai lagnar memory leak sathi
                break;
            }
        }
    }
}

//      L   D   R = order    
void Inorder(PNODE first)
{
    if (first != NULL)
    {
        Inorder(first->lchild);
        printf("%d\n",first->data);
        Inorder(first->rchild);
    }
    
}
int main()
{
    PNODE head = NULL;          //root pn bolu shkato   

    Insert(&head, 11);
    Insert(&head, 21);
    Insert(&head, 51);
    
    Inorder(head);

    return 0 ;
}