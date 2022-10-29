//
//  RemoveElement.c
//  learn
//
//  Created by apple on 29/10/22.
//

#include "RemoveElement.h"
void removeElementFromArr() {
    printf("Hello, World!\n");
    int arr[7] = {2,2,2,1,2,3,4};
    // Write C code here
    printf("\nHello world %d", arr[0]);
    int returnedVal = removeElement(arr, 7, 2);
    printf("\nAnswer == %d", returnedVal);
}

int removeElement(int* nums, int numsSize, int val){
    int currentLoc = 0;
    
    for (int indec = 0; indec < numsSize; indec++) {
        if (nums[indec] != val) {
            nums[currentLoc] = nums[indec];
            currentLoc += 1;
        }
    }
    return currentLoc;
}
