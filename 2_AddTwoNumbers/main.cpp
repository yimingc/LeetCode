#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode *p = new ListNode(0), *p0 = p;
        int extra = 0;
        while ( l1 || l2 || extra)
        {
            int sum = (l1 ? l1->val : 0) + (l2 : l2->val : 0) + extra;
            extra = sum / 10;
            p->next = new ListNode(sum%10);
            p = p->next;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        return p0->next;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
