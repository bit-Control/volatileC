$ make
Now
$ ls -l volatile_003.s
-rw-r--r-- 1 user user 981 Jun 13 14:18 volatile_003.s

Compare :
-rw-r--r-- 1 user user 1001 Jun 13 14:18 volatile_001.s	/*example 001*/
-rw-r--r-- 1 user user 773 Jun 13 14:18 volatile_002.s	/*example 002*/
-rw-r--r-- 1 user user 981 Jun 13 14:18 volatile_003.s	/*example 003*/

So change in bytes : 1001 -> 773 -> 981

$ ./volatile_003
Initial value of var_local : 5 
Modified value of var_local : 100
