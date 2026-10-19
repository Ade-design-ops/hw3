#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
  Stack<int> s;
  s.push(9);
  s.push(1);
  s.push(5);
  cout<<s.top()<< " "<< s.size() <<endl;
  s.pop();
  cout<<s.top()<<endl;
  s.pop();
  s.pop();
  cout<<s.empty()<< endl;
  try { s.pop(); }
  catch (std::underflow_error& e){
    cout << "pop threw" <<endl;
  }
  try{s.top();}
  catch (std::underflow_error& e){
    cout << "top threw" <<endl;
  }

  return 0;
}