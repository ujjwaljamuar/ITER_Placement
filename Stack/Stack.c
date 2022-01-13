#include <stdio.h>
#define MAX 10

struct STACK
{
    int arr[MAX];
    int top;
};

void push(struct STACK *, int);
int pop(struct STACK *);
int peep(struct STACK *);
int overflow(struct STACK *);
int underflow(struct STACK *);

int main()
{
    int op, data;
    struct STACK s;
    s.top = -1;

    do
    {
        printf("1. Push \n2.Pop \n3.Peek \n4.Exit \n \n");
        
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            if (overflow(&s)){
                printf("STACK overflow \n \n");
                break;
                }
            else{
                printf("Enter data : \n");
                scanf("%d", &data);
                push(&s, data);
                break;
            }
            

        case 2:
            if (underflow(&s)){
                printf("STACK underflow \n \n");
                break;
            }
            else{
                data = pop(&s);
                printf("%d removed.\n", data);
                break;
            }
            

        case 3:
            if (underflow(&s)){
                printf("STACK underflow \n \n");
                break;
            }
            else{
                data = peep(&s);
                printf("Peek data is %d \n \n", data);
                break;
            }
            

        case 4:
            break;
        default:
            printf("Invaliid Choice!.");
        }
    } while (op != 4);
    return 0;
}

int overflow(struct STACK *s)
{
    return s->top == MAX-1;
}

int underflow(struct STACK *s)
{
    return s->top == -1;
}

void push(struct STACK *s, int n)
{
    s->arr[++s->top] = n;
}

int pop(struct STACK *s)
{
    return s->arr[s->top--];
}

int peep(struct STACK *s)
{
    return s->arr[s->top];
}

