Data Structures and Algorithms Assignment

Bsccs/2025/43643 Clinton Kiplagat
Bsccs/2025/58367 Michelle Mutheu
Bsccs/2025/59872 Jacinta Mwende
Bsccs/2025/59368 Joan Mulei
BSCCS/2025/39591 Mulki Issack
BSCCS/2025/59424 Yvonne Mureithi
BSCCS/2025/56368 Hurley Jules
BSCCS/2025/43709 Sumeya Mohamed
BSCCS/2025/45195 KANYI CHAPLINE
BSCCS/2025/59799 Filsan Farah
Question 1: Write code to represent each data structure classification and types
 Data structures are divided into Linear (Array, Linked List, Stack, Queue) and Non-Linear (Tree, Graph). The following C language examples represent each type.

Array Example:

#include <stdio.h>
int main() {
    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++) printf("%d ", arr[i]);
    return 0;
}

Linked List Example:

#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node* next; };
int main() {
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 10; head->next = NULL;
    printf("%d", head->data);
    return 0;
}

Stack Example:

#include <stdio.h>
int stack[5], top=-1;
void push(int v){ if(top<4) stack[++top]=v; }
void pop(){ if(top>=0) top--; }
int main(){ push(10); push(20); pop(); printf("%d", stack[top]); return 0; }

Queue Example:

#include <stdio.h>
int queue[5], front=-1, rear=-1;
void enqueue(int v){ if(front==-1) front=0; if(rear<4) queue[++rear]=v; }
void dequeue(){ if(front<=rear) front++; }
int main(){ enqueue(10); enqueue(20); dequeue(); printf("%d", queue[front]); return 0; }

Tree Example:

#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node *left,*right; };
struct Node* newNode(int v){ struct Node* n=malloc(sizeof(struct Node)); n->data=v; n->left=n->right=NULL; return n; }
int main(){ struct Node* root=newNode(1); root->left=newNode(2); root->right=newNode(3); printf("%d", root->data); return 0; }

Graph Example:

#include <stdio.h>
int main(){ int graph[3][3]={{0,1,1},{1,0,1},{1,1,0}}; 
printf("Graph created"); return 0; }
Question 2: Where data structures are applied and reasons
Arrays are used in storing lists such as student marks because they allow fast access using index positions.
 Linked lists are used in applications like music playlists because they allow easy insertion and removal of items. 
Stacks are used in undo and redo operations because they follow Last-In-First-Out order. 
Queues are used in printer systems and scheduling because they follow First-In-First-Out order. 
Trees are used in file systems and databases because they organize data hierarchically. 
Graphs are used in social networks and navigation systems because they show relationships between objects.
Question 3: Examples of applications using data structures and algorithms
Arrays with searching algorithms are used in school systems to find student records quickly. 
Stacks are used in calculators to evaluate expressions. 
Queues with scheduling algorithms are used in operating systems to manage tasks. 
Trees with binary search algorithms are used in databases to locate data efficiently. 
Graphs with shortest path algorithms are used in map applications to determine the best routes.

Question 4: How data structures and algorithms work within systems
Data structures organize data in memory while algorithms provide step-by-step procedures to process that data. In computer systems, queues help manage processes, stacks manage function calls, trees help store and search database records, and graphs assist in network routing. These structures improve performance by making operations faster and more efficient.
