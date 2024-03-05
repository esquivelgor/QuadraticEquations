# **Quadratic Equation Solver | HP**

## Overview

Simple C++ program to solve quadratic equations of the form \(ax^2 + bx + c = 0\) and output the roots. The program takes three command-line arguments representing the coefficients \(a\), \(b\), and \(c\).

## Usage

First, we need to build and compile our program:

```bash
make
```

Run the program by providing the coefficients as command-line arguments, replace `<a>`, `<b>`, and `<c>`:

```bash
./quadraticEquation <a> <b> <c> 
```

## Algorithm Details

1. **Input Validation:**
   - The program begins by checking if the correct number of parameters is provided. If not, it prompts the user to retry with the correct input.

2. **Quadratic Formula:**
   - The algorithm employs the quadratic formula to calculate the roots of the quadratic equation: $\frac{-b\pm\sqrt{b^2-4ac}}{2a}$
3. **Discriminant Calculation:**
   - As the first computation step, the program calculates the discriminant ($\Delta$) using the formula $(b^2 - 4ac)$, which determines the nature of the roots.

4. **Root Types:**
   - Depending on the discriminant value, three possibilities arise:
     1. **Positive Discriminant:**
        - If the discriminant is positive, the roots are real and different.
     2. **Zero Discriminant:**
        - If the discriminant is zero, the roots are real and equal.
     3. **Negative Discriminant:**
        - If the discriminant is negative, indicating complex roots, the program returns an empty response.