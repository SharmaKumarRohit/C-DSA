// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int n, arr[] = {1, 3, 5, 7, 15, 18, 25, 50, 180};

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(int i = 0; i<9; i++) {
//         if(arr[i] == n) {
//             printf("Array is present\n");
//             return;
//         }
//     }
//     printf("Array is Not present\n");
//     getch();
// }

// 1. Write a program in C to implement the basic operations of Stack.

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #define SIZE 4

// int top = -1, inp_array[SIZE];
// void push();
// void pop();
// void show();
// void main() {
//     int choice;

//     while(1) {
//         printf("Perform operations on the stack:\n");
//         printf("1. Push the element\n2.Pop the element\n3.Show\n4.End\n");
//         printf("Enter the choice: ");
//         scanf("%d", &choice);

//         switch(choice) {
//             case 1 :
//                 push();
//                 break;
//             case 2 :
//                 pop();
//                 break;
//             case 3 :
//                  show();
//                  break;
//             case 4 :
//                  exit(0);

//             default :
//                 printf("Invalid Choice!!");
//         }
//     }
//     getch();
// }

// void push() {
//     int x;

//     if(top == SIZE - 1) {
//         printf("overflow!!");
//     }
//     else {
//         printf("Enter the element to be added onto the stack: ");
//         scanf("%d", &x);
//         top = top + 1;
//         inp_array[top] = x;
//     }
// }

// void pop() {
//     if(top == -1) {
//         printf("Underflow!!");
//     }
//     else {
//         printf("Popped element: %d", inp_array[top]);
//         top = top - 1;
//     }
// }

// void show() {
//     if(top == -1) {
//         printf("Underflow!!");
//     }
//     else {
//         printf("Element present in the stack:");
//         for(int i = top; i>=0; i--) {
//             printf("%d\n", inp_array[i]);
//         }
//     }
// }

// 2. WAP to C implement a Queue operations

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #define MAX 50

// void insert();
// void delete();
// void display();
// int queue_array[MAX];
// int rear = -1;
// int front = -1;

// void main() {
//     int choice;
//     while(1) {
//         printf("1. Insert element in queue\n");
//         printf("2. Delete element from queue\n");
//         printf("3. Display all element of queue\n");
//         printf("4. Quit\n");
//         printf("Enter Your Choice: ");
//         scanf("%d", &choice);
//         switch(choice) {
//             case 1:
//             insert();
//             break;
//             case 2:
//             delete();
//             break;
//             case 3:
//             display();
//             break;
//             case 4:
//             exit(1);
//             default :
//             printf("Wrong Choice\n");
//         }
//     }
//     getch();
// }

// void insert() {
//     int add_item;
//     if(rear == MAX - 1) {
//         printf("Queue Overflow\n");
//     }
//     else {
//         if(front == -1) {
//             front = 0;
//         }
//         printf("Insert element in queue: ");
//         scanf("%d", &add_item);
//         rear = rear + 1;
//         queue_array[rear] = add_item;
//     }
// }

// void delete() {
//     if(front == -1 || front > rear) {
//         printf("Queue Underflow\n");
//         return;
//     }
//     else {
//         printf("Delete element from queue: %d\n", queue_array[front]);
//         front = front + 1;
//     }
// }

// void display() {
//     int i;
//     if(front == -1) {
//         printf("Queue Underflow\n");
//     }
//     else {
//         printf("Display all element of queue:\n");
//         for(i = front; i <= rear; i++) {
//             printf("%d\n", queue_array[i]);
//         }
//         printf("\n");
//     }
// }

// 3. WAP to C implement a Binary Search Tree(BST)

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// struct node {
//     int key;
//     struct node *left, *right;
// };

// struct node* newNode(int item) {
//     struct node* temp = (struct node*) malloc(sizeof(struct node));
//     temp->key = item;
//     temp->left = temp->right = NULL;
//     return temp;
// }

// struct node* insert(struct node* node, int key) {
//     if(node == NULL) {
//         return newNode(key);
//     }

//     if(key < node->key) {
//         node->left = insert(node->left, key);
//     }

//     else if(key > node->key) {
//         node->right = insert(node->right, key);
//     }
//     return node;
// }

// struct node* search(struct node* root, int key) {
//     if(root == NULL || root->key == key) {
//         return root;
//     }

//     if(root-> key < key) {
//         return search(root->right, key);
//     }

//     return search(root->left, key);
// }
// void main() {
//     struct node* root = NULL;
//     root = insert(root, 50);
//     insert(root, 30);
//     insert(root, 20);
//     insert(root, 40);
//     insert(root, 70);
//     insert(root, 60);
//     insert(root, 80);

//     int key = 6;

//     if(search(root, key) == NULL) {
//         printf("%d is not found\n", key);
//     }
//     else {
//         printf("%d is found\n", key);
//     }

//     key = 60;

//     if(search(root, key) == NULL) {
//         printf("%d is not found\n", key);
//     }
//     else {
//         printf("%d is found\n", key);
//     }
//     getch();
// }

// 4. WAP in C to sort an array of character (alphabet) using Selection Sort principle.

// #include<stdio.h>
// #include<conio.h>

// void selectionSort(char arr[], int n) {
//     int i, j, min_index;
//     for(i = 0; i < n - 1; i++) {
//         min_index = i;

//         for(j = i + 1; j < n; j++) {
//             if(arr[j] < arr[min_index]) {
//                 min_index = j;
//             }
//         }

//         if(min_index != i) {
//             char temp = arr[i];
//             arr[i] = arr[min_index];
//             arr[min_index] = temp;
//         }
//     }
// }
// void main() {
//     char arr[] = {'g', 'f', 'e', 'd', 'c', 'b', 'a'};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%c ", arr[i]);
//     }

//     printf("\n");

//     selectionSort(arr, n);

//     printf("Sorted array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%c ", arr[i]);
//     }
//     getch();
// }

// 4. sorting integer mothods

// #include<stdio.h>
// #include<conio.h>

// void selectionSort(int arr[], int n) {
//     int i, j, min_index;
//     for(i = 0; i < n - 1; i++) {
//         min_index = i;

//         for(j = i + 1; j < n; j++) {
//             if(arr[j] < arr[min_index]) {
//                 min_index = j;
//             }
//         }

//         if(min_index != i) {
//             char temp = arr[i];
//             arr[i] = arr[min_index];
//             arr[min_index] = temp;
//         }
//     }
// }
// void main() {
//     int arr[] = {3, 2, 5, 0, 4, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");

//     selectionSort(arr, n);

//     printf("Sorted array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     getch();
// }

// 5. Linked List (Single Linked List)

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };
// void main() {
//     struct Node* head = (struct Node*) malloc(sizeof(struct Node));
//     struct Node* second = (struct Node*) malloc(sizeof(struct Node));
//     struct Node* third = (struct Node*) malloc(sizeof(struct Node));
//     struct Node* fourth = (struct Node*) malloc(sizeof(struct Node));

