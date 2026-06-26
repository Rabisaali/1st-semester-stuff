#include <stdio.h>
int main () {
    int account_num;
    char service_code;
    int number_min, num_min_day, num_min_night;
    int rem;
    int bill;
    printf("Enter your acount number: ");
    scanf("%d", &account_num);
    printf("Enter your service type: ");
    scanf(" %c", &service_code);
   
    

    switch(service_code) {
        case 'r':
        case 'R':
            bill = 10;
            printf("Enter number of minutes: ");
            scanf("%d", &number_min);
            if (number_min<=55) {
                bill += 0;
            }
            else { 
                rem = bill-55;  
                bill += rem*0.2;
            }
            printf ("your account number is %d, the serice type is %c, the service was used for %d minutes, and the total bill is %d", account_num, service_code, number_min, bill); 
            break;

        case 'p':
        case 'P':
            bill = 25;
            printf("Enter number of minuter the service was used during the day: ");
            scanf("%d", &num_min_day);
            printf("Enter number of minutes the service was used during the night: ");
            scanf("%d", num_min_night);
            if (num_min_day <= 75) {
                bill += 0;
            }
            else {
                rem = num_min_day-75;
                bill += rem*0.1;
            }
            if (num_min_night <= 100) {
                bill += 0;
            }
            else {
                rem = num_min_night-100;
                bill += rem*0.05;
            break;
            printf ("your account number is %d, the serice type is %c, the service was used for %d minutes in morning and %d at night, and the total bill is %d", account_num, service_code, num_min_day, num_min_night, bill);

        default:
            printf("Invalid input\n");
    }

}