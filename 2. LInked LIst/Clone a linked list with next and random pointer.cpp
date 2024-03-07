class Solution
{
    private:
    void print(Node *root) {
        Node *temp = root;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout<<endl;
    }
    public:
    Node *copyList(Node *head)
    {
        Node* dummy = new Node(-1);
        Node* temp = dummy;
        
        Node* femp = head;
        unordered_map<Node*,Node*> mp;
        
        while(femp!=NULL){
            Node* newNode = new Node(femp->data);
            temp->next = newNode;
            mp[femp] = newNode;
            temp = temp->next;
            femp = femp->next;
        }
        
        Node* clonedLL = dummy->next;
        
        
        Node* first = head;
        Node* second = clonedLL;
        
        
        while(first!=NULL && second!=NULL){
            if(first->arb != NULL) second->arb = mp[first->arb];
            first = first->next;
            second = second->next;
        }
        
        return clonedLL;
    }

};