//     head->data = 10;
//     second->data = 20;
//     third->data = 30;
//     fourth->data = 40;

//     head->next = second;
//     head->next = third;
//     head->next = fourth;
//     head->next = NULL;

//     struct Node* temp = head;
//     printf("Linked List: ");
//     while(temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");

//     free(head);
//     free(second);
//     free(third);
//     free(fourth);
//     getch();
// }

// 6. Binary Search

// #include<stdio.h>
// #include<conio.h>

// int binarySearch(int arr[], int n, int target) {
//     int low = 0;
//     int high = n - 1;

//     while(low <= high) {
//         int mid = low + (high - low) / 2;

//         if(arr[mid] == target) {
//             return mid;
//         }
//         else if(arr[mid] < target) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }

//     return -1;
// }
// void main() {
//     int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72, 91};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 23;

//     int result = binarySearch(arr, n, target);

//     if(result != -1) {
//         printf("Element found at index %d\n", result);
//     }
//     else {
//         printf("Element not found in the array\n");
//     }
//     getch();
// }

// 7. Linked List Traversal

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// void append(struct Node** headRef, int data) {
//     struct Node* newNode = createNode(data);
//     if(*headRef == NULL) {
//         *headRef = newNode;
//     }
//     else {
//         struct Node* current = *headRef;
//         while(current->next != NULL) {
//             current = current->next;
//         }
//         current->next = newNode;
//     }
// }

// void tarverse(struct Node* head) {
//     struct Node* current = head;
//     while(current != NULL) {
//         printf("%d -> ", current->data);
//         current = current->next;
//     }
//     printf("NULL\n");
// }

