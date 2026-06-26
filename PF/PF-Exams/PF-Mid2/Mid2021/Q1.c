#include <stdio.h>
void func (int arr[][4]) {
    int column = sizeof(arr[0])/sizeof(arr[0][0]);
    printf("%d ", column);
    int rows = sizeof(arr)/sizeof(arr[0]);
    printf("%d ", rows);
}
int main () {
    int array[][4] = {{192, 48, 206, 37}, {147, 90, 312, 21}, {186, 12, 121, 38}, {114, 21, 408, 39}, {267, 13, 382, 29}};
    func (array);
}