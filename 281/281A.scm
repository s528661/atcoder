(define (countdown n i)
  (if (= i n)
    (print 0)
    (begin 
      (print (- n i))
      (newline)
      (countdown n (+ i 1))
    )
  )
)

(let ([N (read)])
  (countdown N 0)
)
