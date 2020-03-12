#include<iostream>
#include<vector>

using namespace std;

int main()
 {
vector< pair<int,int> > v1(200,make_pair(-2,-3));

// cout<<v1[2]<<endl;

for(int i=1;i<100;i++){
    v1[i] = make_pair(2*i , 4*(i+1));
}

for(int i=0;i<5;i++){
    cout<<v1[i].first << "   "<<v1[i].second<<endl;
}

auto itr = v1.begin();        //auto can also be used to declare iterator
// vector< pair<int,int> > :: iterator itr = v1.begin();

v1.insert(itr+1,make_pair(200,300));
for(int i=0;i<5;i++){
    cout<<endl<<endl<<v1[i].first << "   "<<v1[i].second<<endl;
}


return 0;
}
