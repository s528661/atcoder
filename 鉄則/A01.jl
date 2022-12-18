function main()
  n = parse(Int,readline())
  println(n*n)
end
 
if abspath(PROGRAM_FILE) == @__FILE__
  main()
end
