#include<iostream>
using namespace std;

//Sum function
int sum(int a, int b){
    return a+b;
}

//Difference function
int diff(int a, int b){
    return a-b;
}

//Product function
int product(int a, int b){
    return a*b;
}

//Division function
int div(int a, int b){
    return a/b;
}

//Modulus function
int mod(int a, int b){
    return a%b;
}

//Power function
int power(int a, int b){
    int result=1;
    for(int i=0;i<b;i++){
        result*=a;
    }
    return result;
}

//Factorial function
int fact(int a){
    int result=1;
    for(int i=1;i<=a;i++){
        result*=i;
    }
    return result;
}

//Fibonacci function
int fib(int a){
    int result=0;
    int n1=0,n2=1;
    for(int i=0;i<a;i++){
        result=n1+n2;
        n1=n2;
        n2=result;
    }
    return result;
}

//GCD function
int gcd(int a, int b){
    int result=1;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            result=i;
        }
    }
    return result;
}

//LCM function
int lcm(int a, int b){
    int result=1;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            result=i;
        }
    }
    return (a*b)/result;
    return result;
}

//Prime function
int prime(int a){
    int result=1;
    for(int i=2;i<a;i++){
        if(a%i==0){
            result=0;
            break;
        }
    }
    return result;
}

//Reverse function
int reverse(int a){
    int result=0;
    while(a>0){
        result=result*10+a%10;
        a/=10;
    }
    return result;
}

//Palindrome function
int palindrome(int a){
    int result=0;
    int temp=a;
    while(a>0){
        result=result*10+a%10;
        a/=10;
    }
    if(result==temp){
        return 1;
    }
    else{
        return 0;
    }
    return result;
}

//Armstrong function
int armstrong(int a){
    int result=0;
    int temp=a;
    while(a>0){
        result+=power(a%10,3);
        a/=10;
    }
    if(result==temp){
        return 1;
    }
    else{
        return 0;
    }
    return result;
}

//Perfect function
int perfect(int a){
    int result=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            result+=i;
        }
    }
    if(result==a){
        return 1;
    }
    else{
        return 0;
    }
    return result;
}

//Strong function
int strong(int a){
    int result=0;
    int temp=a;
    while(a>0){
        result+=fact(a%10);
        a/=10;
    }
    if(result==temp){
        return 1;
    }
    else{
        return 0;
    }
    return result;
}

//Prime factors function
int primefactors(int a){
    int result=0;
    for(int i=2;i<a;i++){
        if(a%i==0 && prime(i)){
            result++;
        }
    }
    return result;
}

//Sum of digits function
int sumofdigits(int a){
    int result=0;
    while(a>0){
        result+=a%10;
        a/=10;
    }
    return result;
}

//Sum of even digits function
int sumofevendigits(int a){
    int result=0;
    while(a>0){
        if((a%10)%2==0){
            result+=a%10;
        }
        a/=10;
    }
    return result;
}

//Sum of odd digits function
int sumofodddigits(int a){
    int result=0;
    while(a>0){
        if((a%10)%2!=0){
            result+=a%10;
        }
        a/=10;
    }
    return result;
}

//Sum of prime digits function
int sumofprimedigits(int a){
    int result=0;
    while(a>0){
        if(prime(a%10)){
            result+=a%10;
        }
        a/=10;
    }
    return result;
}

//Sum of composite digits function
int sumofcompositedigits(int a){
    int result=0;
    while(a>0){
        if(!prime(a%10) && a%10!=1){
            result+=a%10;
        }
        a/=10;
    }
    return result;
}

//Sum of perfect digits function
int sumofperfectdigits(int a){
    int result=0;
    while(a>0){
        if(perfect(a%10)){
            result+=a%10;
        }
        a/=10;
    }
    return result;
}

//Sum of strong digits function
int sumofstrongdigits(int a){
    int result=0;
    while(a>0){
        if(strong(a%10)){
            result+=a%10;
        }
        a/=10;
    }
    return result;
}

//Sum of armstrong digits function
int sumofarmstrongdigits(int a){
    int result=0;
    while(a>0){
        if(armstrong(a%10)){
            result+=a%10;
        }
        a/=10;
    }
    return result;
}

//Sum of palindrome digits function
int sumofpalindromedigits(int a){
    int result=0;
    while(a>0){
        if(palindrome(a%10)){
            result+=a%10;
        }
        a/=10;
    }
    return result;
}

//Main function
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Sum: "<<sum(a,b)<<endl;
    cout<<"Difference: "<<diff(a,b)<<endl;
    cout<<"Product: "<<product(a,b)<<endl;
    cout<<"Division: "<<div(a,b)<<endl;
    cout<<"Modulus: "<<mod(a,b)<<endl;
    cout<<"Power: "<<power(a,b)<<endl;
    cout<<"Factorial: "<<fact(a)<<endl;
    cout<<"Fibonacci: "<<fib(a)<<endl;  
    cout<<"GCD: "<<gcd(a,b)<<endl;
    cout<<"LCM: "<<lcm(a,b)<<endl;
    cout<<"Prime: "<<prime(a)<<endl;
    cout<<"Reverse: "<<reverse(a)<<endl;
    cout<<"Palindrome: "<<palindrome(a)<<endl;
    cout<<"Armstrong: "<<armstrong(a)<<endl;
    cout<<"Perfect: "<<perfect(a)<<endl;
    cout<<"Strong: "<<strong(a)<<endl;
    cout<<"Prime factors: "<<primefactors(a)<<endl;
    cout<<"Sum of digits: "<<sumofdigits(a)<<endl;
    cout<<"Sum of even digits: "<<sumofevendigits(a)<<endl;
    cout<<"Sum of odd digits: "<<sumofodddigits(a)<<endl;  
    cout<<"Sum of prime digits: "<<sumofprimedigits(a)<<endl;
    cout<<"Sum of composite digits: "<<sumofcompositedigits(a)<<endl;
    cout<<"Sum of perfect digits: "<<sumofperfectdigits(a)<<endl;
    cout<<"Sum of strong digits: "<<sumofstrongdigits(a)<<endl;
    cout<<"Sum of armstrong digits: "<<sumofarmstrongdigits(a)<<endl;
    cout<<"Sum of palindrome digits: "<<sumofpalindromedigits(a)<<endl;
    return 0;
}