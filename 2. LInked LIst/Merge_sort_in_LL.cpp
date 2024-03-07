class Solution{
  private:
    Node* getMid(Node* head){
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    Node* merge(Node* left, Node* right){
        Node* dummy = new Node(-1);
        Node* temp = dummy;
        
        while(left!=NULL && right!=NULL){
            if(left->data < right->data){
                temp->next = left;
                temp = temp->next;
                left = left->next;
            }
            else{
                temp->next = right;
                temp = temp->next;
                right = right->next;
            }
        }
        while(left!=NULL){
            temp->next = left;
            temp =temp->next;
            left = left->next;
        }
        while(right!=NULL){
            temp->next = right;
            temp =temp->next;
            right = right->next;
        }
        return dummy->next;
    }
  public:
    Node* mergeSort(Node* head) {
        if(head == NULL || head->next == NULL) return head;
        Node* mid = getMid(head);
        
        Node* left = head;
        Node* right = mid->next;
        mid->next = NULL;
        
        left = mergeSort(left);
        right = mergeSort(right);
        
        Node* answer = merge(left,right);
        return answer;
    }
};
