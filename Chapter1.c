#include <stdio.h>

int binary_search(int ordered_list[], size_t size, int item);

int main(void){
    int my_list[]={1,2,3,4,5,6,7,8};
    size_t size = sizeof(my_list) / sizeof(my_list[0]); // Calculate array size using size_t
    int ans = binary_search(my_list, size, 81); // Ans must be 3
    printf("Position is : %d\n", ans);
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
