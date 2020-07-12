#include <iostream>
#include <vector>

using namespace std;

int main() {
  
  vector<int> A{9,9,9};
  int i = A.size() - 1;
  int carry = 1;
  int tmp;
  while(i>=0){
    tmp = A[i] + carry;
    if(tmp == 10){
      A[i] = 0;
      carry =1;
    }
    else{
      A[i] = tmp;
      carry = 0;
    }
    i--;
  }
  if(carry)
    A.insert(A.begin(),carry);
  std::cout << "Incremented value: " ;
  for(int i=0; i < A.size(); i++)
   std::cout << A.at(i) << ' ';
}