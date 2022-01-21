#include <stdio.h>
#define MAX 10

struct QUEUE
{
    int arr[MAX];
    int front, rear;
};

void enqueue(struct QUEUE *, int);
int dequeue(struct QUEUE *);
int fullqueue(struct QUEUE *);
int emptyqueue(struct QUEUE *);

int main()
{
    int option, data;
    struct QUEUE Q;

    Q.front = Q.rear = -1;

    do
    {
        printf("1. Enqueue \n2. Dequeue \n3. Exit \n \n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter data : \n");
            scanf("%d", &data);

            printf("\n");

            enqueue(&Q, data);

            break;

        case 2:
            data = dequeue(&Q);
            if (data != -1)
            {
                printf("%d is removed \n", data);
                printf("\n");
            }
            break;

        case 3:
            break;
        default:
            continue;
        }
    } while (option != 3);
    return 0;
}

