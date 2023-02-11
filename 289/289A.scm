(define (f v i)
  (if (= i (vector-length v))
    v
    (if (eq? (vector-ref v i)  #\0)
      (begin 
        (vector-set! v i #\1)
        (f v (+ i 1))
      )
      (begin 
        (vector-set! v i  #\0)
        (f v (+ i 1))
      )
    )
  )
)

(let ([S (read-line)])
  (display (list->string (vector->list (f (list->vector (string->list S)) 0))))
)
