#include<iostream>
#include<vector>

using namespace std;

int main()
 {
vector<int> v1;        // vector with no size initialised
vector<int> v2(5);    // to initialise vector with size 5
vector<int> v3(5,-1);   // vector of 5 blocks with initialised value -1

v3[0]=8;
cout<<v3.size()<<endl;
cout<< v3[2]<<endl<<v3.capacity()<<endl;

cout<<v2[2]<<endl;

v3.push_back(4);
cout<<v3.capacity()<<endl;

v3.pop_back();
cout<<v3.capacity()<<endl<<v3.size()<<endl;

// v3.clear();
// cout<<v3[0]<<endl;

cout<<v3.front()<<"  "<<v3.back()<<endl;

vector<int> :: iterator it= v3.begin();
v3.insert(it+2,34);                 // to insert element at index 2
cout<<endl<<v3[2]<<endl;

return 0;
}
