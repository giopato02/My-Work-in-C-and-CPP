// /*
// CH-230-A
// a6 p8.[c]
// Giorgi Pataridze
// gpataridze@constructor.university
// */
// #include <stdio.h>
// #include <stdlib.h>

// struct list // defining the structure of the linked list
// {
//     int value;         // value at any given point in the list is an int named value
//     struct list *next; // points to the next element
// };

// // Function for printing the values in the list
// void Print_List(struct list *MyList)
// {
//     struct list *p;
//     for (p = MyList; p; p = p->next)
//     {
//         printf("%d ", p->value);
//     }
//     printf("\n");
// }

// // Function to delete the first value in the list
// struct list *delete(struct list *MyList)
// {
//     if (MyList == NULL)
//     {
//         return NULL; // If the list is empty, return NULL
//     }

//     struct list *p = MyList; // p points to MyList (the first node)
//     MyList = MyList->next;   // MyList now points to the second node
//     free(p);                 // frees the first node
//     return MyList;           // returns the list without the first node
// }

// // Function to add a value at the end of the list
// struct list *add_end(struct list *MyList, int x)
// {
//     struct list *p, *L;
//     // Create a new node dynamically
//     p = (struct list *)malloc(sizeof(struct list));
//     p->value = x;
//     p->next = NULL;

//     // If the list is empty, the new node is the first node
//     if (MyList == NULL)
//     {
//         return p;
//     }

//     L = MyList;             // Start at the first node
//     while (L->next != NULL) // Traverse to the last node
//     {
//         L = L->next;
//     }
//     L->next = p; // Add the new node at the end
//     return MyList;
// }

// // Function to add a value before the first value in the list
// struct list *add_before(struct list *MyList, int x)
// {
//     struct list *p;
//     p = (struct list *)malloc(sizeof(struct list)); // Create a new node
//     p->value = x;
//     p->next = MyList; // New node points to the current head
//     return p;         // New node becomes the new head
// }

// // Function to delete the entire list and free memory
// void Delete_List(struct list *MyList)
// {
//     struct list *p;
//     while (MyList != NULL)
//     {
//         p = MyList->next;
//         free(MyList); // frees the first node
//         MyList = p;   // move to the next node
//     }
// }

// int main()
// {
//     struct list *MyList = NULL; // Initialize an empty list
//     char c;
//     int v;
//     while (1)
//     {
//         scanf(" %c", &c); // Read a character (with space to avoid newline issues)
//         switch (c)
//         {
//         case 'a':
//             scanf("%d", &v);
//             MyList = add_end(MyList, v); // Add the value at the end and update MyList
//             break;
//         case 'b':
//             scanf("%d", &v);
//             MyList = add_before(MyList, v); // Add the value at the beginning and update MyList
//             break;
//         case 'r':
//             MyList = delete (MyList); // Delete the first value and update MyList
//             break;
//         case 'p':
//             Print_List(MyList); // Print the values in the list
//             break;
//         case 'q':
//             Delete_List(MyList); // Free the memory used by the list
//             return 0;            // Exit the program
//         }
//     }
// }

#include <stdio.h>
#include <stdlib.h>

struct list
{
    int num;
    struct list *next;
};

void add_end(struct list **head, int yle)
{
    struct list *ptr = (struct list *)malloc(sizeof(struct list));
    ptr->num = yle;
    ptr->next = NULL;
}
void insert_start(struct list **head, int yle)
{
    struct list *ptr = (struct list *) malloc(sizeof(sturct list));
    head->

}
void print(struct list *head)
{
    if(head == NULL)
    {
        printf("Yleo!");
        return;
    }
    struct list *dedismuteli = head;
    while(dedismuteli != NULL)
    {
        printf("%d ", dedismuteli->value);
    }
    printf("\n");
}

int main()
{
    struct list *head = NULL;
    char c;
    scanf(" %c", &c);
    int yle;

    while(1){
        switch (c)
        {
        case 'a':
            scanf("%d", &yle);
            break;
        
        case 'b':
            /* code */
            break;

        case 'r':
            /* code */
            break;
        case 'p':
            /* code */
            break;

        case 'q':
            /* code */
            break;
        }
    }

    return 0;
}