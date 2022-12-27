(define (sum elemList) (apply + elemList))
  
(define (number->list num)
  (let loop ((num num)
             (acc '()))
    (if (< num 10)
        (cons num acc)
        (loop (quotient num 10)
              (cons (remainder num 10) acc)))))
 
(define (check2 x)
  (remainder (list-ref (number->list x) (- (length (number->list x)) 1)) 2)
)

(define (check3 x) 
  (if (eq? (remainder (sum (number->list x)) 3) 0)
    0
    1
  )
) 
