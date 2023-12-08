
#include "ft_printf.h"
#include <limits.h>

int main()
{
    // Test the error-checking mechanism
    if (ft_printf("-1", 42))
    {
        // Handle the error as needed
        fprintf(stderr, "Error in ft_printf\n");
        return 1;
    }

    return 0;
}