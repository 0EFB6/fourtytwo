files_nm=$(find . -type f | wc -l)
folder_nm=$(find . -type d | wc -l)
echo "$((($files_nm + $folder_nm)))"