// void freeLinkedList(struct Node* head) {
//     struct Node* current = head;
//     while(current != NULL) {
//         struct Node* next = current->next;
//         free(current);
//         current == next;
//     }
// }
// void main() {
//     struct Node* head = NULL;

//     append(&head, 1);
//     append(&head, 2);
//     append(&head, 3);

//     printf("Linked List: ");
//     tarverse(head);

//     freeLinkedList(head);
//     getch();
// }

// 6. WAP in C to implement Linked List

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// struct node {
//     int data;
//     struct node* next;
// };

// struct node* createNode(int data) {
//     struct node* newNode = (struct node*) malloc(sizeof(struct node));
//     if(newNode != NULL) {
//         newNode->data = data;
//         newNode->next = NULL;
//     }
//     return newNode;
// }

// void insertAtBeginning(struct node** head, int data) {
//     struct node* newNode = createNode(data);
//     if(newNode != NULL) {
//         newNode->next = *head;
//         *head = newNode;
//     }
// }

// void insertAtEnd(struct node** head, int data) {
//     struct node* newNode = createNode(data);
//     if(newNode != NULL) {
//         if(*head == NULL) {
//             *head = newNode;
//         }
//         else {
//             struct node* temp = *head;
//             while(temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//         }
//     }
// }

// void displayLinkedList(struct node* head) {
//     printf("Linked List: ");
//     while(head != NULL) {
//         printf("%d -> ", head->data);
//         head = head->next;
//     }
//     printf("NULL\n");
// }

// void freeLinkedList(struct node* head) {
//     struct node* temp;
//     while(head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
// }
// void main() {
//     struct node* head = NULL;
//     insertAtBeginning(&head, 3);
//     insertAtBeginning(&head, 2);
//     insertAtBeginning(&head, 1);

//     displayLinkedList(head);

//     insertAtEnd(&head, 4);

//     displayLinkedList(head);

//     freeLinkedList(head);
//     getch();
// }

// 7. WAP in C to implement Double Linked List

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// struct node {
//     int data;
//     struct node* prev;
//     struct node* next;
// };

// struct node* createNode(int data) {
//     struct node* newNode = (struct node*) malloc(sizeof(struct node));
//     if(newNode != NULL) {
//         newNode->data = data;
//         newNode->prev = NULL;
//         newNode->next = NULL;
//     }
//     return newNode;
// }

// void insertAtBeginning(struct node** head, int data) {
//     struct node* newNode = createNode(data);
//     if(newNode != NULL) {
//         if(*head == NULL) {
//             *head = newNode;
//         }
//         else {
//             newNode->next = *head;
//             (*head)->prev = newNode;
//             *head = newNode;
//         }
//     }
// }

// void insertAtEnd(struct node** head, int data) {
//     struct node* newNode = createNode(data);
//     if(newNode != NULL) {
//         if(*head == NULL) {
//             *head = newNode;
//         }
//         else {
//             struct node* temp = *head;
//             while(temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//             newNode->prev = temp;
//         }
//     }
// }

// void displayForward(struct node* head) {
//     printf("Forward Linked List: ");
//     while(head != NULL) {
//         printf("%d -> ", head->data);
//         head = head->next;
//     }
//     printf("NULL\n");
// }

// void displayReverse(struct node* head) {
//     if(head == NULL) {
//         return;
//     }

//     while(head->next != NULL) {
//         head = head->next;
//     }

//     printf("Reverse Linked List: ");
//     while(head != NULL) {
//         printf("%d -> ", head->data);
//         head = head->prev;
//     }
//     printf("NULL\n");
// }

// void freeLinkedList(struct node* head) {
//     struct node* temp;
//     while(head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
// }
// void main() {
//     struct node* head = NULL;
//     insertAtBeginning(&head, 3);
//     insertAtBeginning(&head, 2);
//     insertAtBeginning(&head, 1);

//     displayForward(head);

//     insertAtEnd(&head, 4);

//     displayForward(head);

//     displayReverse(head);

//     freeLinkedList(head);
//     getch();
// }

// 8. WAP in C to implement stack using Linked List

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// struct stack {
//     int data;
//     struct stack *next;
// };

// struct stack *head = NULL;

