#include<iostream>
#include<array>

using namespace std;

int main()
 {


array <pair<string,int>,15> arr,arr2;

arr.fill(make_pair("none",-1));
cout<<arr[2].first<<"  "<<arr[2].second<<endl;

return 0;
}
