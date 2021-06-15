LIST="${LIST:-$(basename ${PWD})}"

for d in */ ; do
    echo "===== $d ====="
	cc -Wall -Wextra -Werror ~/tests/$LIST/$d/*.c $d/*.c -o $d/a.out
	$d/a.out
done

echo "===== NORMA ====="
norma