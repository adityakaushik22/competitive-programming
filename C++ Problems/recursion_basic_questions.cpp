#include<bits/stdc++.h>
using namespace std;




// sum of digits 
// for ex: 1324 -> 1+3+2+4=10 so we can do this by recursion
// 1+f(324)+3+f(24)+2+f(4)+4=10

int digitsum(int n){
	if(n==0) return 0;

	return (n%10)+digitsum(n/10); // digit(n/10) se number kam ho jayega and n%10 se last digit mil jayegi jo plus hoti rahegi function call me se.
}


int digitproduct(int n){
	if(n==0) return 1;

	return (n%10)*digitproduct(n/10);
}



// concept ::::  n-- vs --n

void fun(int n){
	if(n==0) return;

	cout<<n<<" ";
	// fun(n--); now this line will give us an infinite loop and recursion will call the number we passed indefinitely/infinitely
	// thats because n-- means first get n then do -- so our function is going in the function call as 5 only before subtracting so its not subtracting first but its passing the n first then it will do -- but there's no command for -- in the function so its passing only n and not doing -- and so it will create an infinite loop

	 fun(--n); // so this will work as it will do the subtraction and then will pass the number so function call will stop at 0 and function will run without problem but in the above fun(n--) it will not do - minus first but will get n so it will take n indefinitly and will not reach the base condition n==0 since its not subtracting first so will print only n infinitely. 
	// we can also do fun(n-1) // output: if n=5, 5 4 3 2 1
}
static int sum=0;
void reversenum(int n){
	if(n==0) return;

	// reverse 123 = 3+f(23)*10 + 2+f(3)*10+3*10
	sum=sum*10+(n%10);
	reversenum(n/10);

}

int power2(int n){
	if(n==0) return 1;

	return 2*power2(n-1);
}


int reversenum2(int n){
	if(n==0) return 0;

	return ((n%10)*pow(10,(int)log10(n)) + reversenum2(n/10));	
}

int countdigits(int n){
	if(n==0) return 0;

	return 1+countdigits(n/10);
}

int count_zeroes(int n,int c){
	if(n==0) return c;

	int rem=n%10;

	if(rem==0){
		return count_zeroes(n/10,++c);
	}else{
		return count_zeroes(n/10,c);
	}
}


int numberofsteps(int n){

	if(n==0) return 0;

	if(n&1){
		return 1+numberofsteps(n-1);
	}else{
		return 1+numberofsteps(n>>1);
	}
}

void print(int n){
	if(n<1) return;

	cout<<n<<" ";
	print(n-1);

}

void print1(int i,int n){
	if(i>n) return;

	cout<<i<<" ";
	print1(i+1,n);
}


void backtrack_print(int i){
	if(i<1) return;

	backtrack_print(i-1);
	cout<<i<<" ";
}

void backtrack_print_reverse(int i,int n){
	if(i>n) return;

	backtrack_print_reverse(i+1,n);
	cout<<i<<" ";
}

int main(){
	  cout<<digitsum(1324)<<endl;
	  cout<<digitproduct(505)<<endl;

	  // fun(6); 

	  reversenum(326);
	  cout<<sum<<endl;

	  cout<<power2(5)<<endl;

	  cout<<reversenum2(456)<<endl;
	  cout<<countdigits(1234)<<endl;

	  cout<<count_zeroes(5003004,0)<<endl;

	  cout<<numberofsteps(14)<<endl;

	  print(5);
	  cout<<endl;
	  print1(1,5);
	  cout<<endl;


	  backtrack_print(7);
	  cout<<endl;

	  backtrack_print_reverse(1,7);

}