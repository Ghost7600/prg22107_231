/*
 * main.c
 *
 *  Created on: 3 de abr. de 2023
 *      Author: kenner
 */

// Program: Vector Demo 1
// Purpose: To demonstrate STL vectors

// #include "stdafx.h" - include if you use pre compiled headers

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void sort_vector(std::vector<T>& v) {
    std::sort(v.begin(), v.end());
}

int main() {
	int n;
    // create a vector of integers
    std::vector<int> my_vector;
    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;
    std::cout << "Enter " << n << " integers: ";

    for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            my_vector.push_back(x);
        }

    for (int i = 0; i < my_vector.size(); i++) {
            std::cout << my_vector[i] << " ";
        }

    // sort the vector
    sort_vector(my_vector);
    std::cout << std::endl; // add a new line at the end

    // print out the sorted vector
    for (int i = 0; i < my_vector.size(); i++) {
        std::cout << my_vector[i] << " ";
    }

    return 0;
}


