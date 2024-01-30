int replace(int arr[], int size, int start, int toFind, int replaceWith) {
    for (int i = start; i < size; ++i) {
        if (arr[i] == toFind) {
            arr[i] = replaceWith;
            return i;
        }
    }
    
    return -1;
}

/*
    Explanation of issues:
    
    1. The loop should be i < size instead of i <= size because the '=' will be aout of range we deal with idex not element
       

    2. The condition 'arr[i] == toFind' to find the occurrence of 'toFind'.
       

    3. arr[replaceWith]=arr[i] the correct is arr[i] = replaceWith you reversed it
       

    4. return arr[i] is wrong becuase we want to return the index not the value so the correct one is return i
    
    5. i removed else block when i played arround the code , it apears that the else is not needed and it will make the code go to the loop early 
*/


