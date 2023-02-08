function main()
    N,Q = parse.(Int,readline()|>split)
    A = parse.(Int, split(readline()))
    # sum = [0 for zero = 1:(N+1)]
    sum = [0]

    for i = 1:N
        push!(sum,(sum[i]+A[i]))
    end
    
    for j = 1:Q
        L,R = parse.(Int,readline()|>split)
        println(sum[R+1]-sum[L])
    end
end
   
if abspath(PROGRAM_FILE) == @__FILE__
    main()
end
