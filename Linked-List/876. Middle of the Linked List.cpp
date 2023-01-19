//思路一 遍歷
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        struct ListNode *M=head;
        struct ListNode *Ans=head;
        int cnt=0;
        while((head)!=NULL){
            head=head->next;
            cnt++;
        }
        for(int i=0;i<cnt/2;i++){
            Ans=Ans->next;
        }
        return Ans;
    }
};

//思路二 快慢指針
//快指針走兩步，慢指針走一步，當快指針碰到盡頭時，慢指針正好在中點
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        struct ListNode *Fast=head;
        struct ListNode *Slow=head;
        while(Fast!=NULL && Fast->next!=NULL){
            Fast=Fast->next->next;
            Slow=Slow->next;
        }
        return Slow;
    }
};
