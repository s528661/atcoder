(define (remove-duplicates l)
  (cond ((null? l)
         '())
        ((member (car l) (cdr l))
         (remove-duplicates (cdr l)))
        (else
         (cons (car l) (remove-duplicates (cdr l))))))
         
(define (isPresent? item lis)
  (and (not (null? lis))
       (let ((head (car lis)))
         (or (eqv? item head)
             (and (pair? head) (isPresent? item head))  ;; <= your code missed this
             (isPresent? item (cdr lis))))))
             
(define (append list1 list2)
  (if (null? list1)
    list2
    (cons (car list1) (append (cdr list1) list2))
  )
)
 
(define (f n i L)
  (if (= i n)
    L
    (let ([l (read)])
      (f n (+ i 1) (append L (list l)))
    )
  )
)

(let ([N (read)])
  (define X '())
  (display (length (remove-duplicates (f N 0 X))))
)
