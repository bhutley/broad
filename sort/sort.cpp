/**
 * STL std::sort() example.
 * 
 * Time complexity is O(n log n)
 *
 * The gnu STL implementation uses a hybrid sorting algo. Introsort is
 * used first, which starts with quicksort and then switches to
 * heapsort if the recursion depth exceeds a certain level.
 */
#include <algorithm>
#include <vector>
#include <iostream>

void
output_numbers(const std::vector<int> &numbers)
{
    for (std::vector<int>::const_iterator it = numbers.begin(); it != numbers.end(); ++it)
    {
        if (it != numbers.begin())
            std::cout << ',';
        std::cout << *it;
    }
    std::cout << std::endl;
}

int
main()
{
    const int arr[] = {2, 29, 3, 13, 5, 7, 11, 17};
    std::vector<int> numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));

    std::sort(numbers.begin(), numbers.end());

    output_numbers(numbers);

    return 0;
}

