LIST="${LIST:-$(basename ${PWD})}"

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

for d in */ ; do
    echo "===== $d ====="
	cc -Wall -Wextra -Werror -lbsd ~/tests/$LIST/$d/*.c $d/*.c -o $d/a.out
	DIFF=$(diff <($d/a.out) ~/tests/$LIST/$d/expected_output)
	if [[ $DIFF ]]; then
		# diff <($d/a.out) ~/tests/$LIST/$d/expected_output | cat -e
		echo -e "KO ${RED}✖${NC}"
	else
		echo -e "OK ${GREEN}✓${NC}"
	fi
done

echo "===== NORMA ====="
norminette -R CheckForbiddenSourceHeader