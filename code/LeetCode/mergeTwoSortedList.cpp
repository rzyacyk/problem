//
//
// @..*
//
//   ..
//  @..
//

#include "stdc++.h"


using namespace std;

ListNode * mergeTwoLists(ListNode* l1, ListNode* l2) {
    
    ListNode *dummy = new ListNode(- 1 );
    ListNode *cur = dummy;
    
    while (l1 && l2) {
        
        if (l1->val < l2-> val) {
            cur -> next = l1;
            l1 = l1-> next;
        } else {
            cur -> next = l2;
            l2 = l2-> next;
        }
        
        cur = cur-> next;
    }
    
    cur ->next = l1 ? l1 : l2;
    
    return dummy-> next;
}



int main(int argc, const char * argv[]) {
    // insert code here...
  
    
    std::cout << "Hello, World!\n";
    return 0;
}
