#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

if [[ -z $LIST ]]
then
	echo "Either export LIST or add the list name before calling the script"
	exit 1
fi

check_exercise()
{
	cc -Wall -Wextra -Werror -lbsd ~/joaonette/$LIST/$DIR/main.c $LOCAL/*.c -o $LOCAL/a.out || ERROR=true
	DIFF=$(diff <($LOCAL/a.out) ~/joaonette/$LIST/$DIR/expected_output) || ERROR=true
	rm $LOCAL/a.out
	if [[ "$DIFF" == "" && "$ERROR" == "" ]]; then
		echo -e "OK ${GREEN}✓${NC}"
	else
		echo -e "KO ${RED}✖${NC}"
	fi

	if [[ -n "$DIFF" ]]; then
		echo -e "----- DIFF ----- ( < user | > expected )"
		diff <($LOCAL/a.out) ~/joaonette/$LIST/$DIR/expected_output
	fi

	if [ "$UPDATE" = "true" ] ; then
		echo -e "\nUpdating expected_output..."
		$DIR/a.out > ~/joaonette/$LIST/$DIR/expected_output 
	fi
}

# If you are inside an exercise folder (starting with ex)
# check the current exercise
if [[ $(basename $PWD) == ex* ]]; then
	DIR=$(basename $PWD)
	echo "====== $LIST/$DIR ======"
	LOCAL="./"
	check_exercise

# If you are not in an exercise folder, correct the entire list
else
	for DIR in * ; do
		echo "====== $LIST/$DIR ======"
		LOCAL="$DIR"
		check_exercise
	done
fi 
