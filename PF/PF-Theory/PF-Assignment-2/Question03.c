#include <stdio.h>

void update(int row, int column, int grid[row][column]);
void query(int row, int column, int grid[row][column]);
void diagnosis(int row, int column, int grid[row][column]);

int main (void) {
    printf("----Welcome to IESCO----\n");
    int row, column;
    printf("Enter the rows of the grid: ");
    scanf("%d", &row);
    printf("Enter the columns of the grid: ");
    scanf("%d", &column);
    int grid[row][column];

    //initializing all the sectors with 0
    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) {
            grid[i][j] = 0;
        }
    }
    int exit;
    do {
        int choice;
        printf("\nTo update a sector's status enter 1\nTo query a sector's status enter 2\nTo run diagnosis on the entire grid enter 3\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\n");
                update(row, column, grid);
                break;
            case 2:
                printf("\n");
                query(row, column, grid);
                break;
            case 3:
                printf("\n");
                diagnosis(row, column, grid);
                break;
            default:
                printf("Enter a valid code\n");
        }
        printf("\nTo exit the program enter 0\nTo continue enter 1\n");
        scanf("%d", &exit);
    } while (exit == 1);
    return 0;
}

void update(int row, int column, int grid[row][column]) {
    int row_cord, col_cord;
    printf("Enter the specific coordinates of the grid(first row and then column): ");
    scanf("%d %d", &row_cord, &col_cord);
    int status;
    printf("Enter the status of the grid:\nTo toggle power status press 1\nTo toggle overload warning press 2\nTo toggle maintenance required enter 3\n");
    scanf("%d", &status);
    switch (status) {
        case 1:
            grid[row_cord][col_cord] ^= 1;
            break;
        case 2:
            grid[row_cord][col_cord] ^= 2;
            break;
        case 3:
            grid[row_cord][col_cord] ^= 4;
            break;
        default:
            printf("Invalid choice!\n");
            return;
    }
    printf("Sector status updated!\n");
    return;
}

void query (int row, int column, int grid[row][column]) {
    int row_cord, col_cord;
    printf("Enter the coordinates of the sector (first row's and then column's): ");
    scanf("%d %d", &row_cord, &col_cord);

    int status_code = grid[row_cord][col_cord];

    if ((status_code & 1) == 1) {
        printf("Power is ON\n");
    }
    else {
        printf("Power is OFF\n");
    }

    if ((status_code & 2) == 2) {
        printf("Overloaded Warning\n");
    }
    else {
        printf("Not Overloaded\n");
    }

    if ((status_code & 4) == 4) {
        printf("Maintenance Required\n");
    }
    else {
        printf("Maintenance not required\n");
    }
    return;
}

void diagnosis(int row, int column, int grid[row][column]) {
    int overloaded = 0;
    int maintenance = 0;

    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) {
            if ((grid[i][j] & 2) == 2) overloaded++;
   
            if ((grid[i][j] & 4) == 4) maintenance++;
        }
    }
    printf("%d sector(s) are overloaded and %d sectors(s) require maintenance\n", overloaded, maintenance);
    return;
}