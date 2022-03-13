/* Question:  You are required to write code that does the following:-

1. Find out the sum of the squares of the digits of the rpm
2. Multiply the number obtained in (1) by 323
3. Do a cyclic right shift of digits of the rpm i.e. 
    if Number is 1234, after cyclic right shift, the number will be 4123. 
    Thereafter, take the last two digits of the number obtained just now, and add it to the number obtained in point 2. Thus, obtaining a new rpm value.
4. Do these steps till the number of years are 10 or the harddisk has reached the maximum RPM

long long int rpm: Original value of RPM
int years: Store the number years that have elapsed
long long int finalRPM: Store the modified value of RPM i.e. the final of RPM */

void solutionRPM(long long int rpm, int &years, long long int &finalRPM) {

    //Write your solution code below this line
    years = 0;
    int max = 8*rpm,num,rem,sqr;
    finalRPM = rpm;
    while(finalRPM < max)
    {
        sqr = 0;
        num = finalRPM;
        while(num != 0)
        {
            rem = num%10;
            num = num/10;
            sqr = sqr + (rem*rem);
        }
        sqr = (sqr*323) + (finalRPM/10)%100;
        finalRPM = sqr;
        years++;
        if(years >= 10)
        {
            break;
        }
    }
}
