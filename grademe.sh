#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

# Setup
if [ -d "joaonette" ]; then
  echo "🤖"
elif [[ $(find .. -maxdepth 1 -type d -name 'joaonette') ]]; then
	echo "🤖"
else
	echo "What list do you want to correct?"
	read LIST
	if [[ $LIST != C* ]]
	then
		echo "Please enter a valid list name, ex: C00, C01, C02, C03, C04, C05, C06"
		exit 1
	fi
	git clone https://github.com/LucasKuhn/joaonette.git
	find joaonette/. -name "C*" | grep -v $LIST | xargs rm -rf
fi

# If inside an exercise folder, check only the current exercise 
if [[ $(basename $PWD) == ex* ]]; then
	DIR="$(basename $PWD)"
	cc -Wall -Wextra -Werror -lbsd ../joaonette/C*/$DIR/main.c ./*.c -o ./a.out || ERROR=true
	DIFF=$(diff <(./a.out) ../joaonette/C*/$DIR/expected_output) || ERROR=true
	if [[ -n "$DIFF" ]]; then
		echo -e "KO ${RED}✖${NC}"
		echo -e "----- DIFF ----- ( < user | > expected )"
		diff <(./a.out) ../joaonette/C*/$DIR/expected_output
	else
		echo -e "OK ${GREEN}✓${NC}"
	fi
	rm ./a.out
else
# Check every exercise
for DIR in ex* ; do
	echo "====== $DIR ======"
	ERROR=""
	cc -Wall -Wextra -Werror -lbsd joaonette/C*/$DIR/main.c $DIR/*.c -o $DIR/a.out > /dev/null 2>&1
	DIFF=$(diff <($DIR/a.out) joaonette/C*/$DIR/expected_output) > /dev/null 2>&1 || ERROR=true
	rm $DIR/a.out
	if [[ "$DIFF" == "" && "$ERROR" == "" ]]; then
		echo -e "OK ${GREEN}✓${NC}"
	else
		echo -e "KO ${RED}✖${NC}"
	fi
done
fi 


