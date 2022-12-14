#!/usr/bin/racket
#lang racket
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

(let ((A (make-vector 6))(rem 998244353))
  (begin 
    (inp 6 0 A)
    (define X (- (* (vector-ref A 0) (vector-ref A 1) (vector-ref A 2))
      (* (vector-ref A 3) (vector-ref A 4) (vector-ref A 5))
    ))
    (print (remainder X rem))
  )
)
