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
            ins_beg(start,nw);
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

        case 5:
            del_end(start);
            printf("Ending node Deleted \n");
            break;

        case 6:
            printf("Entet info to be deleted : \n");
            scanf("%d",&n);
            if (search(start,n))
            {
                del_at(start,n);
            }
            else{
                printf("Element not found");
            }
            break;

        case 7:
            printf("Enter info :\n");
            scanf("%d",&n);
            if (search(start,n))
            {
                printf("Element found. \n");
            }
            else{
                printf("Element not found !!! \n");
            }
            break;

        case 8:
            traverse_forward(start);
            break;

        case 9:
            traverse_backward(start);
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
        return;
    }
    
    nw->next = start;
    start = nw;
    return;
    
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

int search(struct node *start,int n){
    struct node *ptr;
    for ( ptr = start; ptr != NULL; ptr = ptr->next ){
            if(ptr->info == n){
                return 1;
            }
        }
    return 0;
}

void del_beg(struct node *start){
    struct node *ptr;
    if(start == NULL)
        printf("List is empty already ! \n");
    ptr = start;
    start = start->next;
    free(ptr);
}

void del_end(struct node *start){
    struct node *ptr,*pptr;
    if(start == NULL){
        printf("List does not exist ! \n");
        return;
    }
    for(ptr = start;ptr!=NULL;pptr = ptr,ptr = ptr->next);
    if(ptr == start){
        start = NULL;
    }else{
        pptr->next = NULL;
    }

    free(ptr);
}

void del_at(struct node *start, int n){
    struct node *ptr,*pptr;
    if(start == NULL){
        printf("List does not exist! \n");
    }
    for(ptr = start;ptr->info != n;pptr = ptr,ptr = ptr->next);
    if(ptr == start){
        start = start->next;
    }
    else if(ptr->next == NULL){
        pptr->next = NULL;
    }
    else{
        pptr->next = ptr->next;
    }

    free(ptr);
}

void traverse_forward(struct node *start){
    struct node *ptr;
    if(start == NULL){
        return;
    }
    printf("%d -> ",start->info);
    traverse_forward(start->next);
}

void traverse_backward(struct node *start){
    struct node *ptr;
    if(start == NULL){
        return;
    }
    traverse_backward(start->next);
    printf("%d -> ",start->info);
}