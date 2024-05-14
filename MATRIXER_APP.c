#include <stdio.h>
#include <conio.h>
#include <math.h>

// Function for addition of matrix
void addition()
{
    int row, col;
    printf("How many Row and Coloum of Matrix (row X col) do you want to Add? -- \n");
    scanf("%d", &row);
    printf("x\n");
    scanf("%d", &col);

    // elements of matrix A

    int i, j, A[row][col], B[row][col], sum;

    printf("\nEnter any Element in Matrix A :\n");

    for (i = 1; i <= row; i++)
    {

        for (j = 1; j <= col; j++)
        {
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    // elements of matrix B

    printf("Enter any Element in Matrix B :\n");

    for (i = 1; i <= row; i++)
    {

        for (j = 1; j <= col; j++)
        {
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    // display matrix A

    printf("Matrix A : \n");
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }

    // display matrix B

    printf("\nMatrix B : \n");
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            printf(" %d ", B[i][j]);
        }
        printf("\n");
    }

    // sum of matrix A and B

    printf("\nAddition of matrix A and B\n");

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            sum = A[i][j] + B[i][j];
            printf(" %d ", sum);
        }
        printf("\n");
    }
    printf("Again,");
}

// Function for subtraction of matrix
void subtraction()
{
    int row, col;
    printf("How many Row and Coloum of Matrix (row X col) do you want to Subtract? -- \n");
    scanf("%d", &row);
    printf("x\n");
    scanf("%d", &col);

    // elements of matrix A

    int i, j, A[row][col], B[row][col], subtract;

    printf("\nEnter any Element in Matrix A :\n");

    for (i = 1; i <= row; i++)
    {

        for (j = 1; j <= col; j++)
        {
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    // elements of matrix B

    printf("Enter any Element in Matrix B :\n");

    for (i = 1; i <= row; i++)
    {

        for (j = 1; j <= col; j++)
        {
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    // display matrix A

    printf("Matrix A : \n");
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }

    // display matrix B

    printf("\nMatrix B : \n");
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            printf(" %d ", B[i][j]);
        }
        printf("\n");
    }

    // subtraction of matrix A and B

    printf("\nSubtraction of matrix A and B\n");

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            subtract = A[i][j] - B[i][j];
            printf(" %d ", subtract);
        }
        printf("\n");
    }
    printf("Again,");
}

// Function for Multiplication of matrix

void multiplication()
{
    int rowA, colA, rowB, colB;
    printf("How many Row and Coloum of Matrix A(row X col) do you want to Multiplication? -- \n");
    scanf("%d", &rowA);
    printf("x\n");
    scanf("%d", &colA);

    int A[rowA][colA];

    printf("\nEnter elements of Matrix A:\n");
    for (int i = 1; i <= rowA; i++)
    {
        for (int j = 1; j <= colA; j++)
        {
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

ERROR:
    printf("How many Row and Coloum of Matrix B(row X col) do you want to Multiplication? -- \n");
    scanf("%d", &rowB);
    printf("x\n");
    scanf("%d", &colB);

    if (colA != rowB)
    {
        printf("Error: Number of columns in Matrix A must be equal to the number of rows in Matrix B for multiplication.\nAgain,\n");
        goto ERROR;
    }

    int B[rowB][colB];

    printf("\nEnter elements of Matrix B:\n");
    for (int i = 1; i <= rowB; i++)
    {
        for (int j = 1; j <= colB; j++)
        {
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    // display matrix A

    printf("Matrix A : \n");
    for (int i = 1; i <= rowA; i++)
    {
        for (int j = 1; j <= colA; j++)
        {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }

    // display matrix B

    printf("\nMatrix B : \n");
    for (int i = 1; i <= rowB; i++)
    {
        for (int j = 1; j <= colB; j++)
        {
            printf(" %d ", B[i][j]);
        }
        printf("\n");
    }

    // Multiplication of matrices
    int multiply[rowA][colB];
    for (int i = 1; i <= rowA; i++)
    {
        for (int j = 1; j <= colB; j++)
        {
            multiply[i][j] = 0;
            for (int k = 1; k <= colA; k++)
            {
                multiply[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // multiplication of matrix A and B

    printf("\nMultiplication of matrix A and B\n");

    for (int i = 1; i <= rowA; i++)
    {
        for (int j = 1; j <= colB; j++)
        {
            printf("%d ", multiply[i][j]);
        }
        printf("\n");
    }
    printf("\nAgain,");
}

// Function for division of matrix
void division()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);

    int row, col;
    printf("\nHow many Row and Coloum of Matrix (row X col) do you want to division? -- \n");
    scanf("%d", &row);
    printf("x\n");
    scanf("%d", &col);

    // elements of matrix A

    int i, j, A[row][col], division;

    printf("\nEnter any Element in Matrix A :\n");

    for (i = 1; i <= row; i++)
    {

        for (j = 1; j <= col; j++)
        {
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    // display your primary number
    printf("Your primary number : %d\n", num);

    // display matrix A

    printf("\nMatrix A : \n");
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }

    // division of matrix

    printf("\nDivision of matrix \n");

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            division = A[i][j] / num;
            printf(" %d ", division);
        }
        printf("\n");
    }
    printf("\nAgain,");
}

// Function for complements of matrix
void complements()
{
    int row, col;
    printf("How many Row and Coloum of Matrix (row X col) do you want to Complements? -- \n");
    scanf("%d", &row);
    printf("x\n");
    scanf("%d", &col);

    // elements of matrix A

    int i, j, A[row][col];

    printf("\nEnter any Element in Matrix A :\n");

    for (i = 1; i <= row; i++)
    {

        for (j = 1; j <= col; j++)
        {
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    // display matrix A

    printf("Matrix A : \n");
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }

    // Complement of matrix A

    printf("\nComplement of matrix A\n");

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            int complement = A[j][i];
            printf(" %d ", complement);
        }
        printf("\n");
    }
    printf("\nAgain,");
}

// Main function
int main()
{
    int press_function_number;

    printf("Welcome To MATRIXER - Let's enjoy Features of Matrixer\nCopyright(c) 2024 - Synoize\n\n");
X:
    printf("----------- Main Menu -----------\n\nPress 1 for -- Addition of Matrix\nPress 2 for -- Subtraction of Matrix\nPress 3 for -- Multiplication of Matrix\nPress 4 for -- Division of Matrix\nPress 5 for -- Complements of Matrix\nPress 6 for -- Inverse of Matrix\nPress 7 for -- Matrix (x)^3\nPress 8 for -- Matrix\nPress 9 for -- Matrix\nPress 10 for -- \n---------------------------------------\n");

    printf("Press Number : ");
    scanf("%d", &press_function_number);
    printf("-----------------------------------------\n");

    switch (press_function_number)
    {
    ADD:
    case 1:
        // Calling addition function
        addition();
        printf("\n");
        goto ADD;
        break;

    SUB:
    case 2:
        // Calling subtraction function
        subtraction();
        printf("\n");
        goto SUB;
        break;

    MULTIPLY:
    case 3:
        // Calling multiplication function
        multiplication();
        printf("\n");
        goto MULTIPLY;
        break;

    DIVISION:
    case 4:
        // Calling multiplication function
        division();
        printf("\n");
        goto DIVISION;
        break;

    COMPLEMENTS:
    case 5:
        // Calling Complements function
        complements();
        printf("\n");
        goto COMPLEMENTS;
        break;

    // INVERSE:
    // case 6:
    //     // Calling Inverse function
    //     inverse();
    //     printf("\n");
    //     goto INVERSE;
    //     break;

    default:
        break;
    }
    goto X;
    return 0;
}
