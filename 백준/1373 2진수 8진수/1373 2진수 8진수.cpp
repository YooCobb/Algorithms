#include <iostream>
#include <string>
using namespace std;

int main(){
	string data;
	cin >> data;
	
	int len = data.size();
	
	if(len == 1) cout << data[0] << endl;
	else if(len == 2) cout << (data[1]-'0')*2 + (data[0]-'0')<< endl;
	else {
		for(int i=len%3;i <len;i+=3) cout << (data[i]-'0')*4 + (data[i+1]-'0')*2 + (data[i+2]-'0');
		cout << endl;
	}
}
