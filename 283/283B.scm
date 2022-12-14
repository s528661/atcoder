(define (makeA A n i)
  (if (= i n)
    A
    (let ([a (read)])
      (vector-set! A i a)
      (makeA A n (+ i 1))
    )
  )
)

(define (querys A q j)
  (if (= j q)
    (newline)
    (let ([qry (read)])
      #;(display qry)
      #;(newline)
      (cond 
        ((= qry 1) (let ([k (read)][x (read)]) (vector-set! A (- k 1) x)))
        ((= qry 2) (let ([k (read)]) (display (vector-ref A (- k 1))) (newline)))
      )
      (querys A q (+ j 1))
    )
  )
)

(let ([N (read)])
  (define A (make-vector N))
  (define B (makeA A N 0))
  (let ([Q (read)])
    (querys B Q 0)
  )
)
