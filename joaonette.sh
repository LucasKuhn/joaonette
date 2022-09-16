RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

check_exercise()
{
	cc -Wall -Wextra -Werror -lbsd $BASEDIR/$LIST/$DIR/main.c $LOCAL/*.c -o $LOCAL/a.out || ERROR=true
	DIFF=$(diff <($LOCAL/a.out) $BASEDIR/$LIST/$DIR/expected_output) || ERROR=true
	rm $LOCAL/a.out
	if [[ "$DIFF" == "" && "$ERROR" == "" ]]; then
		echo -e "OK ${GREEN}✓${NC}"
	else
		echo -e "KO ${RED}✖${NC}"
	fi

	if [[ -n "$DIFF" ]]; then
		echo -e "----- DIFF ----- ( < user | > expected )"
		diff <($LOCAL/a.out) $BASEDIR/$LIST/$DIR/expected_output
	fi

	if [ "$UPDATE" = "true" ] ; then
		echo -e "\nUpdating expected_output..."
		$d/a.out > ~/joaonette/$LIST/$d/expected_output 
	fi
}

BASEDIR=${BASEDIR:=(dirname "$0")}
echo "$BASEDIR"

# If you are inside an exercise folder (starting with ex)
# check the current exercise
if [[ $(basename $PWD) == ex* ]]; then
	LIST=$(basename $(dirname $PWD))
	DIR=$(basename $PWD)
	LOCAL=$(echo $PWD)
	check_exercise

# If you are not in an exercise folder corrects the entire list
# either gets the list name from LIST variable
# or assumes based on folder name (ex: C00)
else
	LIST="${LIST:-$(basename ${PWD})}"
	echo -e "\n===== NORMINETTE ====="
	norminette -R CheckForbiddenSourceHeader
	for DIR in */ ; do
		LOCAL="${DIR::-1}"
		echo "====== $DIR ======"
		check_exercise
	done
fi 
