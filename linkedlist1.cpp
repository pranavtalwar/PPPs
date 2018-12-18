#include <iostream>
#include <cstdlib>
using namespace std;
class Node
{
public:
    Node* next;
    int key;
    int value;
};
class LinkedList
{
public:
    int length;
    Node* head;

    LinkedList();
    ~LinkedList();
    void add(int k, int v);
    void print();
};
LinkedList::LinkedList(){
    this->length = 0;
    this->head = NULL;
}
LinkedList::~LinkedList(){
}
void LinkedList::add(int k, int v){
    Node* node = new Node();
    node->key = k;
    node->value = v;
    node->next = this->head;
    this->head = node;
    this->length++;
}

void LinkedList::print(){
    Node* head = this->head;
    while(head){
        cout <<"Key:"<<head->key<<",value:"<<head->value<<endl;
        head = head->next;
    }
}

int main()
{
    LinkedList* list = new LinkedList();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        int v;
        cin>>k>>v;
        list->add(k,v);
    }
    list->print();
    delete list;
    return 0;
}
