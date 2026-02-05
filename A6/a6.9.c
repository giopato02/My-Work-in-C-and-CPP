/*
CH-230-A
a6 p9.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

struct list // defining the structure of the linked list
{
    int value;         // value at any given point in the list is an int named value
    struct list *next; // points to the next element
};

// Function for printing the values in the list
void Print_List(struct list *MyList)
{
    struct list *p;
    for (p = MyList; p; p = p->next)
    {
        printf("%d ", p->value);
    }
    printf("\n");
}

// Function to delete the first value in the list
struct list *delete(struct list *MyList)
{
    if (MyList == NULL)
    {
        return NULL; // If the list is empty, return NULL
    }

    struct list *p = MyList; // p points to MyList (the first node)
    MyList = MyList->next;   // MyList now points to the second node
    free(p);                 // frees the first node
    return MyList;           // returns the list without the first node
}

// Function to add a value at the end of the list
struct list *add_end(struct list *MyList, int x)
{
    struct list *p, *L;
    // Create a new node dynamically
    p = (struct list *)malloc(sizeof(struct list));
    p->value = x;
    p->next = NULL;

    // If the list is empty, the new node is the first node
    if (MyList == NULL)
    {
        return p;
    }

    L = MyList;             // Start at the first node
    while (L->next != NULL) // Traverse to the last node
    {
        L = L->next;
    }
    L->next = p; // Add the new node at the end
    return MyList;
}

// Function to add a value before the first value in the list
struct list *add_before(struct list *MyList, int x)
{
    struct list *p;
    p = (struct list *)malloc(sizeof(struct list)); // Create a new node
    p->value = x;
    p->next = MyList; // New node points to the current head
    return p;         // New node becomes the new head
}

// Function to insert a value at a specific position
struct list *insert_at_position(struct list *MyList, int position, int value)
{
    if (position < 0)
    {
        printf("Invalid position!\n");
        return MyList; // No change if position is negative
    }

    struct list *p = (struct list *)malloc(sizeof(struct list));
    p->value = value;

    // If inserting at the head (position 0)
    if (position == 0)
    {
        p->next = MyList;
        return p; // New node becomes the new head
    }

    struct list *current = MyList;
    for (int i = 0; current != NULL && i < position - 1; i++)
    {
        current = current->next; // Traverse to the node before the desired position
    }

    // If position is greater than the number of elements
    if (current == NULL)
    {
        printf("Invalid position!\n");
        free(p);       // Free the newly allocated node
        return MyList; // No change to the list
    }

    p->next = current->next; // Link the new node to the next node
    current->next = p;       // Link the previous node to the new node

    return MyList; // Return the modified list
}

// Function to reverse the order of the elements in the list
void reverse_list(struct list **MyList)
{
    struct list *prev = NULL;
    struct list *current = *MyList;
    struct list *next = NULL;

    while (current != NULL)
    {
        next = current->next; // Store the next node
        current->next = prev; // Reverse the current node's pointer
        prev = current;       // Move pointers one position ahead
        current = next;
    }
    *MyList = prev; // Update the head pointer to the new first element
}

// Function to delete the entire list and free memory
void Delete_List(struct list *MyList)
{
    struct list *p;
    while (MyList != NULL)
    {
        p = MyList->next;
        free(MyList); // frees the first node
        MyList = p;   // move to the next node
    }
}

int main()
{
    struct list *MyList = NULL; // Initialize an empty list
    char c;
    int v, position;
    while (1)
    {
        scanf(" %c", &c); // Read a character (with space to avoid newline issues)
        switch (c)
        {
        case 'a':
            scanf("%d", &v);
            MyList = add_end(MyList, v); // Add the value at the end and update MyList
            break;
        case 'b':
            scanf("%d", &v);
            MyList = add_before(MyList, v); // Add the value at the beginning and update MyList
            break;
        case 'r':
            MyList = delete (MyList); // Delete the first value and update MyList
            break;
        case 'p':
            Print_List(MyList); // Print the values in the list
            break;
        case 'i':
            scanf("%d %d", &position, &v);
            MyList = insert_at_position(MyList, position, v); // Insert value at the given position
            break;
        case 'R':
            reverse_list(&MyList); // Reverse the list
            break;
        case 'q':
            Delete_List(MyList); // Free the memory used by the list
            return 0;
        }
    }
}
