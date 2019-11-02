#include <iostream>  
using namespace std;  

//Source: https://www.javatpoint.com/prime-number-program-in-cpp

int isPrime(int n)
{
int i, m=0;
m=n/2;  
for(i=2; i <= m; i++)  
{  
	if(n % i == 0)
			return 0;
}  
}

int main()  
{  
  int n = 0;
  cout << "Enter the Number to check Prime: ";  
  cin >> n;  
  int result = isPrime(n);
  if(result)
	  cout << "Number is Prime."<<endl;  
  else
    cout<<"Number is not Prime."<<endl;  
return 0;  
}
