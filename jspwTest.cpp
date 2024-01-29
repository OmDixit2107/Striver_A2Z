#include <stdio.h>
void float_arr_filler(int columns, float arr[][columns], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the (%d,%d) element of matrix: \n", i, j);
            scanf("%f", &arr[i][j]);
        }
        printf("\n");
    }
}
void swap(float *a, float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}
void interchange(int x_coor, int y_coor, int rows, int cols, float arr[][cols])
{
    for (int i = x_coor; i < rows; i++)
    {
        if (arr[i][0] != 0)
        {
            for (int j = y_coor; j < cols; j++)
            {
                swap(&arr[i][j], &arr[x_coor][j]);
            }
            break;
        }
    }
}

void float_arr_printer(int columns, float arr[][columns], int rows)
{
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%0.4f ", arr[i][j]);
        }
        printf("\n");
    }
}

void solver(int x_coor, int y_coor, int rows, int cols, float arr[][cols])
{
    if (x_coor == rows)
    {
        return;
    }

    interchange(x_coor, y_coor, rows, cols, arr);
    float_arr_printer(cols, arr, rows);

    float n = arr[x_coor][y_coor];
    for (int j = y_coor; j < cols; j++)
    {
        arr[x_coor][j] = (float)(arr[x_coor][j] / n);
    }
    float m;
    for (int i = x_coor + 1; i < rows; i++)
    {
        m = arr[i][y_coor];
        for (int j = y_coor; j < cols; j++)
        {
            arr[i][j] = arr[i][j] - m * arr[x_coor][j];
        }
    }
    solver(x_coor + 1, y_coor + 1, rows, cols, arr);
}

int main(int argc, char const *argv[])
{
    int rows, cols;
    printf("Enter the number of variables of linear equations: ");
    scanf("%d", &rows);
    cols = rows + 1;
    printf("Enter coefficient matrix: \n");
    float coeff_arr[rows][cols];
    float_arr_filler(cols, coeff_arr, rows);
    float_arr_printer(cols, coeff_arr, rows);
    solver(0, 0, rows, cols, coeff_arr);
    float_arr_printer(cols, coeff_arr, rows);

    return 0;
}