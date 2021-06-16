# Joãonette
Test suite based on Moulinette, made by "Iniciativa João" ⛺️

# Setup 
1. Clone this repo ( I suggest cloning to the root and calling it joaonette )
```sh
cd ~
git clone https://github.com/LucasKuhn/joaonette.git
```

# How I'm using it

1. Move to the exercise folder. EX: To test ex04 from C00: 
```sh
cd C00/ex04
ls
# -> ft_is_negative.c
```

3. Then, compile the user code with the main.c in the `tests` folder: 
```sh
gcc -Wall -Wextra -Werror ~/joaonette/$LIST/`basename $PWD`/*.c *.c
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

5. (optional) Check the diff of the user output with the expected output, also present in joaonette
```sh
diff <(./a.out) ~/joaonette/$LIST/`basename $PWD`/expected_output
```

6. (optional) There is also a `test_all` shell script that goes into all folders and tests the diff of the outputs. 
You just need to enter the list directory, export the LIST variable, and call the scrip `bash ~/tests/test_all.sh` 

<img src="https://user-images.githubusercontent.com/26127185/121573685-e7ed6080-c9fb-11eb-9526-dd044caaed87.gif" width="600">

7. (optional) Add aliases! 
```sh
# .bashrc

alias compile='cc -Wall -Wextra -Werror -lbsd ~/joaonette/$(basename $(dirname $PWD))/$(basename $PWD)/*.c *.c'
alias compare='diff <(./a.out) ~/joaonette/$(basename $(dirname $PWD))/$(basename $PWD)/expected_output'
alias test_all='bash ~/joaonette/test_all.sh'
alias run_all='bash ~/joaonette/run_all.sh'
```
