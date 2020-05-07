
void insertlast(int data int key) {
    
    struct node *link = (struct node*) malloc(sizeof(struct node));
    
    link->key = key;
    link->data = data;

    if(isEmpty())
        last = link;
    else
        last->next = link;

    //apontar para o anterior ultimo nó
    link->prev = last;

    //atualizar o ponteiro para o ultimo nó
    last = link;
    last->next = NULL;
    
}

void insertfirst(int data int key) {
    
    struct node *link = (struct node*) malloc(sizeof(struct node));
    
    link->key = key;
    link->data = data;

    if(isEmpty())
        head = link;
    else
        head->prev = link;

    //apontar primeiro 
    link->prev = head;

    //atualizar o ponteiro para o primeiro nó
    head = link;
    head->prev = link;
}

struct node* deletefirst () {

    struct node *templink = head;

    if(last->prev == NULL)
        last = NULL;
    else
        head->next->prev = NULL;

    head = head->next;

}

void displaybackward() {
    struct node *ptr = last;

    while(ptr != NULL) {
        printf("(%d,%d)", ptr->key, ptr->data);
        ptr = ptr->prev;

    }
}