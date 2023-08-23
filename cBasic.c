// #include<stdio.h>
// #include<conio.h>

// // function declaration / Prototype
// void printHello();
// void main() {
//     // function call
//     printHello();
//     printHello();
//     printHello();
//     getch();
// }

// // function definition
// void printHello() {
//     printf("Hello!\n");
//     printf("My name is Rohit Kumar Sharma\n");
// }

// #include<stdio.h>
// #include<conio.h>

// void hello();
// void goodBye();
// void main() {
//     hello();
//     goodBye();
//     hello();
//     getch();
// }

// void hello() {
//     printf("Hello\n");
// }

// void goodBye() {
//     printf("Good Bye :)\n");
// }

// #include<stdio.h>
// #include<conio.h>

// void printNamaste();
// void printBonjour();
// void main() {
//     char user;
//     printf("Enter I for india & F for French : ");
//     scanf("%c", &user);
//     printNamaste();
//     getch();
// }

// void printNamaste() {
//     printf("Namaste\n");
//     printBonjour();
// }

// void printBonjour() {
//     printf("Bonjour");
// }

// #include<stdio.h>
// #include<conio.h>

// int sum(int a, int b);
// void main() {
//     printf("Sum of Two Number is %d", sum(5, 3));
//     getch();
// }

// int sum(int a, int b) {
//     return a + b;
// }

// #include<stdio.h>
// #include<conio.h>

// void printTable(int n);
// void main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printTable(n); // argument / actual parameter
//     getch();
// }

// void printTable(int n) { // parameter / formal parameter
//     for(int i = 1; i<=10; i++) {
//         printf("%d X %d = %d\n", n, i, n * i);
//     }
// }

// #include<stdio.h>
// #include<conio.h>

// char character(char c);
// void main() {
//     printf("%c\n", character('c'));
//     getch();
// }

// char character(char c) {
//     return c;
// }

// #include<stdio.h>
// #include<conio.h>

// void calculatePrice(float value);
// void main() {
//     float value = 100;
//     calculatePrice(value);
//     printf("final price is : %f\n", value);
//     getch();
// }

// void calculatePrice(float value) {
//     value = value + (0.18 * value);
//     printf("final price is : %f\n", value);
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>

// int printSquare(int n);
// void main() {
//     int n = 4;
//     printf("%d the power of %d", n, printSquare(n));
//     getch();
// }

// int printSquare(int n) {
//     return pow(n, 2);
// }

// #include<stdio.h>
// #include<conio.h>
// #define pi 3.14

// int printSquare(int n);
// float printCircle(float radius);
// float printRectangle(float l, float h);
// void main() {
//     printf("Area of a square is %d\n", printSquare(4));
//     printf("Area of a circle is %f\n", printCircle(3));
//     printf("Area of a rectangle is %f\n", printRectangle(4, 8));
//     getch();
// }

// int printSquare(int n) {
//     return n * n;
// }

// float printCircle(float radius) {
//     return pi * radius * radius;
// }

// float printRectangle(float l, float h) {
//     return 2 * (l + h);
// }

// #include<stdio.h>
// #include<conio.h>

// void printHello(int count);
// void main() {
//     printHello(5);
//     getch();
// }

// Recursive function
// void printHello(int count) {
//     if(count == 0) {
//         return;
//     }
//     printf("Hello World\n");
//     printHello(count - 1);
// }

// #include<stdio.h>
// #include<conio.h>

// int sum(int n);
// void main() {
//     printf("Sum is %d", sum(5));
//     getch();
// }

// int sum(int n) {
//     if(n == 1) {
//         return 1;
//     }
//     int sumN = sum(n - 1);
//     int sumN2 = sumN + n;
//     return sumN2;
// }

// #include<stdio.h>
// #include<conio.h>

// int fact(int n);
// void main() {
//     printf("Factorial is %d", fact(8));
//     getch();
// }

// int fact(int n) {
//     if(n == 0) {
//         return 0;
//     }

//     if(n == 1) {
//         return 1;
//     }

//     int factN = fact(n - 1);
//     int factN2 = factN * n;
//     return factN2;
// }

// #include<stdio.h>
// #include<conio.h>

// int fact(int n);
// void main() {
//     printf("Factorial is %d", fact(8));
//     getch();
// }

// int fact(int n) {
//     printf("calculate fact of n : %d\n", n);
//     int factN = fact(n - 1);
//     int factN2 = factN * n;
//     return factN2;
// }

