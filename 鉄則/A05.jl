function main()
    N,M = parse.(Int,readline()|>split)
    cnt = 0
    for i = 1:N
        for j = 1:N
            k = M-i-j
            if 1 <= k & k <= N
                cnt += 1
            end
        end
    end
    println(cnt)
end
   
if abspath(PROGRAM_FILE) == @__FILE__
    main()
end
