void printArray(int* arr, int length);
void insertionSort(int* arr, int length);
void swap(int* arr,int min, int j);
void selectionSort(int* arr, int len);
void bubbleSort(int* arr, int len);
struct node {
    int key;
    struct node* left;
    struct node* right;
}node;
struct node* newNode(int key);
void printPostorder(struct node* node);
void printInorder(struct node* node);
void printPreorder(struct node* node);
struct node* insert(struct node* node, int key);
struct node* deleteNode(struct node* root, int key);
struct node* minValueNode(struct node* node);
void print2DUtil(struct node *root, int space);
void print2D(struct node *root);
void func(int arr[], int i, int j);