// #include<stdio.h>
// #include<conio.h>

// float calcuTem(float celuius);
// void main() {
//     printf("Celsius to Farenheit is %f", calcuTem(36));
//     getch();
// }

// float calcuTem(float celuius) {
//     int far = celuius * (9.0 / 5.0) + 32;
//     return far;
// }

// #include<stdio.h>
// #include<conio.h>

// int calcPercentage(int math, int science, int sanskrit);
// void main() {
//     printf("Percentage is %d", calcPercentage(76, 80, 69));
//     getch();
// }

// int calcPercentage(int math, int science, int sanskrit) {
//     return (math + science + sanskrit) / 3;
// }

// #include<stdio.h>
// #include<conio.h>

// int fib(int n);
// void main() {
//     int n;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     printf("Fibonacci %dth terms is %d", n, fib(n));
//     getch();
// }

// int fib(int n) {
//     if(n == 0) {
//         return 0;
//     }

//     if(n == 1) {
//         return 1;
//     }

//     int fibN = fib(n - 1);
//     int fibN2 = fib(n - 2);
//     int fibN3 = fibN + fibN2;
//     return fibN3;
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int age = 20;
//     int *ptr = &age;
//     int _age = *ptr;

//     // printf("%d\n", _age);
//     // printf("%p\n", &age);
//     // printf("%u\n", &age);

//     // printf("%u\n", &age);
//     // printf("%u\n", ptr);
//     // printf("%u\n", &ptr);

//     printf("%d\n", age);
//     printf("%d\n", *ptr);
//     printf("%d\n", *(&age));
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int *ptr;
//     int x;

//     ptr = &x;
//     *ptr = 0;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     *ptr += 5;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     (*ptr)++;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int price = 100.00;
//     int *ptr = &price;
//     int **pptr = &ptr;

//     // printf("%u\n", &price);
//     // printf("%u\n", ptr);
//     // printf("%u\n", pptr);

//     printf("%d\n", price);
//     printf("%d\n", *ptr);
//     printf("%d\n", **pptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &ptr;

//     printf("%d", **pptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void square(int n);
// void _square(int *n);
// void main() {
//     int number = 4;
//     square(number);
//     printf("Number = %d\n", number);

//     _square(&number);
//     printf("Number = %d\n", number);
//     getch();
// }

// // call by value
// void square(int n) {
//     n = n * n;
//     printf("Square = %d\n", n);
// }

// // call by reference
// void _square(int *n) {
//     *n = (*n) * (*n);
//     printf("Square = %d\n", *n);
// }

// #include<stdio.h>
// #include<conio.h>

// void swap(int a, int b);
// void _swap(int *a, int *b);
// void main() {
//     int a = 3, b = 5;
//     printf("a = %d & b = %d\n", a, b);
//     swap(a, b);

//     _swap(&a, &b);
//     printf("a = %d & b = %d\n", a, b);
//     getch();
// }

// // call by value
// void swap(int a, int b) {
//     // int t = a;
//     // a = b;
//     // b = t;

//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("a = %d & b = %d\n", a, b);
// }

// // call by reference
// void _swap(int *a, int *b) {
//     // int t = *a;
//     // *a = *b;
//     // *b = t;

//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
//     printf("a = %d & b = %d\n", *a, *b);
// }

// #include<stdio.h>
// #include<conio.h>

// void printAddress(int *n);
// void main() {
//     int n = 4;

//     // printf("%p\n", &n);
//     printf("%u\n", &n);
//     printAddress(&n);
//     getch();
// }

// void printAddress(int *n) {
//     // printf("%p\n", &n);
//     printf("%u\n", n);
// }

// #include<stdio.h>
// #include<conio.h>

// void doWork(int a, int b, int *sum, int *prod, int *avg);
// void main() {
//     int a = 3, b = 5;
//     int sum, prod, avg;

//     doWork(a, b, &sum, &prod, &avg);
//     printf("Sum = %d, Product = %d & Average = %d", sum, prod, avg);
//     getch();
// }

// void doWork(int a, int b, int *sum, int *prod, int *avg) {
//     *sum = a + b;
//     *prod = a * b;
//     *avg = (a + b) / 2;
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // int marks1 = 61;
//     // int marks2 = 61;
//     // int marks3 = 62;

//     // // Define an array
//     // int marks[] = {61, 61, 62};

