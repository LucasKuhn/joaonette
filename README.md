# Joãonette
Test suite based on Moulinette, made by "Iniciativa João" ⛺️

# Setup 
1. Clone this repo ( I suggest cloning to the root and calling it joaonette )
```sh
cd ~
git clone https://github.com/LucasKuhn/joaonette.git
```

# How to use it

1. Move to the an exercise folder. EX: To test ex04 from C00: 
```sh
cd C00/ex04
ls
# -> ft_is_negative.c
```

2. Then, compile the user code with the corresponding main.c in the `joaonette` folder: 
```sh
cc -Wall -Wextra -Werror -lbsd ~/joaonette/$(basename $(dirname $PWD))/$(basename $PWD)/*.c *.c
# You can alias this command:
alias compile='cc -Wall -Wextra -Werror -lbsd ~/joaonette/$(basename $(dirname $PWD))/$(basename $PWD)/*.c *.c'
```

3. (Optional) Add some aliases to your `.bashrc`!
```sh
# To compile with the main from joaonette
alias compile='cc -Wall -Wextra -Werror -lbsd ~/joaonette/$(basename $(dirname $PWD))/$(basename $PWD)/*.c *.c'
# To check if the output is correct
alias joaonette='bash ~/joaonette/joaonette.sh'
```

4. Call the output file
```sh
cd C00/ex04
./a.out 
# Will check the numbers: 0 1 2 -1
# Expected outcome: 
# PPPN 
# User outcome: 
# PPPN
```

5. If the output is not clear, check with joaonette 
```sh
cd C00/ex04
joaonette
# OK ✓
```

6. (optional) You can also call `joanete` on a list to test the output of all exercises:

```sh
cd C00
joaonette
```
![Kapture 2021-06-16 at 22 27 12](https://user-images.githubusercontent.com/26127185/122316379-2601ed00-cef2-11eb-8c43-ac5f4eef6fb9.gif)

## CAVIATS - Your own code 

1. You really should name the folder with the exact same name as the exercise, like `C01` :)

## CAVIATS - Other people's code

If your testing someone's code and it is in a weird folder, you can export the LIST variable and call the `test_all.sh` script: 
```sh
cd whatever
LIST=C01 bash ~/joaonette/test_all.sh
```

You can also use the following commands to manually compile and compare a specific exercise: 
```sh
# compile 
cc -Wall -Wextra -Werror -lbsd ~/joaonette/$(basename $(dirname $PWD))/$(basename $PWD)/*.c *.c
# run it 
./a.out
# compare (returns nothing if it is OK)
diff <(./a.out) ~/joaonette/$(basename $(dirname $PWD))/$(basename $PWD)/expected_output
```

## Contributing 

Yes, please!!! Make a pull request and update whatever 
