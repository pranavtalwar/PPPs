#include <iostream>
#include <cstdlib>
using namespace std;
class Node
{
public:
    Node* next;
    int data;
};
class LinkedList
{
public:
    int length;
    Node* head;

    LinkedList();
    ~LinkedList();
    void add(int d);
    void print();
    bool isSorted();
    void reverse();
};
LinkedList::LinkedList(){
    this->length = 0;
    this->head = NULL;
}
LinkedList::~LinkedList(){
}
void LinkedList::add(int d){
    Node* node = new Node();
    node->data = d;
    node->next = this->head;
    this->head = node;
    this->length++;
}
bool LinkedList::isSorted(){
    Node* head = this->head;
    if(!head)
    {
        return true;
    }
    int prev;
    prev = head->data;
    head = head->next;
    while(head)
    {
        if(prev >= head->data)
        {
            return false;
        }
        prev = head->data;
        head = head->next;
    }
    return true;
}
void LinkedList::print(){
    Node* head = this->head;
    while(head){
        cout <<"Key:"<<head->data<<endl;
        head = head->next;
    }
}
void LinkedList::reverse(){
    Node* current = this->head;
    Node* prev = NULL;
    Node* next = NULL;
    while(current)
    {
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    }
    head = prev;
}
int main()
{
    LinkedList* list = new LinkedList();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        list->add(d);
    }
    list->print(); 
    list->reverse(); 
    list->print(); 
    return 0;
}
