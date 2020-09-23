(defun getSum(list)
    (if list
        (+ (car list) (getSum(cdr list)))
    0)
)

(defun getSize(list)
    (if list 
        (+ (/ (car list)(car list)) (getSize(cdr list))) 
    0)
)

(defun getMean(list)
    (if list 
        (/ (+ (car list) (getSum(cdr list))) (+ (/ (car list)(car list)) (getSize(cdr list)))) 
    0)
)

(write-line"Sum :")
(write(getSum(list 1 4 3 4 4)))
(write-line"Size :")
(write(getSize(list 1 4 3 4 4)))
(write-line"Mean :")
(write(getMean(list 1 4 3 4 4)))