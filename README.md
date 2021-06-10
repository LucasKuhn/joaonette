# Basecamp Tests
Test suite for evaluating your code (Or other people's code on evaluations) 

# Setup 
1. Clone this repo ( I suggest cloning to the root and calling it tests )
```sh
cd ~
git clone https://github.com/LucasKuhn/basecamp-tests.git tests
```

# How I'm using it

1. Export a variable to define the list being corrected
```sh
export LIST=C00
```
2. Move to the exercise folder. EX: To test ex04 from C00: 
```sh
cd 42/C00/ex04
ls
# -> ft_is_negative.c
```
3. Then, compile the user code with the main.c in the `tests` folder: 
```sh
gcc -Wall -Wextra -Werror ~/tests/$LIST/`basename $PWD`/*.c *.c
```

4. Call the output file
```sh
./a.out 
# Will check the numbers: 0 1 2 -1
# Expected outcome: 
# PPPN 
# User outcome: 
# PPPN
```

5. (optional) Check the diff of the user output with the expected output 
```sh
diff <(./a.out) ~/tests/$LIST/`basename $PWD`/expected_output
```

6. (optional) There is also a `test_all` shell script that goes into all folders and tests the diff of the outputs. 
You just need to enter the list directory, export the LIST variable, and call the scrip `bash ~/tests/test_all.sh` 

<img src="https://cdn.discordapp.com/attachments/846394177369407569/852591855166029834/Kapture_2021-06-10_at_13.54.43.gif" width="50%" height="50%">

7. (optional) Add aliases! 
```sh
# .bashrc

alias compile="cc -Wall -Wextra -Werror ~/tests/$LIST/${PWD##*/}/*.c *.c"
alias compare="diff <(./a.out) ~/tests/$LIST/${PWD##*/}/expected_output"
alias test_all="bash ~/tests/test_all.sh"
```
