/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int> list;
        ListNode* temp1=list1;
        ListNode* temp2=list2;

        if(!list.empty()) return nullptr;
        if(list1 ==nullptr && list2==nullptr){
            return nullptr;
        }


        
        while (temp1 !=nullptr )
        {
            if(temp1 == nullptr)break;
            list.push_back(temp1->val);
            temp1=temp1->next;
           ;
        }

        while ( temp2!=nullptr)
        {
            if(temp2 == nullptr)break;
            list.push_back(temp2->val);
            temp2=temp2->next;
        }

        sort(list.begin(),list.end());

        ListNode* head=new ListNode(list[0]);
        ListNode* curr=head;

        for(int i=1;i<list.size();i++){
            curr->next =new ListNode(list[i]);
            curr=curr->next;
        }
        curr->next=nullptr;

        return head;
    }
};