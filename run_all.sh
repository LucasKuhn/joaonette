LIST="${LIST:-$(basename ${PWD})}"

for d in */ ; do
    echo "===== $d ====="
	cc -Wall -Wextra -Werror -lbsd ~/tests/$LIST/$d/*.c $d/*.c -o $d/a.out
	$d/a.out
	if [ "$UPDATE" = "true" ] ; then
		echo "Updating expected_output"
		$d/a.out > ~/tests/$LIST/$d/expected_output 
	fi
done

echo "===== NORMA ====="
norminette -R CheckForbiddenSourceHeader