//     int marks[3];
//     printf("Enter a physics marks: ");
//     scanf("%d", &marks[0]);
//     printf("Enter a chemistry marks: ");
//     scanf("%d", &marks[1]);
//     printf("Enter a Math marks: ");
//     scanf("%d", &marks[2]);

//     printf("Your physics marks = %d\n", marks[0]);
//     printf("Your chemistry marks = %d\n", marks[1]);
//     printf("Your Math marks = %d\n", marks[2]);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // float price[3];
//     // printf("Enter a three price value: ");
//     // scanf("%f %f %f", &price[0], &price[1], &price[2]);

//     // price[0] = price[0] + (0.18 * price[0]);
//     // price[1] = price[1] + (0.18 * price[1]);
//     // price[2] = price[2] + (0.18 * price[2]);

//     // printf("price1 = %f, price2 = %f, price3 = %f\n", price[0], price[1], price[2]);

//     // float price[3] = {100.0, 200.0, 300.0};
//     float price[] = {100.0, 200.0, 300.0};
//     // float price[3];
//     // printf("Enter a three prices: \n");
//     // scanf("%f", &price[0]);
//     // scanf("%f", &price[1]);
//     // scanf("%f", &price[2]);

//     price[0] = price[0] + (0.18 * price[0]);
//     price[1] = price[1] + (0.18 * price[1]);
//     price[2] = price[2] + (0.18 * price[2]);

//     printf("price1 = %f\n", price[0]);
//     printf("price2 = %f\n", price[1]);
//     printf("price3 = %f\n", price[2]);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // int age = 20;
//     // int *ptr = &age;
//     // printf("%u\n", ptr);
//     // ptr++;
//     // printf("%u\n", ptr);
//     // ptr--;
//     // printf("%u\n", ptr);

//     // float price = 100.0;
//     // float *ptr = &price;
//     // printf("%u\n", ptr);
//     // ptr++;
//     // printf("%u\n", ptr);
//     // ptr--;
//     // printf("%u\n", ptr);

//     char star = '*';
//     char *ptr = &star;
//     printf("%u\n", ptr);
//     ptr++;
//     printf("%u\n", ptr);
//     ptr--;
//     printf("%u\n", ptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // int age = 20;
//     // int _age = 19;
//     // int *ptr = &age;
//     // int *_ptr = &_age;

//     // printf("%u, %udifferenc = %u\n", ptr, _ptr, ptr - _ptr);
//     // _ptr = &age;
//     // printf("comparison = %u\n", ptr == _ptr);

//     int age = 20;
//     char star = '*';
//     int *ptr = &age;
//     char *_star = &star;

//     printf("%u, %udifference = %u\n", ptr, _star, ptr - _star);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // int aadhar[5];

//     // int *ptr = &aadhar[0];
//     // for(int i = 0; i<5; i++) {
//     //     printf("Enter Your Aadhar Number: ");
//     //     scanf("%d", (ptr + i));
//     // }

//     // for(int i = 0; i<5; i++) {
//     //     printf("%d index: %d\n", i, *(ptr + i));
//     // }

//     int aadhar[5];

//     int *ptr = &aadhar[0];
//     for(int i = 0; i<5; i++) {
//         printf("Enter Your Aadhar Number: ");
//         scanf("%d", &aadhar[i]);
//     }

//     for(int i = 0; i<5; i++) {
//         printf("%d index : %d\n", i, aadhar[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void printNumbers(int *arr, int n);
// void main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printNumbers(arr, 6);
//     getch();
// }

// void printNumbers(int *arr, int n) {
//     for(int i = 0; i<n; i++) {
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int marks[2][3];
//     marks[0][0] = 61;
//     marks[0][1] = 61;
//     marks[0][2] = 62;

//     marks[1][0] = 61;
//     marks[1][1] = 61;
//     marks[1][2] = 62;

//     printf("%d\n", marks[0][0]);
//     printf("%d\n", marks[0][1]);
//     printf("%d\n", marks[0][2]);

//     printf("%d\n", marks[1][0]);
//     printf("%d\n", marks[1][1]);
//     printf("%d\n", marks[1][2]);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// int countOdd(int arr[], int n);
// void main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printf("Total Number of Odd : %d\n", countOdd(arr, 6));
//     getch();
// }

