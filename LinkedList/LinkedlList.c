#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *createNode(int);

void ins_beg(struct node *, struct node *);
void ins_end(struct node *, struct node *);
void ins_at(struct node *, struct node *);
void del_beg(struct node *);
void del_end(struct node *);
void del_at(struct node *, int);
int search(struct node *,int);
void traverse_forward(struct node *);
void traverse_backward(struct node *);

int main()
{
    struct node *start = NULL;
    struct node *nw;
    int option, n;

    do
    {
        printf("1. Insert at beginning \n2. Insert at End \n3. Insert at \n4. Delete at beginning \n5. Delete at End \n6. Delete at \n7. Search \n8. Traverse Forward \n9. Traverse Backward \n10. EXIT \n");

        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter info : \n");
            scanf("%d", &n);
            nw = createNode(n);
            ins_beg(start, nw);
            break;

        case 2:
            printf("Enter info : \n");
            scanf("%d", &n);
            nw = createNode(n);
            ins_end(start, nw);
            break;

        case 3:
            printf("Enter info : \n");
            scanf("%d", &n);
            nw = createNode(n);
            ins_at(start, nw);
            break;

        case 4:
            del_beg(start);
            printf("Beginning node Deleted \n");
            break;

        

        case 10:
            break;

        default:
            continue;       
        
        }
    } while (option != 10);
}

struct node *createNode(int n){
    struct node *nw;
    nw = (struct node *)malloc(sizeof(struct node));
    nw->info = n;
    nw->next = NULL;
    return nw;
}

void ins_beg(struct node *start, struct node *nw){
    if(start == NULL){
        start = nw;
    }
    else{
        nw->next = start;
        start = nw;
    }
}

void ins_end(struct node *start, struct node *nw){
    struct node *ptr;
    if(start == NULL){
        start = nw;
    }

    for(ptr = start;ptr->next != NULL;ptr = ptr->next);
    ptr->next = nw;
}

void ins_at(struct node *start, struct node *nw){
    struct node *ptr,*pptr;
    if(start == NULL){
        start = nw;
    }
    for(ptr = start;ptr->info < nw->info && ptr ;pptr = ptr,ptr = ptr->next);

    if(ptr == start){
        nw->next = ptr;
        start = nw;
    }

    nw->next = ptr;
    pptr->next = nw;

}