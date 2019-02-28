// its generates the sequence of nos that are not consecutive.
#include<iostream>
using namespace std;

int main()
{
int no,i,j,m=0;
cout<<"Enter the no"<<endl;
cin>>no;

int array[no];
i=no;
while(i>=1)
{
array[m]=i;
m++;
i=i-2;
}
i=no-1;
while(i>=1)
 {
 array[m]=i;
  m++;
 i=i-2;
 }


for(int k=0;k<no;k++)
 {
 cout<<array[k]<<"\t";
 }
cout<<endl;
return 0; 
}
 
