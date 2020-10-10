for (( i = 0; ; i++ )); do
    echo $i
    ./mygen $i > int

    # ./real < int > out1
    # ./test < int > out2
    # diff -w out1 out2 || break

    diff -w <(./real < int) <(./t < int) || break
done
