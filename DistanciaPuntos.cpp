#include <bits/stdc++.h>
using namespace std;
int main() {

  double X1, X2, Y1, Y2;
  double Op1=0, Op2=0, Rai=0;
  cout<<"X1: ";
  cin>>X1;
  cout<<"Y1: ";
  cin>>Y1;
  cout<<"X2: ";
  cin>>X2;
  cout<<"Y2: ";
  cin>>Y2;
  Op1=(X2 - X1)*(X2 - X1);
  Op2=(Y2 - Y1)*(Y2 - Y1);
  Rai=Op1+Op2;
  cout<<sqrt(Rai);
  
  return 0;
}