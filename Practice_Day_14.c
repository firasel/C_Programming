#include<stdio.h>
#include<stdbool.h>

static int count = 0;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    count++;
}

bool is_sorted(int n, int a[]){
    bool check = false;
    for(int i=0; i<n-1; i++){
        if(a[i] < a[i+1]) check = true;
        else{
            check = false;
            break;
        }
    }
    return check;
}

void bubbleSort(int n, int a[]) {
	for (int steps=0; steps<n; steps++) {
    	for (int i=0; i+1<n; i++) {
        	if (a[i] > a[i+1]) {
            	swap(&a[i], &a[i+1]);
        	}
        }
		if (is_sorted(n, a))	break;
	}
}

void selectionSort(int n, int a[]) {
	for (int steps=0; steps<n; steps++) {
    	int minelement = a[steps], pos = steps;
    	for (int i=steps; i<n; i++) {
        	if (a[i] < minelement) {
            	minelement = a[i];
            	pos = i;
        	}
    	}
    	swap(&a[steps], &a[pos]);
    }
}

int main() {
    int n;
    scanf("%d",&n);

    int a[n],b[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        b[i] = a[i];
    }

    bubbleSort(n,a);

    printf("Bubble sort call the swap function of %d times.\n",count);
    count = 0;

    selectionSort(n,b);

    printf("Selection sort call the swap function of %d times.\n",count);

    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    return 0;
}
