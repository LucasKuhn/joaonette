LIST="${LIST:-$(basename ${PWD})}"

for d in */ ; do
    echo "===== $d ====="
	cc -Wall -Wextra -Werror -lbsd ~/tests/$LIST/$d/*.c $d/*.c -o $d/a.out
	DIFF=$(diff <($d/a.out) ~/tests/$LIST/$d/expected_output)
	if [[ $DIFF ]]; then
		diff <($d/a.out) ~/tests/$LIST/$d/expected_output | cat -e
		echo "KO"
	else
		echo "OK"
	fi
done

echo "===== NORMA ====="
norminette -R CheckForbiddenSourceHeader