namespace BasicStruct{
    struct node{
        int id;
        node* neihbors[10];
    }
    int add_edge(node* self, node* neihbors);
    int remove_edge(node* self, node* neihbors);
    void print_edge(node* self);

    struct graph(
        int size;
        node** node;
    )
    const graph* init(int size);
}
