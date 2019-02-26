
        //ADAMOU MOUTARI Souwaiba

//Logical operators
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Initialize
    long long i, g, m;
    int s, p, sum;

        //prompt user for credit card number
    do
    {
        i=get_long_long("Enter your credit card number please: ");
    }
    while (i<0);

        //loop 1
    for (g=i, s=0; g>0; g/=100)
    s+= g%10;

        //loop 2

    for(m=i/10, p=0; m>0; m/=100)
    {
        //condition 1
        if (2* (m%10)>9)
        {
            p+=(2*(m%10))/10;
            p+=(2*(m%10))%10;
        }
        //condition 2
        else
            p+= 2*(m%10);
    }

    sum=s+p;
    //condition 3
    if (sum%10==0)

    {        // check if the credit card is an AMEXcard
        if ((i >=340000000000000 && i<350000000000000) || (i>=370000000000000 && i<380000000000000))
            //print the card name
            printf("This card is an American Express card\n");

            //if the credit card is not an AMEXcard when analizing the two first digts
        else if (i>=510000000000000 && i<560000000000000)
            //print it is a Mastercard
            printf("This card is a Mastercard\n");

            //if the credit card is not an AMEXcard or Mastercard. check the type of card
        else if ((i>=4000000000000 && i<5000000000000) || (i>=4000000000000000 && i<5000000000000000))

           //print the credit card is a Visacard seeing the two first digits
            printf ("This card is a Visa Card\n");
        else

           // if not all these conditions, print the card is invalid card
        printf("This card is invalid \n");
    }
}