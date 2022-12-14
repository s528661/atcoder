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
      #(print i)
      (vector-set! V i v)
      (inp n (+ i 1) V)
    )
    )
  )
)

(let ([N (read)])
  (begin 
    (define A (make-vector N))
    (define sum 0)
    (for-each (lambda (x) (set! sum (+ sum x))) (vector->list (inp N 0 A)))
    (print sum)
  )
)
