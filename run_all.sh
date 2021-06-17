LIST="${LIST:-$(basename ${PWD})}"

echo -e "\n===== NORMA ====="
norminette -R CheckForbiddenSourceHeader

for d in */ ; do
    echo -e "\n===== $d ====="
	cc -Wall -Wextra -Werror -lbsd ~/joaonette/$LIST/$d/*.c $d/*.c -o $d/a.out
	$d/a.out
	if [ "$UPDATE" = "true" ] ; then
		echo "Updating expected_output"
		$d/a.out > ~/joaonette/$LIST/$d/expected_output 
	fi
done