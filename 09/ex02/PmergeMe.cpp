#include "PmergeMe.hpp"

template <typename T, class C>
void PmergeMe<T, C>::startSorting(const std::string &className, bool printCntner)
{
	fordJohnson(0, container.size() - 1);
	if (printCntner)
		printContainer(true);
	std::clock_t endTime = std::clock();
    double timePassed = double(endTime - _start) / CLOCKS_PER_SEC * 1000.0;
	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << 
	container.size() << " elements with " << 
	className << "\t: " << timePassed << " ms" << std::endl; 
}

template <typename T, class C>
void PmergeMe<T, C>::fordJohnson(int left, int right)
{
	if (left < right)
	{ 
		int middle = left + (right - left) / 2;
		fordJohnson(left, middle);
		fordJohnson(middle + 1, right);

		merge(container, left, middle, right);
	}
}

template <typename T, class C>
void PmergeMe<T, C>::merge(C &array, int left, int middle, int right)
{
    int leftSize = middle - left + 1;
    int rightSize = right - middle;

    if (leftSize < 0 || rightSize < 0) {
        throw std::runtime_error("Invalid sizes for merging.");
    }

    C leftArray(leftSize), rightArray(rightSize);

    for (int i = 0; i < leftSize; i++)
    {
        leftArray[i] = array[left + i];
    }

    for (int i = 0; i < rightSize; i++)
    {
        rightArray[i] = array[middle + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < leftSize && j < rightSize)
    {
        if (leftArray[i] <= rightArray[j])
        {
            array[k] = leftArray[i];
            i++;
        }
        else
        {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < leftSize)
    {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < rightSize)
    {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

template <typename T, class C>
void PmergeMe<T, C>::printContainer(bool sorted)
{
	if (sorted)
		std::cout << "After:\t";
	else 
		std::cout << "Before:\t";
	for (typename C::iterator it = container.begin(); it != container.end(); ++it)
	{
		std::cout << " " << *it;
	}
	std::cout << std::endl;	
}

template <typename T, class C>
PmergeMe<T, C>::PmergeMe(int size, char *argv[])
{
	_start = std::clock();
	for (int i = 1; i < size; i++)
	{
		std::stringstream ss(argv[i]);
		int tmp;
		if (ss >> tmp && tmp > 0)
		{
			container.push_back(tmp);
		}
		else
			throw BadNumberInputException();
	}
}

template <typename T, class C>
PmergeMe<T, C>::PmergeMe(const PmergeMe &other)
{
	this->container = other.container;
}

template <typename T, class C>
PmergeMe<T, C> &PmergeMe<T, C>::operator=(const PmergeMe<T, C> &other)
{
	if (this->container == other.container)
		return *this;
		this->container = other.container;
	return *this;
}

template <typename T, class C>
PmergeMe<T, C>::~PmergeMe()
{
}
template class PmergeMe<int, std::deque<int> >;
template class PmergeMe<int, std::vector<int> >;