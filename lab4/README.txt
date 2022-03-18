This file should contain:

  - your name
  - your UNI
  - lab assignment number
  - description for each part
  
The description should indicate whether your solution for the part is
working or not.  You may also want to include anything else you would
like to communicate to the grader such as extra functionalities you
implemented or how you tried to fix your non-working code.
----------------------------------------------------------------
Brennen Bickford
btb2125
lab 4

Part 1:

(a) Here is what I input into class database:
 384: {Segmentation Fa} said {Core Dumped}
 385: {STOP TRUNCATING} said {i I I swear if this thi} //trying to be clever and had a typos


(b) Code should work as expected.

Valgrind:
==10730== Memcheck, a memory error detector
==10730== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10730== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10730== Command: ./mdb-lookup my-mdb
==10730==
lookup: one
  4: {AP sucks} said {no one ever}
 23: {adiba} said {hello everyone!}
 37: {E.T.} said {phone home}
 51: {aliza} said {hello everyone}
 69: {Anna} said {hello everyone!}
 83: {hi} said {everyone}
 84: {Shivansh} said {Hi everyone!}
105: {lee bollinger} said {give me your money >:)}
112: {no one} said {i'm broke}
257: {someone} said {I love this class}
295: {Judy} said {Hello everyone!}
305: {Hazel} said {Hi everyone}
314: {William Hammond} said {Can anyone hear me?}
370: {Vito Corleone} said {offer you cant refuse}
449: {Someone} said {Lab 4, here I come!}
451: {Someone again} said {I said, I'm coming!}
453: {Someone later} said {Oups, deadline!}
459: {yoo} said {any one hasn't start do}
466: {yao} said {anyone likes dimsum?}
469: {Adele} said {Someone else used my na}
491: {Maximilian} said {Hello everyone}
516: {Carlos} said {Hello Everyone}
522: {Bianca A} said {Part1(a) done}
546: {someone} said {interesting stuff}
lookup:
==10730==
==10730== HEAP SUMMARY:
==10730==     in use at exit: 0 bytes in 0 blocks
==10730==   total heap usage: 2,286 allocs, 2,286 frees, 83,376 bytes allocated
==10730==
==10730== All heap blocks were freed -- no leaks are possible
==10730==
==10730== For counts of detected and suppressed errors, rerun with: -v
==10730== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

