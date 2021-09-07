
# Storing cat output
output=`cat /etc/passwd`

# removing comments
output=`echo "$output" | grep -v '^#'`

# filtering even lines
output=`echo "$output" | awk 'FNR % 2 == 0'`

# filtering login names
output=`echo "$output" | cut -d ':' -f1`

# Reversing login names
output=`echo "$output" | rev`

# Sorting reverse alphabet
output=`echo "$output" | sort -r`

# Filtering between FT_LINE1 and FT_LINE2
output=`echo "$output" | awk 'FNR >= ENVIRON["FT_LINE1"] && FNR <= ENVIRON["FT_LINE2"]'`

# Replacing new lines to commas
output=`echo "$output" | tr '\n' ',' | sed 's/,/, /g'`

# Replacing last comma to dot
output=`echo "$output" | sed 's/, $/./'`

# print output
echo -n "$output"