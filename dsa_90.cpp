//Leetcode[Meeting Room]
//1st solution
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canAttendMeetings(vector<vector<int>>& intervals) {
    if (intervals.empty()) return true;

    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });
    for (int i = 1; i < intervals.size(); ++i) {
        if (intervals[i][0] < intervals[i - 1][1]) {
            return false; 
        }
    }

    return true;
}
int main() {
    vector<vector<int>> intervals = {{0, 30}, {5, 10}, {15, 20}};
    bool result = canAttendMeetings(intervals);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
/*2nd solution
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool canAttendMeetings(vector<vector<int>> &time) {
 sort(time.begin(),time.end(),[](vector<int> &a,vector<int> &b) {
    return a[0]<b[0];
   });
 for (int i=1;i<time.size();i++) {
  if (time[i][0]<time[i-1][1]){
   return false;
  }
 }
 return true;
}
int main(){
 vector<vector<int>>time={{7,10},{2,4}};
 string a=(canAttendMeetings(time)?"true":"false");
 cout<<"Output: "<<a;
 return 0;
}*/
