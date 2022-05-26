#include<stdio.h>
#include<stdbool.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
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

void sort(int n, int a[]) {
	for (int steps=0; steps<n; steps++) {
    	for (int i=0; i+1<n; i++) {
        	if (a[i] > a[i+1]) {
            	swap(&a[i], &a[i+1]);
        	}
        }
		if (is_sorted(n, a))	break;
	}
}

int main() {
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    sort(n,a);

    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    return 0;
}
