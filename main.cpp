#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;
vector<int> cur;
void func(int cnt, int ind) {
if(cnt == M){
	for (int num : current){
		cout << num << " ";
	}
	cout << endl;
	return;
}

for (int i=ind; i<N; ++i){
	current.push_back(vec[i]);
	func(i+1,cnt+1);
	current.pop_back();
}

}

int main() {
   cin >> N >> M;
   for (z=1; z<=N; z++){
	   vec.push_back(z);
   }
   func(0,0);
}
