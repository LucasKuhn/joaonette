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
	EX_NAMES=$(ls */*)
	EXPECTED_NAMES=$(cat ~/joaonette/$LIST/expected_files | head -n $EX_COUNT)
	echo "====== filenames ======"
	if [[ $(diff <(echo $EX_NAMES) <(echo $EXPECTED_NAMES)) ]]; then
		echo -e "KO ${RED}✖${NC}"
		echo -e "\n--- DIFF ---"
		diff <(echo $EX_NAMES) <(echo $EXPECTED_NAMES)
	else
		echo -e "OK ${GREEN}✓${NC}"
	fi
}

check_exercise()
{
	ERROR=""
	cc -Wall -Wextra -Werror -lbsd ~/joaonette/$LIST/$DIR/main.c $LOCAL/*.c -o $LOCAL/a.out || ERROR=true
	DIFF=$(diff <($LOCAL/a.out) ~/joaonette/$LIST/$DIR/expected_output) || ERROR=true

	if [[ $(basename $PWD) == ex* ]]; then 
		if [[ -n "$DIFF" ]]; then
			echo -e "\n--- EXPECTED OUTPUT ---"
			cat ~/joaonette/$LIST/$DIR/expected_output
			echo -e "\n--- USER OUTPUT ---"
			$LOCAL/a.out
			echo -e "\n--- DIFF ---"
			diff <($LOCAL/a.out) ~/joaonette/$LIST/$DIR/expected_output
		fi
	fi

	if [[ "$DIFF" == "" && "$ERROR" == "" ]]; then
		echo -e "OK ${GREEN}✓${NC}"
	else
		echo -e "KO ${RED}✖${NC}"
	fi

	if [ "$UPDATE" = "true" ] ; then
		echo -e "\nUpdating expected_output..."
		$LOCAL/a.out > ~/joaonette/$LIST/$DIR/expected_output
	fi

	rm $LOCAL/a.out
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
		check_exercise
	done
fi 
