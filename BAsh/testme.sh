for (( i = 0; ; i++ )); do
    echo this is $i
    # ./mygen $i > int
    # ./1408a < int > out
	./t > out

	while read line; do
		if
			[ $line = "ERROR" ]
		then
            echo done
			exit
	fi ;
done < out
done

