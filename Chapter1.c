#include <stdio.h>
// Find Notes at the end.

/* Function Prototype */
int binary_search(int ordered_list[], size_t size, int item);

int main(void){
    int my_list[]={1,2,3,4,5,6,7,8};
    // Calculate array size. Array size-1 will be the initial upper limit/ highest index.
    size_t size = sizeof(my_list) / sizeof(my_list[0]); 
    // 
    int ans = binary_search(my_list, size, 8); 
    printf("\nPosition is : %d\n", ans);
    return(0);
}

int binary_search(int ordered_list[], size_t size, int item){
    int lower_limit=0;
    size_t upper_limit = size - 1;
    int mid = (lower_limit+upper_limit)/2;
    while(lower_limit<=upper_limit){
        mid = (lower_limit+upper_limit)/2;
        if(ordered_list[mid]==item){
            return mid;
        }
        else if (ordered_list[mid]<item){
            lower_limit = mid+1;
            continue;
        }
        else if (ordered_list[mid]>item){
            upper_limit = mid-1;
            continue;
        }
    }
    return 0;
}

// NOTES
/* 
    -> Apparently, you can't calculate the size of the array within the binary_search function
       using sizeof(ordered_list) / sizeof(ordered_list[0]). 
       When you pass an array to a function in C, it decays into a pointer to its first element. 
       Therefore, sizeof(ordered_list) in the function will not give you the size of the array 
       but rather the size of a pointer (which doesn't change regardless of the array's size).

    -> 
*/