// void push(int val) {
//     struct stack* newNode = (struct stack*) malloc(sizeof(struct stack));
//     newNode->data = val;
//     newNode->next = head;
//     head = newNode;
// }

// void pop() {
//     struct stack* temp;
//     if(head == NULL) {
//         printf("Stack is Empty\n");
//     }
//     else {
//         printf("Popped element: %d\n", head->data);
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
// }

// void printList() {
//     struct stack* temp = head;
//     while(temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }
// void main() {
//     push(10);
//     push(20);
//     push(30);

//     printf("Linked List: ");
//     printList();
//     printf("\n");

//     pop();
//     printf("After the pop, the new linked list:\n");
//     printList();
//     printf("\n");

//     pop();
//     printf("After the pop, the new linked list:\n");
//     printList();
//     printf("\n");
//     getch();
// }

// 9. WAP in C to sort an array of integers using Quick Sort principle.

// #include<stdio.h>
// #include<conio.h>

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;

//     for(int j = low; j <= high - 1; j++) {
//         if(arr[j] < pivot) {
//             i++;
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i + 1], &arr[high]);
//     return i + 1;
// }

// void quickSort(int arr[], int low, int high) {
//     if(low < high) {
//         int pivot = partition(arr, low, high);

//         quickSort(arr, low, pivot - 1);
//         quickSort(arr, pivot + 1, high);
//     }
// }

// void printArray(int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// void main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Unsorted array:\n");
//     printArray(arr, n);

//     quickSort(arr, 0, n - 1);

//     printf("Sorted array:\n");
//     printArray(arr, n);
//     getch();
// }

// 10. WAP in C to sort an array of integers using shell Sort principle.

// #include<stdio.h>
// #include<conio.h>

// void shellSort(int arr[], int n) {
//     for(int gap = n / 2; gap > 0; gap = gap / 2) {
//         for(int i = gap; i < n; i++) {
//             int temp = arr[i];
//             int j;
//             for(j = i; j >= gap && arr[j - gap] > temp; j = j - gap) {
//                 arr[j] = arr[j - gap];
//             }
//             arr[j] = temp;
//         }
//     }
// }

// void printArray(int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// void main() {
//     int arr[] = {64, 34, 89, 90, 11, 37, 22};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Unsorted array:\n");
//     printArray(arr, n);

//     shellSort(arr, n);

//     printf("Sorted array:\n");
//     printArray(arr, n);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// struct node {
//     int key;
//     struct node *left, *right;
// };

// struct node* newNode(int item) {
//     struct node* temp = (struct node*) malloc(sizeof(struct node));
//     temp->key = item;
//     temp->left = temp->right = NULL;
//     return temp;
// }

// struct node* insert(struct node* node, int key) {
//     if(node == NULL) {
//         return newNode(key);
//     }

//     if(key < node->key) {
//         node->left = insert(node->left, key);
//     }
//     else if(key > node->key) {
//         node->right = insert(node->right, key);
//     }
//     return node;
// }

// struct node* search(struct node* root, int key) {
//     if(root == NULL || root->key == key) {
//         return root;
//     }
//     if(root-> key < key) {
//         return search(root->right, key);
//     }
//     return search(root->left, key);
// }
// void main() {
//     struct node* root = NULL;
//     root = insert(root, 50);
//     insert(root, 30);
//     insert(root, 20);
//     insert(root, 40);
//     insert(root, 70);
//     insert(root, 60);
//     insert(root, 80);

//     int key = 6;
//     if(search(root, key) == NULL) {
//         printf("%d is not found\n", key);
//     }
//     else {
//         printf("%d is found\n", key);
//     }

//     key = 60;
//     if(search(root, key) == NULL) {
//         printf("%d is not found\n", key);
//     }
//     else {
//         printf("%d is found\n", key);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void func1();
// void func2();
// void func3();
// void func4();
// void main() {
//     func1();
//     getch();
// }

// void func1() {
//     printf("Function one\n");
//     func2();
// }

// void func2() {
//     printf("Function two\n");
//     func3();
// }

// void func3() {
//     printf("Function three\n");
//     func4();
// }

// void func4() {
//     printf("Function four\n");
//     func1();
// }

// #include<stdio.h>
// #include<conio.h>

// int fact(int n);
// void main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int result = fact(n);
//     printf("Factorial is : %d\n", result);
//     getch();
// }

