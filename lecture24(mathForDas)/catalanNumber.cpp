#include <iostream>
using namespace std;

long long factorial(int n)
{
    long long result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

long long catalan(int n)
{
    return factorial(2 * n) / (factorial(n + 1) * factorial(n));
}

int main()
{
    int n = 5;
    cout << catalan(n);
}

// Catalan numbers appear in various counting problems, often involving recursive structures. They are named after the Belgian mathematician Eugène Charles Catalan.
// Catalan numbers appear in various counting problems, often involving recursive structures. They are named after the Belgian mathematician Eugène Charles Catalan.

// Examples of Catalan numbers:
// 1. Counting binary trees: The nth Catalan number gives the number of binary trees with n internal nodes.
// 2. Counting triangulations: The nth Catalan number gives the number of ways to triangulate a polygon with n+2 sides.
// 3. Counting lattice paths: The nth Catalan number gives the number of lattice paths from (0,0) to (n,n) that do not cross the diagonal.

// Why learn about Catalan numbers?
// 1. Understanding recursive structures: Catalan numbers help us understand and solve problems involving recursive structures.
// 2. Modeling real-world problems: Catalan numbers can be used to model and solve real-world problems, such as counting the number of ways to triangulate a polygon.
// 3. Developing problem-solving skills: Learning about Catalan numbers helps develop problem-solving skills, such as breaking down complex problems into simpler ones.

// What can happen with this knowledge?
// 1. Improved problem-solving skills: Understanding Catalan numbers can help improve problem-solving skills, leading to better performance in mathematics and computer science.
// 2. Applications in computer science: Catalan numbers have applications in computer science, such as in the analysis of algorithms and data structures.
// 3. Insights into combinatorics: Learning about Catalan numbers provides insights into combinatorics, a fundamental area of mathematics.