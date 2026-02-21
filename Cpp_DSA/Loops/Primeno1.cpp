#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  bool isPrime = true;
  for(int i =2; i<=sqrt(n); i++){
    if (n%i==0){// i is a factor of n ; i completeky divides n; n is non-prime
        isPrime = false;
        break;
    }
  }

  if(isPrime){
    cout<<n<<" is a prime number"<<endl;
  }else{
    cout<<n<<" is not a prime number"<<endl;
  }
   return 0;
}