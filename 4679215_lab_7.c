#include <stdio.h>

void bubbleSort(int arr[], int count)
{
    int s[8] = {0};     // array of swaps per index
	for(int i = 0; i < count-1; ++i){
		for(int j = 0; j < count - i - 1;++j){
			if(arr[j] > arr[j+1]){      // swap elements that are not in order
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;

				s[i]++;
			}
		}
    }
    int passNum = 0; // pass index
    for(int k = 0; k < count - 1; ++k){
        passNum++;
        printf("iteration %d: %d\n", passNum, s[k]); // loop to print num of swaps in each index
    }
}

int main(){
    int size = 9;   // size of array
    int bub[] = {97,16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(bub, size);

    return 0;
}