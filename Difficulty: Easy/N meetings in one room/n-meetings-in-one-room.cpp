//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxMeetings(int n, int start[], int end[]) {
        vector<std::pair<int, int>> meetings(n);
        for (int i = 0; i < n; ++i) {
            meetings[i] = {end[i], start[i]};
        }

        sort(meetings.begin(), meetings.end());

        int count = 0;
        int last_end_time = -1;

        for (const auto& meeting : meetings) {
            int end_time = meeting.first;
            int start_time = meeting.second;

            if (start_time > last_end_time) {
                count++;
                last_end_time = end_time;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends