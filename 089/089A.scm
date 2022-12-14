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
 
(let ([N (read)])
      (print (quotient N 3)))
