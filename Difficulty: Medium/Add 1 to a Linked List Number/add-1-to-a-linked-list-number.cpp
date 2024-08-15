//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* nex = NULL;
        while(curr != NULL){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        return prev;
    }
    
    void addone(Node* head1){
        
        Node* head = head1;
        Node* prev = head;
        while(head != NULL && head->data == 9 ){
            head->data = 0;
            prev= head;
            head = head->next;
            
        }

        if(prev -> next == NULL && prev->data == 0){
            Node* node = new Node(1);
            prev->next = node;
        }
        else{
            head->data += 1;
        }
        
    }
    
    
    Node* addOne(Node* head) {
        if(head == NULL){
            return head;
        }
        head = reverse(head);
        int last = head->data;
        
        if(last < 9){
            head->data += 1;
            return reverse(head);
        }
        else{
            addone(head);
        }
        
        return reverse(head);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends