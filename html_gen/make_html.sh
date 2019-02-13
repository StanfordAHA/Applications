#!/bin/bash
HALIDE_PROGRAM_RESULTS_FILE=$1
export INPUT_HTML_FILE_PRELUDE="index_prelude.html"
export INPUT_HTML_FILE_EPILOGUE="index_epilogue.html"
export OUTPUT_HTML_FILE="index.html"

cp $INPUT_HTML_FILE_PRELUDE $OUTPUT_HTML_FILE
sed -e "s/\^\[\[0;3[0-9]m\(\w*D\).*/\1/" $HALIDE_PROGRAM_RESULTS_FILE >> $OUTPUT_HTML_FILE
sed -rEi 's/([a-zA-Z\-]+\=[0-9]+)[[:space:]]+(PASSED)/<tr class="table-success"><td>\1<\/td><td>\2<\/td><\/tr>/' $OUTPUT_HTML_FILE 
sed -rEi 's/([a-zA-Z\-]+\=[0-9]+)[[:space:]]+(FAILED)/<tr class="table-danger"><td>\1<\/td><td>\2<\/td><\/tr>/' $OUTPUT_HTML_FILE 
echo "" >> $OUTPUT_HTML_FILE
cat $INPUT_HTML_FILE_EPILOGUE >> $OUTPUT_HTML_FILE

