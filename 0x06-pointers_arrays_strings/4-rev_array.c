/**
 * reverse_array - reverses the content of an integer array
 *
 * @a: pointer to integer array
 * @n: number of elements to reverse
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
        int temp, start, end;

        start = 0;
        end = n - 1;

        /*
         * Swap the elements at the beginning
         * and the end of the array, and then
         * work inwards until the middle is reached.
         */

        while (start < end)
        {
                temp = a[start];
                a[start] = a[end];
                a[end] = temp;
                start++;
                end--;
        }
}