// int fact(int n) {
//     if(n == 0 || n == 1) {
//         return 1;
//     }
//     else {
//         return n * fact(n - 1);
//     }
// }

// 3. (b) Write a function in C to insert an element in the nth position of a doubly linked list.
// #include<stdio.h>
// #include<stdlib.h>

// struct Node {
//     int data;
//     struct Node* prev;
//     struct Node* next;
// };

// void insertAtN(struct Node** head, int data, int position) {
//     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->prev = NULL;
//     newNode->next = NULL;

//     if(position == 1) {
//         newNode->next = *head;
//         if(*head != NULL) {
//             (*head)->prev = newNode;
//         }
//         *head = newNode;
//         return;
//     }

//     struct Node* temp = *head;
//     for(int i = 1; i < position - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }

//     if(temp == NULL) {
//         printf("Invalid Position.\n");
//         free(newNode);
//         return;
//     }

//     newNode->prev = temp;
//     newNode->next = temp->next;
//     if(temp->next != NULL) {
//         temp->next->prev = newNode;
//     }
//     temp->next = newNode;
// }

// void printList(struct Node* head) {
//     while(head != NULL) {
//         printf("%d ", head->data);
//         head = head->next;
//     }
//     printf("\n");
// }
// int main() {
//     struct Node* head = NULL;

//     insertAtN(&head, 10, 1);
//     insertAtN(&head, 20, 2);
//     insertAtN(&head, 30, 2);
//     insertAtN(&head, 40, 1);

//     printf("Doubly Linked List:\n");
//     printList(head);
//     return 0;
// }

// 3. (c) (i) Bubble Sort Algorithm

// #include<stdio.h>
// #include<conio.h>

// void bubbleSort(int array[], int size) {
//     for(int step = 0; step < size - 1; step++) {
//         for(int i = 0; i < size - step - 1; i++) {
//             if(array[i] > array[i + 1]) {
//                 int temp = array[i];
//                 array[i] = array[i + 1];
//                 array[i + 1] = temp;
//             }
//         }
//     }
// }

// void printArray(int array[], int size) {
//     for(int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }

// void main() {
//     int data[] = {-2, 67, 28, -5};
//     int size = sizeof(data) / sizeof(data[0]);
//     bubbleSort(data, size);

//     printf("Sorted Array in Ascending order:\n");
//     printArray(data, size);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void bubbleSort(int array[], int size) {
//     for(int step = 0; step < size - 1; step++) {
//         int swapped = 0;
//         for(int i = 0; i < size - step - 1; i++) {
//             if(array[i] > array[i + 1]) {
//                 int temp = array[i];
//                 array[i] = array[i + 1];
//                 array[i + 1] = temp;
//                 swapped = 1;
//             }
//         }
//         if(swapped == 0) {
//             break;
//         }
//     }
// }

// void printArray(int array[], int size) {
//     for(int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }
// void main() {
//     int data[] = {-2, 45, 0, 11, -9};
//     int size = sizeof(data) / sizeof(data[0]);

//     bubbleSort(data, size);
//     printf("Sorted Array in Ascending order:\n");
//     printArray(data, size);
//     getch();
// }

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 50

void insert();
void delete();
void display();

int queue_array[MAX];
int front = -1;
int rear = -1;

void main() {
    int choice;
    printf("1. Insert the element\n");
    printf("2. Delete the element\n");
    printf("3. Display the element\n");
    printf("4. Quit\n");
    printf("Enter Your Choice:\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
        insert();
        break;
        case 2:
        delete();
        break;
        case 3:
        display();
        break;
        case 4:
        exit(1);
        default:
        printf("Wrong Choice\n");
    }
    getch();
}

void insert() {
    int add_item;
    if(rear == MAX - 1) {
        printf("Queue Overflow\n");
    }
    else {
        if(front == -1) {
            front = 0;
        }
        printf("Insert the element in queue: ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}

void delete() {
    if(front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }
    else {
        printf("Deleted the element: %d\n", queue_array[front]);
        front = front + 1;
    }
}

void display() {
    if(front == -1) {
        printf("Queue Underflow\n");
    }
    else {
        printf("Display all element in the queue:\n");
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue_array[i]);
        }
        printf("\n");
    }
}