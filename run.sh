#!/bin/bash
BASE_FOLDER="~/joaonette"

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

if [[ -z $LIST ]]
then
	echo "Either export LIST or add the list name before calling the script"
	exit 1
fi

check_names()
{
	EX_COUNT=$(ls */* | wc -l)
	USER_FILES=$(ls */*)
	EXPECTED_NAMES=$(cat ~/joaonette/$LIST/expected_files | head -n $EX_COUNT)
	echo "====== filenames ======"
	if [[ $(diff <(echo $USER_FILES) <(echo $EXPECTED_NAMES)) ]]; then
		echo -e "KO ${RED}✖${NC}"
		echo -e "\n--- EXPECTED ---"
		echo -e $EXPECTED_NAMES
		echo -e "\n--- USER FILES ---"
		echo -e $USER_FILES
	else
		echo -e "OK ${GREEN}✓${NC}"
	fi
}

check_exercise()
{
	ERROR=""
	cp -f ~/joaonette/$LIST/$DIR/* ./ 
	gcc -Wall -Wextra -Werror -lbsd *.c -o test.out || ERROR=true
	DIFF=$(diff <(./test.out) ~/joaonette/$LIST/$DIR/expected_output) || ERROR=true
	if [[ $(basename $PWD) == ex* ]]; then 
		if [[ -n "$DIFF" ]]; then
			echo -e "\n--- EXPECTED OUTPUT ---"
			cat ~/joaonette/$LIST/$DIR/expected_output
			echo -e "\n--- USER OUTPUT ---"
			./test.out
		fi
	fi

	if [[ "$DIFF" == "" && "$ERROR" == "" ]]; then
		echo -e "OK ${GREEN}✓${NC}"
	else
		echo -e "KO ${RED}✖${NC}"
	fi

	if [ "$UPDATE" = "true" ] ; then
		echo -e "\nUpdating expected_output..."
		./test.out > ~/joaonette/$LIST/$DIR/expected_output
	fi
	rm ./expected_output
	rm ./main.c
	rm ./test.out
}

# If you are inside an exercise folder (starting with ex)
# check the current exercise
if [[ $(basename $PWD) == ex* ]]; then
	DIR=$(basename $PWD)
	echo "====== $LIST/$DIR ======"
	LOCAL=$PWD
	check_exercise

# If you are not in an exercise folder, correct the entire list
else
	check_names
	for DIR in * ; do
		echo "====== $LIST/$DIR ======"
		LOCAL="$DIR"
		cd $DIR
		check_exercise
		cd ..
	done
fi 
