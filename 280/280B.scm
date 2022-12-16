(define (dealBreaker str)
  (list->vector (string->list str))
)

(define (inp n idx sum)
  (if (= idx n)
    #t
    (let ([a (read)]) 
      (begin
        (print (- a sum))
        (display " ")
        (inp n (+ idx 1) (+ sum (- a sum)))
      )
    )
  )
)

(let ([N (read)])
  (inp N 0 0)
)
