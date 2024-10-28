//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int sumOfLastN_Nodes(struct Node* head, int n) {
        int len = 0;
        Node* temp = head; 
        while(temp){
            len++; 
            temp = temp->next; 
        }
        int select = len-n; 
        temp  = head; 
        
        while(select != 0){
            temp = temp->next; 
            select--; 
        }
        int sum = 0; 
        while(temp){
            sum+=temp->data; 
            temp = temp->next; 
        }
        return sum ;
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
        int n;
        cin >> n;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.sumOfLastN_Nodes(head, n) << endl;
    }
    return 0;
}
// } Driver Code Ends