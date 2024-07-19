//Lambda Function
#include<iostream>
using namespace std;
int main(){
	auto add=[](int a, int b){
		return a+b;
};
cout<<"Sum: "<<add(3,4)<<endl; //Output Sum:7
return 0;
}