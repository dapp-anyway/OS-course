# A critical error can appear when 2 processes
# read the same number at the same time

if ln ex2 ex2.lock; then
  for i in {1..200}; do
    n=$(tail -1 ex2)
    n=$(($n + 1))
    echo $n >> ex2
  done
  rm ex2.lock
fi