// int countOdd(int arr[], int n) {
//     int count = 0;
//     for(int i = 0; i<n; i++) {
//         if(arr[i] % 2 != 0) {
//             count++;
//         }
//     }

//     return count;
// }

// #include<stdio.h>

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     printf("%d \n", *(arr+2));
//     printf("%d \n", *(arr+5));
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>

// void reverse(int arr[], int n);
// void printReverse(int arr[], int n);
// void main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     reverse(arr, 5);
//     printReverse(arr, 5);
//     getch();
// }

// void reverse(int arr[], int n) {
//     for(int i = 0; i<n/2; i++) {
//         int firstVal = arr[i];
//         int secondVal = arr[n-i-1];
//         arr[i] = secondVal;
//         arr[n-i-1] = firstVal;
//     }
// }

// void printReverse(int arr[], int n) {
//     for(int i = 0; i<n; i++) {
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     int n;
//     printf("Enter a n (n>2): ");
//     scanf("%d", &n);

//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;

//     for(int i = 2; i<n; i++) {
//         fib[i] = fib[i-1] + fib[i-2];
//         printf("%d \t", fib[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void storeTables(int arr[][10], int n, int m, int number);
// void main() {
//     int Tables[2][10];

//     storeTables(Tables, 0, 10, 2);
//     storeTables(Tables, 1, 10, 3);

//     for(int i = 0; i<10; i++) {
//         printf("%d \t", Tables[0][i]);
//     }
//     printf("\n");
//     for(int j = 0; j<10; j++) {
//         printf("%d \t", Tables[1][j]);
//     }
//     getch();
// }

// void storeTables(int arr[][10], int n, int m, int number) {
//     for(int i = 0; i<m; i++) {
//         arr[n][i] = number * (i+1);
//     }
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // Define a string
//     // char name[] = {'R', 'O', 'H', 'I', 'T', '\0'};
//     char name[] = "ROHIT";
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// void printString(char arr[]);
// void main() {
//     char firstName[] = "Rohit";
//     char lastName[] = "Kumar";

//     printString(firstName);
//     printString(lastName);
//     getch();
// }

// void printString(char arr[]) {
//     for(int i = 0; arr[i] != 0; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // char name[50];
//     // scanf("%s", &name);
//     // printf("Your name is %s", name);

//     // char firstName[50];
//     // scanf("%s", &firstName);
//     // printf("Your firend name is %s", firstName);

//     // char fullName[100];
//     // scanf("%s", &fullName);
//     // printf("Your fullName is %s", fullName);

//     // char str[100];
//     // gets(str); // gets is dangers syntax
//     // puts(str);

//     // char str[100];
//     // fgets(str, 100, stdin);
//     // puts(str);

//     char *canChange = "Hello World"; // can change value with pointer
//     puts(canChange);
//     canChange = "Hello";
//     puts(canChange);
//     getch();

//     char cannotChange[] = "Hello World"; // cannot change value with array
//     puts(cannotChange);
//     cannotChange = "Hello";
//     puts(cannotChange);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// int countLength(char arr[]);
// void main() {
//     char name[100];
//     fgets(name, 100, stdin);
//     printf("Length is : %d", countLength(name));
//     getch();
// }

// int countLength(char arr[]) {
//     int count = 0;
//     for(int i = 0; arr[i]!=0; i++) {
//         count++;
//     }
//     return count-1;
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// void main() {
//     // char name[100] = "Rohit";
//     // printf("Length is : %d", strlen(name));

//     // char name[100] = "myComputer";
//     // int length = strlen(name);
//     // printf("Length is : %d", length);

//     // char oldstr[50] = "oldstr";
//     // char newstr[50] = "newstr";
//     // strcpy(newstr, oldstr);
//     // puts(newstr);

//     // char oldName[50] = "Abhay";
//     // char newName[50] = "Rohit";
//     // strcpy(oldName, newName);
//     // puts(newName);

//     // char firstStr[100] = "hello ";
//     // char secStr[] = "world";
//     // strcat(firstStr, secStr);
//     // puts(firstStr);

//     // char firstName[100] = "Rohit ";
//     // char lastName[] = "Kumar";
//     // strcat(firstName, lastName);
//     // puts(firstName);

//     // char firstStr[] = "Apple";
//     // char secStr[] = "Banana";
//     // printf("%d", strcmp(secStr, firstStr));

//     char firstStr[] = "HHH";
//     char secStr[] = "HHH";
//     printf("%d", strcmp(secStr, firstStr));
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     char str[100];
//     char ch;
//     int i = 0;

