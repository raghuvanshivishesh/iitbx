struct rational {
   int numerator;
   int denominator;
};



/*Question: Reduce the number 'inputrational' to its lowest form and store it in 'outputrational'
struct rational *inputrational  : Actual rational number to be reduced
struct rational *outputrational : Variable to store the rational number in its lowest form */
void reduce(struct rational *inputrational, struct rational *outputrational) {
    //Write your solution code below this line
    if(inputrational->numerator == inputrational->denominator)
    {
        outputrational->numerator == 1;
        outputrational->denominator == 1;
        return;
    }
    if(inputrational->numerator > inputrational->denominator)
    {
        for(int index = (inputrational->numerator)/2;index > 0;index--)
        {
            if((inputrational->numerator)%index == 0 && (inputrational->denominator)%index == 0)
            {
                outputrational->numerator = (inputrational->numerator)/index;
                outputrational->denominator = (inputrational->denominator)/index;
                return;
            }
        }
    }
    else
    {
        for(int index = (inputrational->denominator)/2;index > 0;index--)
        {
            if((inputrational->numerator)%index == 0 && (inputrational->denominator)%index == 0)
            {
                outputrational->numerator = (inputrational->numerator)/index;
                outputrational->denominator = (inputrational->denominator)/index;
                return;
            }
        }
    }

}

/* Question: Check whether both the rational numbers obtained in the lowest form are equal or not. 
             Retrun true or false accordingly
struct rational *rational_number1: Denotes the first rational number
struct rational *rational_number2: Denotes the second rational number */
bool isEqual(struct rational num1, struct rational num2) {
    //Write your solution code below this line
        reduce(&num1, &num1);
        reduce(&num2, &num2);
        if((num1.numerator == num2.numerator) && (num1.denominator == num2.denominator))
        {
            return 1;
        }
        else
        {
            return 0;
        }

}
