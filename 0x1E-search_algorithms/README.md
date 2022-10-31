# Searching Algorithms

1. __Linear Search__
The time complexity of linear search is **O(n)** and is best for unsorted array.
```
LINEAR_SEARCH(A, N, VAL)
Step 1: [INITIALIZE] SET POS = -1
Step 2: [INITIALIZE] SET I = 1
Step 3:
Repeat Step 4 while I<=N
Step 4:
    IF A[I] = VAL
        SET POS = I
        PRINT POS
        Go to Step 6
    [END OF IF]
    SET I = I + 1
[END OF LOOP]
Step 5: IF POS = –1
VALUE IS NOT PRESENT
IN THE ARRAY
[END OF IF]
Step 6: EXIT
```
---
2. __Binary Search__
   Binary search takes a **f(n) = O(log2n)** time complexity to execute. It suitable for sorted array.
```
BINARY_SEARCH(A, lower_bound, upper_bound, VAL)
Step 1: [INITIALIZE] SET BEG = lower_bound
END = upper_bound, POS = - 1
Step 2:  Repeat Steps 3 and 4 while BEG <= END
Step 3:
            SET MID = (BEG + END)/2
Step 4:
            IF A[MID] = VAL
                SET POS = MID
                PRINT POS
                Go to Step 6
            ELSE IF A[MID] > VAL
                SET END = MID - 1
            ELSE
                SET BEG = MID + 1
            [END OF IF]
        [END OF LOOP]
Step 5: IF POS = -1
    VALUE IS NOT PRESENT IN THE ARRAY
        [END OF IF]
Step 6: EXIT
```
---
__AUTHOR__:

__EMMANUEL CHALO__

[email](https://mail.google.com/mail/emusyoka759@gmail.com "email chalo") ||