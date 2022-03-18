Brennen Bickford
btb2125
lab 5


*************************************************************************************
DESRIPTIONS
part1(a): Should work as expected

part1(b): tree attached below:

3140 18901 18901 18901 ?           -1 Ss       0   0:00  \_ sshd: btb2125 [priv]
18901 19741 18901 18901 ?           -1 S     4572   0:00  |   \_ sshd: btb2125@pts/158
19741 20673 20673 20673 pts/158   9151 Ss    4572   0:00  |       \_ -bash
20673  9151  9151 20673 pts/158   9151 S+    4572   0:00  |           \_ ./mdb-lookup-server-nc-1 42572
 9151  9157  9151 20673 pts/158   9151 S+    4572   0:00  |               \_ /bin/sh ./mdb-lookup-server-nc.sh 42572
 9157 16397  9151 20673 pts/158   9151 S+    4572   0:00  |                   \_ cat mypipe-9157
 9157 16398  9151 20673 pts/158   9151 S+    4572   0:00  |                   \_ nc -l 42572
 9157 16399  9151 20673 pts/158   9151 S+    4572   0:00  |                   \_ /bin/sh /home/jae/cs3157-pub/bin/mdb-lookup-cs3157
16399 16400  9151 20673 pts/158   9151 S+    4572   0:00  |                       \_ /home/jae/cs3157-pub/bin/mdb-lookup /home/jae/cs3157-pub/bin/mdb-cs3157

part 1(c): Should work as expected.

