# Tail
`tail -n` prints the last n number lines of input from stdin. For example: `tail -n 15` prints the last 15 lines.
The `-n` command line argument is optional, by default tail prints the last 10 lines.
The program behaves rationally no matter how unreasonable the input from stdin is or the value of n.
Makes efficient use of storage by using using calloc(), malloc(), realloc and free() to allocate and release memory for the storage of lines from stdin.
