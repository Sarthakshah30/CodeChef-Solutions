#include<iostream>
#include<stack>
#include<vector>
#include<string>
#include<set>
#include<utility>
#include<algorithm>

using namespace std;

int main(){
	int test;
	cin>>test;
	string results[] = {"sad","some","all"};
	while(test-->0){
		int n,k;
		cin>>n>>k;
		set<int> myset;
		vector<int> island[n];
		vector< pair<int,int> >island_ing_count;
		for(int i = 0 ; i<n ; i++){
			int x;
			cin>>x;
			island_ing_count.push_back(make_pair(x,i));
			for(int  j = 0 ; j< x ;j++)
			{
				int y;
				cin>>y;
				island[i].push_back(y);
			}
		}
		int result = 0;
		sort(island_ing_count.rbegin(),island_ing_count.rend());
		for(int i = 0 ; i < island_ing_count.size() ; i++){
			int ingredients = island_ing_count[i].first;
			int index = island_ing_count[i].second;
			int prevsize = myset.size();
			for(int j = 0 ; j<island[index].size() ; j++){
				myset.insert(island[index][j]);
			}
			if(prevsize==myset.size())
			result = 1;
		}
		if(myset.size()<k)
		result = 0;
		else if(result==1)
		result = 1;
		else
		result = 2;
		cout<<results[result]<<endl;
	}
}
