# Problem A

## Description

You are trying to sort a given set of numbers in ascending and descending order. Additionally, you want to see if a given number is present in the set of numbers.

## Input

In the first line, 2 numbers *N* and *X*, ($ 1 \leq N \leq 100 $, $ 1 \leq X \leq 100$) representing the size of the vector, and the number to search, respectively. The next line contains *N* numbers $n_{i}$ ($1 \leq n_{ij} \leq 10$), representing the values of the set of numbers. 

## Output

Outputs the numbers on the input in the first line, then the numbers of the vector in the second line. In the third line the values of the vector sorted in ascending order, and in the fourth line in descending order. The next line should print "Found number: X", if the number is part of the vector's numbers, or "Not found" otherwise. 

## Sample 

<table>
    <tr>
       <th> Sample Input </th>
       <th> Sample Output </th>
    </tr>
    <tr>
        <td>
            5 5
            <br>
            1 3 5 2 4
        </td>
        <td>
            5 10
            <br>
            1 3 5 2 4 
            <br>
            1 2 3 4 5 
            <br>
            5 4 3 2 1 
            <br>
            Found number
        </td> 
    </tr>
    </tr>
    <tr>
        <td>
            2 3
            <br>
            5 6 
        </td>
        <td>
            2 3
            <br>
            5 6 
            <br>
            5 6
            <br>
            6 5
            <br>
            Not found
        </td>
    </tr>

</table>
