This file should contain:

  - your name
  - your UNI
  - lab assignment number
  - description for each part
  
The description should indicate whether your solution for the part is
working or not.  You may also want to include anything else you would
like to communicate to the grader such as extra functionalities you
implemented or how you tried to fix your non-working code.

-Brennen Bickford
-btb2125
-lab 3

--Part 1--
Description: All code should work as expected. I decided to set up make clean
to clear the .a file, so part 1 must be compiled for part 2 to work.



==14022== Memcheck, a memory error detector
==14022== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14022== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==14022== Command: ./mylist
==14022== 
testing addFront(): 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 
testing flipSignDouble(): -9.0 -8.0 -7.0 -6.0 -5.0 -4.0 -3.0 -2.0 -1.0 
testing flipSignDouble() again: 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 
testing findNode(): OK
popped 9.0, the rest is: [ 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 8.0, the rest is: [ 7.0 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 7.0, the rest is: [ 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 6.0, the rest is: [ 5.0 4.0 3.0 2.0 1.0 ]
popped 5.0, the rest is: [ 4.0 3.0 2.0 1.0 ]
popped 4.0, the rest is: [ 3.0 2.0 1.0 ]
popped 3.0, the rest is: [ 2.0 1.0 ]
popped 2.0, the rest is: [ 1.0 ]
popped 1.0, the rest is: [ ]
testing addAfter(): 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 
popped 1.0, and reversed the rest: [ 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 ]
popped 9.0, and reversed the rest: [ 2.0 3.0 4.0 5.0 6.0 7.0 8.0 ]
popped 2.0, and reversed the rest: [ 8.0 7.0 6.0 5.0 4.0 3.0 ]
popped 8.0, and reversed the rest: [ 3.0 4.0 5.0 6.0 7.0 ]
popped 3.0, and reversed the rest: [ 7.0 6.0 5.0 4.0 ]
popped 7.0, and reversed the rest: [ 4.0 5.0 6.0 ]
popped 4.0, and reversed the rest: [ 6.0 5.0 ]
popped 6.0, and reversed the rest: [ 5.0 ]
popped 5.0, and reversed the rest: [ ]
==14022== 
==14022== HEAP SUMMARY:
==14022==     in use at exit: 0 bytes in 0 blocks
==14022==   total heap usage: 19 allocs, 19 frees, 1,312 bytes allocated
==14022== 
==14022== All heap blocks were freed -- no leaks are possible
==14022== 
==14022== For counts of detected and suppressed errors, rerun with: -v
==14022== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)




--Part 2--
Description: All code should work as expected.



==16224== Memcheck, a memory error detector
==16224== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16224== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==16224== Command: ./revecho
==16224== 

dude not found
==16224== 
==16224== HEAP SUMMARY:
==16224==     in use at exit: 0 bytes in 0 blocks
==16224==   total heap usage: 1 allocs, 1 frees, 3,072 bytes allocated
==16224== 
==16224== All heap blocks were freed -- no leaks are possible
==16224== 
==16224== For counts of detected and suppressed errors, rerun with: -v
==16224== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
