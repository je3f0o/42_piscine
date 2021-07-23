#!/bin/bash

exec_name=$(find . -name "ft_*.c")
exec_name="${exec_name:5}"
exec_name="${exec_name%.c}"

_pwd=`pwd`

pdf_name=`dirname "$_pwd"`
pdf_name=`basename "$pdf_name"`
exercise_name=`basename "$_pwd"`

gcc_command="gcc -Wall main.c ft_${exec_name}.c -o $exec_name";
norm_command="norminette ft_${exec_name}.c";

echo "$gcc_command"
gcc_output=$($gcc_command)
gcc_return=$?
echo -n "$gcc_output"
[ $gcc_return != 0 ] && exit $gcc_return

echo "$norm_command"
norm_output=$($norm_command)
norm_return=$?
echo "$norm_output"

if [ $norm_return -eq 0 ]; then
	output=$(./$exec_name);

	echo ""
	echo "./$exec_name"
	echo -n "$output"

	echo ""
	echo ""
	echo "Generating '.gitignore' file..."
	echo "$exec_name" > .gitignore

	echo "Generating 'README.md' file..."
	echo "# ${pdf_name} ${exercise_name} ft_${exec_name}.c (NORMINETTED)" > README.md

	echo "" >> README.md
	echo "Shell:" >> README.md
	echo '```bash' >> README.md
	echo "gcc -Wall main.c ft_${exec_name}.c -o $exec_name" >> README.md
	echo -n "$gcc_output" >> README.md
	echo "norminette ft_${exec_name}.c" >> README.md
	echo "$norm_output" >> README.md

	echo "" >> README.md
	echo "# Executing" >> README.md
	echo "./$exec_name" >> README.md
	echo "$output" >> README.md
	echo '```' >> README.md
fi
