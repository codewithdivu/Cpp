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



// approach-3

class Solution
{
    public:
    Node *copyList(Node *head)
    {
        
        // 1. create clone list
        
        Node* dummy = new Node(-1);
        Node* temp = dummy;
        Node* femp = head;
        
        while(femp!=NULL){
            Node* newNode = new Node(femp->data);
            temp->next = newNode;
            temp = temp->next;
            femp = femp->next;
        }
        
        // 2. add cloneNodes between original nodes
        
        Node* originalHead = head;
        Node* cloneHead = dummy->next;
        
        while(originalHead!=NULL && cloneHead!=NULL){
            Node* next = originalHead->next;
            originalHead->next = cloneHead;
            originalHead = next;
            
            next = cloneHead->next;
            cloneHead->next = originalHead;
            cloneHead = next;
        }
        
        // 3. set random pointers
        
        Node* gemp = head;
        
        while(gemp!=NULL){
            if(gemp->next!=NULL){
                if(gemp->arb != NULL){
                    gemp->next->arb = gemp->arb->next;
                }else{
                    gemp->next->arb = gemp->arb;
                }
            }
            gemp = gemp->next->next;
        }
        
        
        // 4. revert the changes
                
        Node* originalNode = head;
        Node* cloneNode = dummy->next;
        
        
        while(originalNode!=NULL && cloneNode!=NULL){
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            
            if(originalNode!=NULL){
                cloneNode->next = originalNode->next;
            }
            cloneNode = cloneNode->next;
        }
        
        
        // 5. return answer
        
        return dummy->next;
    }

};
