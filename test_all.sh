LIST="${LIST:-$(basename ${PWD})}"

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

echo "===== NORMA ====="
norminette -R CheckForbiddenSourceHeader

for d in */ ; do
    echo "===== $d ====="
	cc -Wall -Wextra -Werror -lbsd ~/joaonette/$LIST/$d/*.c $d/*.c -o $d/a.out || ERROR=true
	DIFF=$(diff <($d/a.out) ~/joaonette/$LIST/$d/expected_output) || ERROR=true
	if [[ "$DIFF" == "" && "$ERROR" == "" ]]; then
		echo -e "OK ${GREEN}✓${NC}"
	else
		echo -e "KO ${RED}✖${NC}"
	fi
done