#include<iostream>

using namespace std;

int main()
  {
    int i ,b ,n ;
    cout<<"enter the number " ;
    cin >>n ;
    for(i=1; i<=n ;i++)
    {   char  ch = 'A' ; 
     for(b=1;b<=i;b++)
       {
           cout<<ch ;
           ch++ ;
      }   cout<<endl;
     
    }
    cout<<sizeof(int);
    return 0 ;
 }