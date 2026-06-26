#include <stdio.h>
struct Element {
int value;
};
void recurse0p (struct Element arr[] [3], int rows, int cols, int i, int j){
if(i<rows) {
    if(j < cols) {
        printf("%d ", arr[i][j].value);
        recurse0p(arr, rows, cols, i,j+1);
    }
    else{
        printf("\n");
        recurse0p(arr, rows, cols, i+1,0);
    }
    }//end if (i<rows)
}

int main() {
struct Element arr[2][3] = {{ {1}, {2}, {3} }, { {4}, {5}, {6}}};
    recurse0p(arr, 2, 3, 0, 0);
    return 0;
}// end main