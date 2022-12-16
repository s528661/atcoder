#lang racket/base
(require rnrs/sorting-6)

(define (dealBreaker str)
  (list->vector (string->list str))
)

(define (g V j sum)
  (if (= j (vector-length V))
    (print sum)
    (begin
      (if (= (remainder j 2) 0)
        (g V (+ j 1) (+ sum (vector-ref V j)))
        (g V (+ j 1) (- sum (vector-ref V j)))
      )
    )
  )
)

(define (f V n i)
  (if (= i n)
    V
    (begin
      (vector-set! V i (read))
      (f V n (+ i 1))
    )
  )
)

(let ([N (read)])
  (begin
    (define A (f (make-vector N) N 0))
    (g (vector-sort > A) 0 0)
  )
)
