#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//                            4 4 4 4 4 4 4
//                            4 3 3 3 3 3 4
//                            4 3 2 2 2 3 4
//                            4 3 2 1 2 3 4
//                            4 3 2 2 2 3 4
//                            4 3 3 3 3 3 4
//                            4 4 4 4 4 4 4

int main()
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
  	int length = (n*2) -1;
  	for (int i=0; i < length; i++){
        for (int j=0; j < length; j++){
            int min = i < j ? i : j;
            min = min < length-i ? min : length-i-1;
            min = min < length-j-1 ? min : length-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
  	}

    return 0;
}
