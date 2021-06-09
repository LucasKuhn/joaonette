# Basecamp Tests
Test suite for evaluating your code (Or other people's code on evaluations) 

# How I'm using it

1. Cloned this repo to a folder called `tests`, in the root directory (`~`) 
2. I move to the exercise folder I want to test. EX: To test ex04 from C00: 
```sh
cd 42/C00/ex04
ls
# -> ft_is_negative.c
```
3. Then, I compile the user code with the main.c in the `tests` folder: 
```sh
gcc -Wall -Wextra -Werror ~/tests/C00/`basename $PWD`/*.c *.c
```
4. And I call the output file
```sh
./a.out 
# Will check the numbers: 0 1 2 -1
# Expected outcome: 
# PPPN 
# User outcome: 
# PPPN
```
