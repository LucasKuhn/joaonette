if [ "$LIST" = "" ]; then
   echo "LIST variable not set"
   exit 1
fi

for d in */ ; do
    echo "===== $d ====="
	cc -Wall -Wextra -Werror ~/tests/$LIST/$d/*.c $d/*.c -o $d/a.out
	DIFF=$(diff <($d/a.out) ~/tests/$LIST/$d/expected_output)
	if [[ $DIFF ]]; then
		diff <($d/a.out) ~/tests/$LIST/$d/expected_output | cat -e
		echo "KO"
	else
		echo "OK"
	fi
done