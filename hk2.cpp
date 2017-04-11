#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int test;
	cin>>test;
	while(test-->0){
		string str;
		cin>>str;
		long long int cost=0;
		int prev=str.size()-1;
		long long int prevcost=0;
		for(int i = str.size()-1 ; i>=0 ; i--){
			if(str[i]!='0'){
				long long int current=0;
				if(prev==i)
				current=0;
				else
				current=prev-i+1;
				cost+=current+prevcost;
				prevcost=current+prevcost;
				prev=i-1;
			}
		}

		cout<<cost<<endl;
	}
    return 0;
}

