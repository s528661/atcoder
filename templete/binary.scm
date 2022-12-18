(define (dec->bin n)
  (cond ((zero? n) '())
        (else (cons (remainder n 2)
                    (dec->bin (quotient n 2))))))
