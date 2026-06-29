// #include <iostream>
// using namespace std;
// int evenodd(int n){
// if(n%2==0){
//     cout<<"Even";
// } else {
//     cout<<"Odd";
// }
// }
// int main() {
// int n;
// cout<<"Enter Number: ";
// cin>>n;
// evenodd(n);

// }

// #include <iostream>
// using namespace std;
// int largest(int a,int b,int c){
//     if(a>b){
//         if(a>c) cout<<"Num 1 is Largest";
//         else cout<<"Num 3 is Largest";
//     }
//     else {
//         if(b>c) cout<<"Num 2 is Largest";
//         else cout<<"Num 3 is Largest";
//     }
// }
// int main()
// {
//     int a, b, c;
//     cout << "Enter Number 1: ";
//     cin >> a;
//     cout << endl;
//     cout << "Enter Number 2: ";
//     cin >> b;
//     cout << endl;
//     cout << "Enter Number 3: ";
//     cin >> c;
//     cout << endl;
//     largest(a,b,c);
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter Number: ";
//     cin >> n;
//     if (n < 0)
//     {
//         cout << "invalid";
//         return 0;
//     }
//     if (n == 0)
//     {
//         cout << "Factorial is 1";
//         return 0;
//     }
//     else
//     {
//         int fact = 1;
//         for (int i = 1; i <= n; i++)
//         {
//             fact = fact * i;
//         }
//         cout << "Factorial is " << fact;
//     }
// }

// #include <iostream>
// using namespace std;
// bool isprime(int n)
// {
//     for (int i = 2; i <= n/2; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int n;
//     cout << "Enter Number: ";

//     while(true){
// cin>>n;
// if(n<=1){
//     cout<<"Invalid Number"<<endl;
//     continue;
// }

// if(isprime(n)){
//     cout<<n<<" "<<"is prime"<<endl;
// } else {
//     cout<<n<<" "<<"is composite"<<endl;
// }
// }
// for(int i=2;i<=n;i++){
//     if(isprime(i)){
//         cout<<i<<" "<<"is prime"<<endl;
//     } else {
//         cout<<i<<" "<<"is composite"<<endl;
//     }
// }
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int lastdigit = n % 10;
    int reverse = 0;
    while (n > 0)
    {
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
        lastdigit = n % 10;
    }
    cout << "Reversed Number: " << reverse;
}

// #include <iostream>
// using namespace std;
// int countdigit(int n)
// {

//     int count = 0;
//     while (n != 0)
//     {
//         n = n / 10;
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     int n;
//     cout << "Enter Number: ";
//     cin >> n;
//     if (n == 0)
//     {
//         cout << "Digit in given number is 1";
//         return 0;
//     }
//     cout << "Digit in given number is " << countdigit(n);
// }

// #include <iostream>
// using namespace std;
// int sum(int n)
// {
//     int sum = 0;

//     while (n != 0)
//     {
//         int ld = n % 10;
//         sum = sum + ld;
//         n = n / 10;
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cout << "Enter Number: ";
//     cin >> n;
//     cout << "Sum is " << sum(n);
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter Number: ";
//     cin >> n;
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << n << " x " << i << " = " << n * i<<endl;
//     }
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// bool isarmstrong(int number, int count)
// {
//     // store original for check conditionn

//     int original = number;
//     int sum = 0;
//     while (number != 0)
//     {
//         int ld = number % 10;

//         // best logic
//         int power = 1;
//         for (int i = 0; i < count; i++)
//         {
//             power *= ld;
//         }

//         sum += power;
//         number /= 10;
//     }
//     if (sum == original)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter Number: ";
//     cin >> n;
//     if (n == 0)
//     {
//         cout << n << " is Armstrong";
//         return 0;
//     }
//     if (n < 0)
//     {
//         cout << "invalid";
//         return 0;
//     }
//     int count = 0;
//     int temp = n;

//     // store n in temp to find count
//     // org n will not effect
//     while (temp != 0)
//     {
//         temp = temp / 10;
//         count++;
//     }

//     if (isarmstrong(n, count))
//     {
//         cout << n << " is Armstrong";
//     }
//     else
//     {
//         cout << n << " is Not Armstrong";
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int p = 1;
//     for (int i = 0; i < b; i++)
//     {
//         p = p * a;
//     }
//     cout<<p;
// }

// #include <iostream>
// using namespace std;

// double add(double a, double b)
// {
//     return a + b;
// }

// double subtract(double a, double b)
// {
//     return a - b;
// }

// double multiply(double a, double b)
// {
//     return a * b;
// }

// double divide(double a, double b)
// {
//     if (b == 0)
//     {
//         cout << "Division by zero not allowed\n";
//         return 0;
//     }
//     return a / b;
// }

// int main()
// {
//     int choice;
//     double a, b;

//     while (true)
//     {
//         cout << "\n1. Add\n";
//         cout << "2. Subtract\n";
//         cout << "3. Multiply\n";
//         cout << "4. Divide\n";
//         cout << "5. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         if (choice == 5)
//         {
//             cout << "Exiting...\n";
//             break;
//         }

//         if (choice == 1)
//         {
//             cout << "Enter two numbers: ";
//             cin >> a >> b;
//             cout << "Result is " << add(a, b);
//         }
//         else if (choice == 2)
//         {
//             cout << "Enter two numbers: ";
//             cin >> a >> b;
//             cout << "Result is " << subtract(a, b);
//         }
//         else if (choice == 3)
//         {
//             cout << "Enter two numbers: ";
//             cin >> a >> b;
//             cout << "Result is " << multiply(a, b);
//         }
//         else if (choice == 4)
//         {
//             cout << "Enter two numbers: ";
//             cin >> a >> b;
//             cout << "Result is " << divide(a, b);
//         }
//         else
//         {
//             cout << "invalid choice";
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// double add(double a, double b)
// {
//     return a + b;
// }

// double subtract(double a, double b)
// {
//     return a - b;
// }

// double multiply(double a, double b)
// {
//     return a * b;
// }

// double divide(double a, double b)
// {
//     if (b == 0)
//     {
//         cout << "Division by zero not allowed\n";
//         return 0;
//     }
//     return a / b;
// }
// int main()
// {
//     double result;
//     int choice;
//     double n;
//     cout << "Enter Initial value ";
//     cin >> result;

//     while (true)
//     {
//         cout << "\nCurrent Result is " << result << "\n";
//         cout << "1. Add\n";
//         cout << "2. Subtract\n";
//         cout << "3. Multiply\n";
//         cout << "4. Divide\n";
//         cout << "5. reset\n";
//         cout << "6. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;
//         if (choice == 6)
//         {
//             cout << "Exiting...";
//             break;
//         }

//               switch (choice)
//         {
//         case 1:
//             cout << "Enter Number ";
//             cin >> n;
//             result = add(result, n);
//             break;
//         case 2:
//             cout << "Enter Number ";
//             cin >> n;
//             result = subtract(result, n);
//             break;
//         case 3:
//             cout << "Enter Number ";
//             cin >> n;
//             result = multiply(result, n);
//             break;
//         case 4:
//             cout << "Enter Number ";
//             cin >> n;
//             result = divide(result, n);
//             break;
//         case 5:
//             cout << "Enter New Initial Value ";
//             cin >> result;
//             break;
//         default:
//             cout << "Invalid choice\n";
//         }
//     }
// }


