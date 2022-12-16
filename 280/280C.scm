(define (dealBreaker str)
  (list->vector (string->list str))
)

(define (f s t i)
  (if (= i (vector-length s))
    (print (+ i 1))
    (begin
      (if (eq? (vector-ref s i) (vector-ref t i))
        (f s t (+ i 1))
        (print (+ i 1))
      )
    )
  )
)

(let ([S (read-line)][T (read-line)])
  (f (dealBreaker S) (dealBreaker T) 0)
)
