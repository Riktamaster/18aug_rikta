//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include <stdio.h>

int main() {
    int a[100], n, i, j, temp;
    char so;
    
    printf("Array size: ");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Choose sorting order (A for ascending, D for descending): ");
    scanf(" %c", &so); 
    
    if (so=='A'||'a') {
        for (i=0;i<n;i++) //loop for ascending order
		{
            for (j=0;j<n;j++) //loop for comparing other values
			{
            	
                if (a[j]<a[i]) //comparing other array elements
				{
                    temp = a[i]; //using temporary variable for sorting last value
                    a[i] = a[j]; //replacing value
                    a[j] = temp; //sorting last value
                }
            }
        }
        
        printf("Ascending order: ");
        for (i=0;i<n;i++) //loop for printing array data after sorting
		{
            printf("%d ",a[i]);
        }
    } else if (so=='D'||'d') {
        for (i=0;i<n;i++) //loop for descending order
		{
            for (j=0;j<n;j++) //loop for comparing other values
			{
                if (a[j]>a[i]) //comparing other array elements
				{
                    temp = a[i]; //using temporary variable for sorting last value
                    a[i] = a[j]; //replacing value
                    a[j] = temp; //sorting last value
                }
            }
        }
        
        printf("Descending order: ");
        for (i=0;i<n;i++)// loop for printing array data after sorting 
		{
            printf("%d ", a[i]);
        }
    } else {
        printf("Invalid choice for sorting order. Please enter 'A' for ascending or 'D' for descending.\n");
    }

    return 0;
}

