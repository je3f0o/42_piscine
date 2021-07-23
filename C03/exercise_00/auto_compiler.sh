#!/bin/bash

exec_name=$(find . -name "ft_*.c")
exec_name="${exec_name:5}"
exec_name="${exec_name%.c}"

_pwd=`pwd`

pdf_name=`dirname "$_pwd"`
pdf_name=`basename "$pdf_name"`
exercise_name=`basename "$_pwd"`

compile_command="gcc -Wall main.c ft_${exec_name}.c -o $exec_name";
norm_command="norminette ft_${exec_name}.c";

echo "$compile_command"
gcc_output=$($compile_command)
echo -n "$gcc_output"

echo "$norm_command"
norm_output=$($norm_command)
echo $norm_output

if [[ $? == 0 ]]; then
	output=$(./$exec_name);

	echo ""
	echo "./$exec_name"
	echo -n "$output"

	echo ""
	echo ""
	echo "Generating '.gitignore' file..."
	echo "$exec_name" > .gitignore

	echo "Generating 'README.md' file..."
	echo "# ${pdf_name} ${exercise_name} ft_${exec_name}.c" > README.md

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