//     while(ch != '\n') {
//         scanf("%c", &ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';
//     puts(str);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// void salting(char password[]);
// void main() {
//     char password[100];
//     scanf("%s", password);
//     salting(password);
//     getch();
// }

// void salting(char password[]) {
//     char salt[] = "123";
//     char newPass[200];

//     strcpy(newPass, password);
//     strcat(newPass, salt);
//     puts(newPass);
// }

// #include<stdio.h>
// #include<conio.h>

// void slice(char str[], int n, int m);
// void main() {
//     char str[200] = "RohitKumar";
//     slice(str, 3, 6);
//     getch();
// }

// void slice(char str[], int n, int m) {
//     char newStr[200];
//     int j = 0;
//     for(int i = n; i<=m; i++, j++) {
//         newStr[j] = str[i];
//     }
//     newStr[j] = '\0';
//     puts(newStr);
// }

// #include<stdio.h>
// #include<conio.h>

// int countVowels(char str[]);
// void main() {
//     char str[200] = "helloworld";
//     printf("Vowels is : %d", countVowels(str));
//     getch();
// }

// int countVowels(char str[]) {
//     int count = 0;
//     for(int i = 0; str[i] != '\0'; i++) {
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//             count++;
//         }
//     }
//     return count;
// }

// #include<stdio.h>
// #include<conio.h>

// void checkChar(char str[], char ch);
// void main() {
//     char str[200] = "helloworld";
//     char ch = 'e';
//     checkChar(str, ch);
//     getch();
// }

// void checkChar(char str[], char ch) {
//     for(int i = 0; str[i] != '\0'; i++) {
//         if(str[i] == ch) {
//             printf("character is present");
//             return;
//         }
//     }
//     printf("character is Not present:(");
// }

// #include <stdio.h>
// #include <conio.h>
// #include <string.h>

// struct student
// {
//     int roll;
//     float cgpa;
//     char name[200];
// };
// void main()
// {
//     struct student s1;
//     s1.roll = 15;
//     s1.cgpa = 8.2;
//     strcpy(s1.name, "Rohit");

//     printf("Student Name: %s\n", s1.name);
//     printf("Student Roll No: %d\n", s1.roll);
//     printf("Student CGPA: %f\n", s1.cgpa);
//     printf("\n");

//     struct student s2;
//     s2.roll = 17;
//     s2.cgpa = 8.3;
//     strcpy(s2.name, "myComputer");

//     printf("Student Name: %s\n", s2.name);
//     printf("Student Roll No: %d\n", s2.roll);
//     printf("Student CGPA: %f\n", s2.cgpa);
//     printf("\n");

//     struct student s3;
//     s3.roll = 18;
//     s3.cgpa = 8.3;
//     strcpy(s3.name, "Fazian");

//     printf("Student Name: %s\n", s3.name);
//     printf("Student Roll No: %d\n", s3.roll);
//     printf("Student CGPA: %f\n", s3.cgpa);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// struct student {
//     int roll;
//     float cgpa;
//     char name[200];
// };
// void main() {
//     struct student ece[100];
//     ece[0].roll = 15;
//     ece[0].cgpa = 8.2;
//     strcpy(ece[0].name, "Rohit");

//     printf("Student Name: %s\n", ece[0].name);
//     printf("Student Roll No: %d\n", ece[0].roll);
//     printf("Student CGPA: %f\n", ece[0].cgpa);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// struct student {
//     int roll;
//     float cgpa;
//     char name[200];
// };
// void main() {
//     struct student s1 = {15, 8.2, "Rohit"};

//     printf("Student Name: %s\n", s1.name);
//     printf("Student Roll No: %d\n", s1.roll);
//     printf("Student CGPA: %f\n", s1.cgpa);
//     getch();
// }

// #include <stdio.h>
// #include <conio.h>

// struct student
// {
//     int roll;
//     float cgpa;
//     char name[200];
// };
// void main()
// {
//     struct student s1 = {15, 8.2, "Rohit"};

//     printf("Student Name: %s\n", s1.name);
//     printf("Student Roll No: %d\n", s1.roll);
//     printf("Student CGPA: %f\n", s1.cgpa);
//     printf("\n");

//     struct student *ptr = &s1;

