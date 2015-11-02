awk -F ':' 'BEGIN {OFS=" "}{
  getline line < "line.txt"
  print $1 line $2
} ' instruction.txt
