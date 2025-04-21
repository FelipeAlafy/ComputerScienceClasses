/* Uma empresa deseja criar um sistema para cadastrar funcionários. Cada funcionário tem um nome, um cargo e um salário.
 * O nome pode ter no máximo 50 caracteres e o cargo pode ter até 30 caracteres. Após cadastrar 5 funcionários, o sistema
 * deve verificar se há algum funcionário com o mesmo cargo e, se houver, exibir os detalhes desses funcionários.
 */

/*
 * An enterprise whises to create a system to register its employees. Each employee has a name, a position and a
 * salary. Each name should have up to 50 characters and each position should have up to 30 characters. After registering
 * 5 employees the system should check if there are more than an employee with the same position. If encounter it should
 * show this employees data.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    const int MAX_EMPLOYEES = 3;
    const int MAX_NAME_LENGTH = 50;
    const int MAX_POSITION_LENGTH = 30;

    char employees[MAX_EMPLOYEES][MAX_NAME_LENGTH];
    char positions[MAX_EMPLOYEES][MAX_POSITION_LENGTH];
    float salary[MAX_EMPLOYEES];

    for (int emp = 0; emp < MAX_EMPLOYEES; emp++) {
        printf("Please insert the name of the employee:\n>> ");
        fgets(employees[emp], MAX_NAME_LENGTH, stdin);

        printf("Please insert the position of the employee:\n>> ");
        fgets(positions[emp], MAX_POSITION_LENGTH, stdin);

        printf("Please insert the salary of the employee:\n>> ");
        scanf("%f", &salary[emp]);
        getchar();
    }

    for (int emp = 0; emp < MAX_EMPLOYEES; emp++) {
        int count_position = 0;
        char current_position[MAX_POSITION_LENGTH];
        strcpy(current_position, positions[emp]);
        for (int pos = 0; pos < MAX_EMPLOYEES; pos++) {
            if (strcmp(positions[pos], current_position) == 0) {
                count_position++;
            }
        }
        if (count_position > 1) {
            printf("Founded %d employees with this position: %s", count_position, current_position);
            for (int pos = 0; pos < MAX_EMPLOYEES; pos++) {
                if (strcmp(positions[pos], current_position) == 0) {
                    printf("\t\t>> %s", employees[pos]);
                }
            }
            return 0;
        }
    }
}