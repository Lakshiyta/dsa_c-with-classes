// find the duplicate string from the sentence
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void findDuplicate(string str){
    vector<string> v;
    string temp;
    for(int i=0;i<str.length();i++){
       if (str[i] == ' ') {
            if (!temp.empty()) {
                v.push_back(temp);
                temp.clear();
            }
        } else {
            temp += str[i];
        }
    }
    if (!temp.empty()) {
        v.push_back(temp); 
    }
    //printing duplicate words
    for (int i = 0; i < v.size(); ++i) {
        if (v[i].empty()) continue; 
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[i] == v[j]) {
                cout << v[i] << endl;
                v[j].clear();
            }
        }
    }
}

int main(){
    string str;
    cout<<"Enter the string: "<<endl;
    getline(cin,str);
    cout << "The duplicate string is : ";
    findDuplicate(str);
    return 0;
}