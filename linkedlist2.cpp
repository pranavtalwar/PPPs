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
    bool isSorted();
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
    if(list->isSorted())
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
    
}
