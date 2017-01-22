#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {}
};

ListNode* reverseLinkedList(ListNode* head)
{
    ListNode *curr=head, *pre=NULL, *next=NULL;
    while( curr )
    {
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
    }
    return pre;
}

ListNode* reverseLinkedList1(ListNode* head)
{
    // empty list or singleton
    if ( !head || !head->next )
       return head;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
