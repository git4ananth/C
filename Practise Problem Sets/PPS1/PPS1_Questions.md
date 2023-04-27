Practise Problem Set - 1

1. **Neon number** 
   A neon number is a number where the sum of digits of square of the number is equal to the number. Write a c program to check whether given number is neon numbers or not.

2. **Bank**
   Create a C program called BankMgmt with AccNumber, CustName, AvlBalance, AccType as members. Implement a Bank management Application as menu driven program using Array and function concept
    Menu Option:
    1. Withdrawal 
    2. Deposit 
    3. Display Balance
    4.  Exit
    If option
    1 is chosen- Amount can be withdrawn from the account (Withdrawn amount should be given as input). For withdrawal the condition is- the AvlBalance must be greater than withdrawn amount.
    2 is chosen- Amount can be deposited to the account (the deposited amount should be given as input). The deposited amount should be reflected in AvlBalance of the account.
    3 is chosen - Current available balance (AvlBalance) of the AccNumber should be Displayed with other details
    4 is chosen - Exit from the application

3. **Grocery Store**
    Write a program to create two grocery storage with minimum five items each. Merge the storage to new space storage in such a way that first storage may be copied as it is and reverse only the second array and merge it. Perform sorting in the new array and print it. Implement the same by passing appropriate arrays to functions. Below is the sample output.

4. **Earthquake**
   Earthquake Research Institute of Japan has recorded earthquake occurred in the year 2021 using Richter scale. Develop a program to get the ’n’ (number of times) the earthquake has occurred and print the number of times in which the magnitude was low, medium and high. The magnitude value is given in microns. If the value is less than 5.4(inclusive) in microns then it is low, 5.4 to 7.0 (inclusive) it is medium and more than 7.0 it is high. Also, if the number of times recorded is Zero, display as “No earthquake predicted” and if the number of times recorded is negative, display as “Invalid Input”.

5. **Cricket Players**
   Given a cricket team with size M x N with multiple players are already occupied double bedded rooms, separate the even and odd players and make them to occupy in single bedded room (Odd & Even). After separation sort and display in ascending order as shown in output.

6. **Income Tax**
   Calculate tax given the following conditions:
    If income is less than or equal to 1,50,000 then no tax
    If taxable income is 1,50,001 – 3,00,000 then charge 10% tax for the remaining slab If taxable income is 3,00,001 – 5,00,000 then charge 20% tax for the remaining slab If taxable income is above 5,00,001 then charge 30% tax for the remaining slab

7. **Lucky Number**
   Get a DOB from the user which is an 8 digit number. Check whether it is a Lucky number or not by following the steps below:
    Step-1: Calculate the sum of the digits in the odd-numbered positions (the first, third, fifth and seventh digits) and multiply this sum by 3.
    Step-2: Calculate the sum of the digits in the even-numbered positions (the second, fourth, sixth and eighth digits) and add this to the previous result (got in step 1).
    Given Date of Birth is declared as a lucky number, only if the last digit of the result from step 2 is 0.
    Develop a program to read the Date of Birth, if the number of digits is not 8 then print “Cannot be processed” and terminate program. If the number of digits is 8 and if the DOB
    is a lucky number, output the DOB with the message “Lucky Number.” If the number of digits is 8 and if the DOB is not a lucky number, output the DOB with the message “Not a Lucky Number.”

8. **Smallest Number**
   Write a c-program to find the smallest possible two digit sum of a 4 digit number. e.g 5592 is the input 25+59=84 is the smallest two digit sum possible.
   *!! This is not optimised properly !!*