#include <unistd.h> // Include the necessary header for the write function

int main(void)
{
    int i;
    int k;
    int l;

    i = 1; // Initialize a counter variable i with a value of 1

    while (i <= 100) // Start a loop that runs from 1 to 100 (inclusive)
    {
        if ((i % 3 == 0) && (i % 5 == 0)) // Check if i is divisible by both 3 and 5
            write(1, "fizzbuzz", 8); // If true, print "fizzbuzz" to the standard output
        
        else if (i % 3 == 0) // Check if i is divisible by 3
            write(1, "fizz", 4); // If true, print "fizz" to the standard output
        
        else if (i % 5 == 0) // Check if i is divisible by 5
            write(1, "buzz", 4); // If true, print "buzz" to the standard output
        
        else if (i > 10) // If i is not divisible by 3 or 5 and greater than 10
        {
            k = i / 10 + '0'; // Calculate the tens digit and convert it to a character
            l = i % 10 + '0'; // Calculate the ones digit and convert it to a character
            write(1, &k, 1); // Print the tens digit
            write(1, &l, 1); // Print the ones digit
        }
        else // If i is a single-digit number (1 to 9)
        {
            k = i + '0'; // Convert i to a character
            write(1, &k, 1); // Print the single-digit number
        }
        write(1, "\n", 1); // Print a newline character to separate each iteration

        i++; // Increment the counter variable i
    }

    return 0; // Return 0 to indicate successful execution
}