//     printf("Student Name: %s\n", (*ptr).name);
//     printf("Student Roll No: %d\n", (*ptr).roll);
//     printf("Student CGPA: %f\n", (*ptr).cgpa);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// struct student {
//     int roll;
//     float cgpa;
//     char name[200];
// };
// void main() {
//     struct student s1 = {15, 8.2, "Rohit"};
//     struct student *ptr = &s1;

//     printf("Student Name: %s\n", ptr->name);
//     printf("Student Roll No: %d\n", ptr->roll);
//     printf("Student CGPA: %f\n", ptr->cgpa);
//     getch();
// }

// #include <stdio.h>
// #include <conio.h>

// struct student
// {
//     int roll;
//     float cgpa;
//     char name[200];
// };

// void printInfo(struct student s1);
// void main()
// {
//     struct student s1 = {15, 8.2, "Rohit"};
//     printInfo(s1);
//     getch();
// }

// void printInfo(struct student s1)
// {
//     printf("Student Information\n");
//     printf("Student Name: %s\n", s1.name);
//     printf("Student Roll No: %d\n", s1.roll);
//     printf("Student CGPA: %f\n", s1.cgpa);
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// typedef struct computerEngineeringStudent {
//     int roll;
//     float cgpa;
//     char name[200];
// }coe;
// void main() {
//     coe s1;
//     s1.roll = 15;
//     s1.cgpa = 8.2;
//     strcpy(s1.name, "Rohit");

//     printf("Student Name is %s\n", s1.name);
//     printf("Student Roll No %d\n", s1.roll);
//     printf("Student CGPA is %f\n", s1.cgpa);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// typedef struct personAddress {
//     int houseNo;
//     int block;
//     char city[200];
//     char state[200];
// } pea;

// void printAdd(pea add);
// void main() {
//     pea adds[5];
//     printf("Enter Info for person 1 : \n");
//     scanf("%d", &adds[0].houseNo);
//     scanf("%d", &adds[0].block);
//     scanf("%s", adds[0].city);
//     scanf("%s", adds[0].state);

//     printf("Enter Info for person 2 : \n");
//     scanf("%d", &adds[1].houseNo);
//     scanf("%d", &adds[1].block);
//     scanf("%s", adds[1].city);
//     scanf("%s", adds[1].state);

//     printf("Enter Info for person 3 : \n");
//     scanf("%d", &adds[2].houseNo);
//     scanf("%d", &adds[2].block);
//     scanf("%s", adds[2].city);
//     scanf("%s", adds[2].state);

//     printf("Enter Info for person 4 : \n");
//     scanf("%d", &adds[3].houseNo);
//     scanf("%d", &adds[3].block);
//     scanf("%s", adds[3].city);
//     scanf("%s", adds[3].state);

//     printf("Enter Info for person 5 : \n");
//     scanf("%d", &adds[4].houseNo);
//     scanf("%d", &adds[4].block);
//     scanf("%s", adds[4].city);
//     scanf("%s", adds[4].state);

//     printAdd(adds[0]);
//     printAdd(adds[1]);
//     printAdd(adds[2]);
//     printAdd(adds[3]);
//     printAdd(adds[4]);
//     getch();
// }

// void printAdd(pea add) {
//     printf("Address is : %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
//     printf("\n");
// }

// #include<stdio.h>
// #include<conio.h>

// struct vectors {
//     int x;
//     int y;
// };

// void calSum(struct vectors v1, struct vectors v2, struct vectors sum);
// void main() {
//     struct vectors v1 = {5, 10};
//     struct vectors v2 = {3, 7};
//     struct vectors sum = {0};

//     calSum(v1, v2, sum);
//     getch();
// }

// void calSum(struct vectors v1, struct vectors v2, struct vectors sum) {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

//     printf("sum of x is : %d\n", sum.x);
//     printf("sum of y is : %d\n", sum.y);
// }

// #include<stdio.h>
// #include<conio.h>

// struct complexNumbers {
//     int real;
//     int img;
// };
// void main() {
//     struct complexNumbers c1 = {5, 3};
//     struct complexNumbers *ptr = &c1;

//     printf("Real Number: %d\n", ptr->real);
//     printf("Img Number: %d\n", ptr->img);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>

// typedef struct BankAccount {
//     int accountNo;
//     char name[200];
// } acc;
// void main() {
//     acc acc1 = {123, "Rohit"};
//     acc acc2 = {124, "Abhay"};
//     acc acc3 = {125, "myComputer"};

