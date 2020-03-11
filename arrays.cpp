#include<iostream>
#include<array>

using namespace std;

int main()
 {

array <int,5> arr,arr2;
array<int,INT_MAX> arr3;

cout<<arr3.size()<<endl;
arr.fill(1);
           //to initialise with a particular value
cout<<arr[2]<<endl;
cout<<arr2[0]<<endl<<arr2.size()<<endl<<endl;

cout<<"size is "<<arr.size()<<endl;    //ans is 5     // to get size of array

arr[3] = 8;
cout<< arr.at(3)<<"\n";

cout<<arr.front();
cout<<endl<<arr.back()<<endl;

// auto s = arr.begin(),e = arr.end();
//
// cout<<endl<< *s << *e<<endl;


return 0;
}
