(define (dealBreaker str)
  (list->vector (string->list str))
)

(define (g B j b)
  (if (= j (vector-length B))
    (vector->list B)
    (begin
      (if (eq? (vector-ref B j) b)
        (vector-set! B j 0)
        #t
      )
      (g B (+ j 1) b)
    )
  )
)

(define (f A i)
  (if (= i (vector-length A))
    (vector->list A)
    (begin 
      (vector-set! A i (read))
      (f A (+ i 1))
    )
  )
)

(let ((V (make-vector 6)))
  (define B (f V 0))
  (define C (g (list->vector B) 0 (apply max B)))
  (display (apply max (g (list->vector C) 0 (apply max C))))
)