//     printf("First Account Holder Details:\n");
//     printf("Account Holder Name: %s\n", acc1.name);
//     printf("Account No: %d\n", acc1.accountNo);
//     printf("\n");

//     printf("Second Account Holder Details:\n");
//     printf("Account Holder Name: %s\n", acc2.name);
//     printf("Account No: %d\n", acc2.accountNo);
//     printf("\n");

//     printf("Third Account Holder Details:\n");
//     printf("Account Holder Name: %s\n", acc3.name);
//     printf("Account No: %d\n", acc3.accountNo);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // FILE *fptr;
//     // fptr = fopen("Test.txt", "r");
//     // fclose(fptr);

//     FILE *fptr;
//     fptr = fopen("NewTest.txt", "w");

//     if(fptr == NULL) {
//         printf("File donesn't exsit.\n");
//     }
//     else {
//         fclose(fptr);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // FILE *fptr;
//     // fptr = fopen("Test.txt", "r");

//     // char ch;
//     // fscanf(fptr, "%c", &ch);
//     // printf("Character = %c\n", ch);

//     // fscanf(fptr, "%c", &ch);
//     // printf("Character = %c\n", ch);

//     // fscanf(fptr, "%c", &ch);
//     // printf("Character = %c\n", ch);

//     // fscanf(fptr, "%c", &ch);
//     // printf("Character = %c\n", ch);

//     // fscanf(fptr, "%c", &ch);
//     // printf("Character = %c\n", ch);
//     // fclose(fptr);

//     // FILE *fptr;
//     // fptr = fopen("Test.txt", "r");

//     // int i;
//     // fscanf(fptr, "%d", &i);
//     // printf("First Number = %d\n", i);

//     // fscanf(fptr, "%d", &i);
//     // printf("Second Number = %d\n", i);

//     // fscanf(fptr, "%d", &i);
//     // printf("Third Number = %d\n", i);
//     // fclose(fptr);

//     FILE *fptr;
//     fptr = fopen("Test.txt", "a");

//     fprintf(fptr, "%c", 'M');
//     fprintf(fptr, "%c", 'A');
//     fprintf(fptr, "%c", 'N');
//     fprintf(fptr, "%c", 'G');
//     fprintf(fptr, "%c", 'O');
//     fprintf(fptr, "%c", '_');
//     fclose(fptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     // FILE *fptr;
//     // fptr = fopen("Test.txt", "r");

//     // printf("%c\n", fgetc(fptr));
//     // printf("%c\n", fgetc(fptr));
//     // printf("%c\n", fgetc(fptr));
//     // printf("%c\n", fgetc(fptr));
//     // printf("%c\n", fgetc(fptr));
//     // fclose(fptr);

//     FILE *fptr;
//     fptr = fopen("Test.txt", "w");

//     fputc('M', fptr);
//     fputc('A', fptr);
//     fputc('N', fptr);
//     fputc('G', fptr);
//     fputc('O', fptr);
//     fclose(fptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");

//     char ch;
//     ch = fgetc(fptr);
//     while(ch != EOF) {
//         printf("%c", ch);
//         ch = fgetc(fptr);
//     }
//     printf("\n");
//     fclose(fptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");

//     int n;
//     fscanf(fptr, "%d", &n);
//     printf("%d ", n);
//     fscanf(fptr, "%d", &n);
//     printf("%d ", n);
//     fscanf(fptr, "%d", &n);
//     printf("%d ", n);
//     fscanf(fptr, "%d", &n);
//     printf("%d ", n);
//     fscanf(fptr, "%d", &n);
//     printf("%d ", n);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     FILE *fptr;
//     fptr = fopen("Student.txt", "w");

//     char name[200];
//     int age;
//     float cgpa;

//     printf("Enter Your Name: ");
//     scanf("%s", name);

//     printf("Enter Your Age: ");
//     scanf("%d", &age);

//     printf("Enter Your CGPA: ");
//     scanf("%f", &cgpa);

//     fprintf(fptr, "Student Name: %s\n", name);
//     fprintf(fptr, "Student Age: %d\n", age);
//     fprintf(fptr, "Student CGPA: %f\n", cgpa);
//     fclose(fptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     FILE *fptr;
//     fptr = fopen("Odd.txt", "w");

