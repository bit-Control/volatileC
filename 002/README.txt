$ make
Now 
$ ls -l volatile_002.s
-rw-r--r-- 1 user user 773 Jun 13 14:18 volatile_002.s

Current size 773

Compare :
-rw-r--r-- 1 user user 1001 Jun 13 14:18 volatile_001.s	/*example 001*/
-rw-r--r-- 1 user user 773 Jun 13 14:18 volatile_002.s	/*example 002*/

Byte reduction : 1001-773 = 228 bytes

$ ./volatile_002
Initial value of var_local : 5 
Modified value of var_local : 100
