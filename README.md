# Number Programs Collection

This repository contains a variety of simple number-related programs. The programs include checks for Armstrong numbers, even or odd checks, encryption/decryption, and more. Each program performs a specific function to demonstrate basic algorithms and logic in different programming languages.

## Programs

### 1. **Armstrong Number Checker**
This program checks whether a given number is an Armstrong number or not.

**What is an Armstrong Number?**  
An Armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits. For example:
- 153 is an Armstrong number because:
1^3 + 5^3 + 3^3 = 153

**How It Works:**
1. The user inputs a number.
2. The program calculates the sum of the cubes of its digits.
3. It compares the sum with the original number.
4. If they are equal, it is an Armstrong number.

**Example:**
```bash
Enter the number: 153
Armstrong number
```
---

### 2. **Digit Extraction**
This program extracts and displays the individual digits of a number entered by the user.

**How It Works:**
1. The user inputs a number.
2. The program extracts each digit from the number using modulo and division operations.
3. It prints the digits in reverse order.

**Example:**
```bash
Enter a number: 12345
5 4 3 2 1
```
---

### 3. **Encryption and Decryption Program**
This program encrypts and decrypts a 4-digit number using a custom algorithm.

**Encryption:**
1. Adds 7 to each digit of the number.
2. Swaps the 1st and 3rd digits, and the 2nd and 4th digits.

**Decryption:**
1. Reverses the encryption process by subtracting 7 from each digit and swapping the digits back.

**Example - Encryption:**
```bash
Enter (1) to encrypt (2) to decrypt: 1
Enter 4 digit number to be encrypted: 1234
New code: 6017
```

**Example - Decryption:**
```bash
Enter (1) to encrypt (2) to decrypt: 2
Enter 4 digit number to be decrypted: 6017
New code: 1234
```

---

### 4. **Even or Odd Checker**
This program checks whether a given number is even or odd.

**How It Works:**
1. The program prompts the user to input a number.
2. It checks if the number is divisible by 2.
3. If the number is divisible by 2, it prints "even".
4. If the number is not divisible by 2, it prints "odd".

**Example:**
```bash
Enter a number: 5
odd
```
```bash
Enter a number: 8
even
```

---

### 5. **Largest and Smallest Number Finder**
This program finds the largest and smallest numbers from four input values.

**How It Works:**
1. The program prompts the user to input four numbers.
2. It compares the numbers and determines the largest and smallest values.
3. It then prints out the largest and smallest numbers.

**Example:**
```bash
Enter the 1st number: 10
Enter the 2nd number: 25
Enter the 3rd number: 5
Enter the 4th number: 15
The largest is 25
The smallest is 5
```

---

### 6. **Find the Largest Number**
This program allows the user to input a list of numbers and finds the largest number from the list.

**How It Works:**
1. The program asks the user how many numbers they want to enter.
2. It then prompts the user to input the numbers.
3. It compares each number to find the largest value.
4. The program displays the largest number.

**Example:**
```bash
Enter the number of elements you wish to find the greatest element of: 5
Enter numbers:
10
20
5
25
15
The largest of the 5 numbers is 25
```

---

### 7. **Palindrome Number Checker**
This program checks whether a given number is a palindrome or not.

**How It Works:**
1. The program prompts the user to input a number.
2. It then reverses the digits of the number.
3. It compares the original number with the reversed number to check if they are the same.
4. The program displays whether the number is a palindrome or not.

**Example:**
```bash
Enter a number to check if it's a palindrome or not: 121
It is a palindrome number.
```
```bash
Enter a number to check if it's a palindrome or not: 123
It is not a palindrome number.
```
Copy

---

### 8. **Time Converter**
This program converts a given number of seconds into hours, minutes, and seconds.

**How It Works:**
1. The program prompts the user to enter a number of seconds.
2. It then converts the total seconds into hours, minutes, and seconds.
3. The program displays the time in the format hours:minutes:seconds.

**Example:**
```bash
Enter how many seconds do you want to convert: 3665
1:1:5
```



---

### 9. **Twin Number Checker**
This program checks if two numbers are equal or not. If they are equal, it prints "True"; otherwise, it prints "False".

**How It Works:**
1. The program prompts the user to input two numbers.
2. It then compares the two numbers.
3. The program prints "True" if the numbers are equal and "False" if they are not.

**Example:**
```bash
Enter first number: 5
Enter second number: 5
True
```
```bash
Enter first number: 3
Enter second number: 7
False
```
