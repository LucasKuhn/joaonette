RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

check_exercise()
{
	cc -Wall -Wextra -Werror -lbsd ~/joaonette/$LIST/$DIR/*.c $LOCAL/*.c -o $LOCAL/a.out || ERROR=true
	DIFF=$(diff <($LOCAL/a.out) ~/joaonette/$LIST/$DIR/expected_output) || ERROR=true
	rm $LOCAL/a.out
	if [[ "$DIFF" == "" && "$ERROR" == "" ]]; then
		echo -e "OK ${GREEN}✓${NC}"
	else
		echo -e "KO ${RED}✖${NC}"
	fi

	if [[ -n "$DIFF" && "$CHECKING_LIST" == "" ]]; then
		echo -e "----- DIFF ----- ( < user | > expected )"
		diff <($LOCAL/a.out) ~/joaonette/$LIST/$DIR/expected_output
	fi
}

# If you are inside an exercise folder
if [[ $(basename $PWD) == ex* ]]; then
	LIST=$(basename $(dirname $PWD))
	DIR=$(basename $PWD)
	LOCAL=$(echo $PWD)
	check_exercise

# If you are not in an exercise folder (presumably in a list folder)
else
	LIST=$(basename ${PWD})
	CHECKING_LIST="true"
	for DIR in */ ; do
		LOCAL="${DIR::-1}"
		echo "====== $DIR ======"
		check_exercise
	done
fi 
