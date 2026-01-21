#include <stdio.h>
#include <stdlib.h>

// Linked List Node, we are defining this struct in a recursive manner.
typedef struct node {
    int val;
    struct node *next;
} node_t;

// Iterating over a list, and printing values to console.
void print_list(node_t *head)
{
    node_t *current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

// Adding an item to the end of the list. [Push]
void add_to_list(node_t *head, int val)
{
    // Increment current if there is a next node.
    node_t *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Then add new node to the end of the list.
    current->next = (node_t *)malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

// Adding an item to the beginning of the list [Push]
void push(node_t **head, int val)
{
    node_t *new_node;
    new_node = (node_t *)malloc(sizeof(node_t));

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

// Deleting first from list
int remove_first(node_t **head)
{
    // Take next item and save it.
    int returnval = -1;
    node_t *next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    returnval = (*head)->val;

    // Free the head item.
    free(*head);

    // Set head to next item that we stored.
    *head = next_node;

    return returnval;
}

// Remove last form list
int remove_last(node_t *head)
{
    int retval = 0;

    // If only one item in list remove it.
    if (head->next == NULL) {
        retval = head->val;
        free(head);
        return retval;
    }

    // Get to the second to last node on the list.
    node_t *current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    // Now current points to the second to last item of the list
    // so lets remove current->next.
    retval = current->next->val;
    free(current->next);
    current->next = NULL;
    return retval;
}

// Remove by index
int remove_by_index(node_t **head, int n)
{
    int retval = -1;
    node_t *current = *head;
    node_t *temp_node = NULL;

    // Iterate to the node before the node we wish to delete
    if (n == 0) {
        return remove_first(head);
    }

    for (int i = 0; i < n - 1; i++) {
        if (current->next == NULL) {
            return -1;
        }
        current = current->next;
    }

    if (current->next == NULL) {
        return -1;
    }

    // Save the node we wish to delete in a temporary pointer
    temp_node = current->next;
    // Set the previous node's next pointer to point to the node after the node we wish to delete
    retval = temp_node->val;
    // Delete the node using the temporary pointer
    current->next = temp_node->next;
    free(temp_node);

    return retval;
}

// Remove by value.
int remove_by_value(node_t **head, int val)
{
    node_t *previous, *current;

    if (*head == NULL) {
        return -1;
    }

    if ((*head)->val == val) {
        return remove_first(head);
    }

    previous = *head;
    current = (*head)->next;
    while (current) {
        if (current->val == val) {
            previous->next = current->next;
            free(current);
            return val;
        }

        previous = current;
        current = current->next;
    }
    return -1;
}

// Delete the list
void delete_list(node_t *head)
{
    node_t *current = head, *next = head;

    while (current) {
        next = current->next;
        free(current);
        current = next;
    }
}

int main()
{
    // Head == first item of the list.
    node_t *head = NULL;
    head = (node_t *)malloc(sizeof(node_t));
    if (head == NULL) {
        return 1;
    }

    head->val = 1;
    head->next = NULL;

    // Adding new node, manually..
    // head->next = (node_t *)malloc(sizeof(node_t));
    // head->next->val = 2;
    // head->next->next = NULL;

    return 0;
}