//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(int i = 0; i<=n; i++) {
//         if(i % 2 != 0) {
//             fprintf(fptr, "%d\t", i);
//         }
//     }
//     fclose(fptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     FILE *fptr;
//     fptr = fopen("Sum.txt", "r");

//     int a;
//     fscanf(fptr, "%d", &a);
//     int b;
//     fscanf(fptr, "%d", &b);

//     fclose(fptr);

//     fptr = fopen("Sum.txt", "w");
//     fprintf(fptr, "%d", a + b);
//     fclose(fptr);
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// void main() {
//     printf("%d\n", sizeof(int));
//     printf("%d\n", sizeof(float));
//     printf("%d\n", sizeof(char));
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     int *ptr;
//     ptr = (int *) malloc(5 * sizeof(int));

//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;

//     for(int i = 0; i<5; i++) {
//         printf("%d\t", ptr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     float *ptr;
//     ptr = (float *) malloc(5 * sizeof(float));

//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;

//     for(int i = 0; i<5; i++) {
//         printf("%f\t", ptr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     float *ptr;
//     ptr = (float *) malloc(5 * sizeof(float));

//     for(int i = 0; i<5; i++) {
//         printf("%f\n", ptr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     float *ptr;
//     ptr = (float *) calloc(5, sizeof(float));

//     for(int i = 0; i<5; i++) {
//         printf("%f\n", ptr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     int *ptr, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     ptr = (int *) calloc(n, sizeof(int));

//     for(int i = 0; i<n; i++) {
//         printf("%d\n", ptr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     int *ptr, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     ptr = (int *) calloc(n, sizeof(int));

//     for(int i = 0; i<n; i++) {
//         printf("%d\n", ptr[i]);
//     }

//     free(ptr);

//     ptr = (int *) calloc(2, sizeof(int));

//     for(int i = 0; i<2; i++) {
//         printf("%d\n", ptr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     float *ptr;
//     ptr = (float *) malloc(5 * sizeof(float));

//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;

//     for(int i = 0; i<5; i++) {
//         printf("%f\n", ptr[i]);
//     }

//     free(ptr);

//     ptr = (float *) malloc(2 * sizeof(float));

//     ptr[0] = 11;
//     ptr[1] = 13;

//     for(int i = 0; i<2; i++) {
//         printf("%f\n", ptr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     int *ptr;
//     ptr = (int *) calloc(5, sizeof(int));

//     for(int i = 0; i<5; i++) {
//         printf("%d\n", ptr[i]);
//     }

//     realloc(ptr, 3);

//     ptr = (int *) calloc(3, sizeof(int));

//     for(int i = 0; i<3; i++) {
//         printf("%d\n", ptr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     int *ptr;
//     ptr = (int *) calloc(5, sizeof(int));

//     printf("Enter a number(5): ");
//     for(int i = 0; i<5; i++) {
//         scanf("%d", &ptr[i]);
//     }

//     ptr = realloc(ptr, 8);

//     printf("Enter a number(8): ");
//     for(int i = 0; i<8; i++) {
//         scanf("%d", &ptr[i]);
//     }

//     for(int i = 0; i<8; i++) {
//         printf("Number %d is %d\n", i, ptr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     int *ptr;
//     ptr = (int *) calloc(5, sizeof(int));

//     printf("Enter a number(5): ");
//     for(int i = 0; i<5; i++) {
//         scanf("%d", &ptr[i]);
//     }

//     for(int i = 0; i<5; i++) {
//         printf("Number %d is %d\n", i, ptr[i]);
//     }
//     getch();
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main() {
//     int *ptr;
//     ptr = (int *) calloc(5, sizeof(int));

//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;

//     for(int i = 0; i<5; i++) {
//         printf("Odd Number: %d\t", ptr[i]);
//     }
//     printf("\n");

//     ptr = realloc(ptr, 6);

//     ptr[0] = 2;
//     ptr[1] = 4;
//     ptr[2] = 6;
//     ptr[3] = 8;
//     ptr[4] = 10;
//     ptr[5] = 12;

//     for(int i = 0; i<6; i++) {
//         printf("Even Number: %d\t", ptr[i]);
//     }

//     free(ptr);
//     getch();
// }

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main() {
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for(int i = 0; i<5; i++) {
        printf("%d\n", ptr[i]);
    }

    ptr = realloc(ptr, 6);

    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;

    for(int i = 0; i<6; i++) {
        printf("%d\n", ptr[i]);
    }

    free(ptr);
    getch();
}