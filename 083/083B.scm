(define (dealBreaker str)
  (list->vector (string->list str))
)

(define (g V j c)
  (if (= j (vector-length V))
    c
    (g V (+ j 1) (+ c (string->number (string(vector-ref V j)))))
  )
)

(define (f n aa bb i sum)
  (if (= i (+ n 1))
    (print sum)
    (begin 
      (if (and (>= (g (dealBreaker (number->string i)) 0 0) aa) (<= (g (dealBreaker (number->string i)) 0 0) bb))
        (begin 
          #(print i)
          #;(newline)
          (f n aa bb (+ i 1) (+ sum i))
        )
        (f n aa bb (+ i 1) sum)
      )
    )
  )
)
(let ([N (read)][a (read)][b (read)])
  (f N a b 0 0)
)
