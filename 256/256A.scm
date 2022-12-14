(define (my-read)
  (let ([a (read)])
    (if (symbol? a)
      (symbol->string a)
      a)))

(define (my-read-line)
  (let ([line (read-line)])
    (if (string=? "" line)
        (my-read-line)
        line)))

(define (inp n i V)
  (let ((v (read)))
    (if (= i n)
      V
    (begin
      (vector-set! V i v)
      (inp n (+ i 1) V)
    )
    )
  )
)

(define (f n x total) 
  (if (= n 0) 
    total
    (begin
      (f (- n 1) x (* total x))
    )
  )
)

(let ([N (read)])
  (begin
    (let ((total 1))
      (print (f N 2 total))
    )
  )
)
