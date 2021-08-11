#!/bin/bash

exec_name=$(find . -name "ft_*.c")
exec_name="${exec_name:5}"
exec_name="${exec_name%.c}"

_pwd=`pwd`

pdf_name=`dirname "$_pwd"`
pdf_name=`basename "$pdf_name"`
exercise_name=`basename "$_pwd"`

len=${#exercise_name}
exercise_number=${exercise_name:(len-1)}
echo "${exercise_number}"

git add "../$exercise_name"
git commit -m "$pdf_name -> ex0${exercise_number} ft_${exec_name}.c NORMINETTED"