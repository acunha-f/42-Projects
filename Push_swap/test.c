#include <stdlib.h>
# include <unistd.h>
typedef struct s_stack
{
    int                content;
    int                position;
    int                cost;
    int                median;
    struct s_stack    *target;
    struct s_stack    *next;
    struct s_stack    *prev;
}                            t_stack;

t_stack    *last_node(t_stack *head)
{
    t_stack    *temp;

    if (!head)
        return (NULL);
    temp = head;
    while (temp->next)
        temp = temp->next;
    return (temp);
}

void    new_node(t_stack **a, int content)
{
    t_stack    *new;
    t_stack    *last;

    new = (t_stack *)malloc(sizeof(t_stack));
    if (!new)
        return ;
    new->content = content;
    new->cost = 0;
    new->next = NULL;
    if (!*a)
    {
        new->prev = NULL;
        *a = new;
    }
    else
    {
        last = last_node(*a);
        last->next = new;
        new->prev = last;
    }
    new->target = NULL;
    return ;
}
static void    push(t_stack **dest, t_stack **src)
{
    t_stack    *node;

    if (!(*src))
        return ;
    node = *src;
    *src = (*src)->next;
    if (*src)
        (*src)->prev = NULL;
    if (!(*dest))
    {
        *dest = node;
        (*dest)->next = NULL;
    }
    else
    {
        node->next = *dest;
        node->next->prev = node;
        *dest = node;
    }
}

void    pa(t_stack **a, t_stack **b)
{
    push(a, b);
    write(1, "pa\n", 3);
}


void    pb(t_stack **b, t_stack **a)
{
    push(b, a);
    write(1, "pb\n", 3);
}

int    main(void)
{
    int    t[5] = {1, 2, 34, 4};
    int    i = 0;
    t_stack    *a;
    t_stack    *b;

    a = NULL;
    b = NULL;
    while (t[i])
    {
      new_node(&a, t[i]);
      i++;
    }
    pb(&b, &a);
}
