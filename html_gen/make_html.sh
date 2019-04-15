#!/bin/bash
HALIDE_CPU_PROGRAM_RESULTS_FILE=$1
HALIDE_COREIR_PROGRAM_RESULTS_FILE=$2
HALIDE_TEMP_RESULTS="temp_results.log"
export INPUT_HTML_FILE_PRELUDE="html_gen/index_prelude.html"
export INPUT_HTML_FILE_EPILOGUE="html_gen/index_epilogue.html"
export OUTPUT_HTML_FILE="results/index.html"

mkdir -p results
cp $INPUT_HTML_FILE_PRELUDE $OUTPUT_HTML_FILE
# zip the two inputs together
paste -d " " $HALIDE_CPU_PROGRAM_RESULTS_FILE $HALIDE_COREIR_PROGRAM_RESULTS_FILE > $HALIDE_TEMP_RESULTS
# remove the color formatting for the terminal
sed -ri -e "s/[[:cntrl:]]\[([0-9]{1,3};)*[0-9]{1,3}m//g" $HALIDE_TEMP_RESULTS
## put every entry in the file in a html row
sed -ri -e 's/(.*)/<tr>\1<\/tr>/' $HALIDE_TEMP_RESULTS
sed -ri -e 's/([a-zA-Z\-]+\=[0-9]+)[[:space:]]+(PASSED)/<td class="table-success">\1<\/td><td class="table-success">\2<\/td>/g' $HALIDE_TEMP_RESULTS 
sed -ri -e 's/([a-zA-Z\-]+\=[0-9]+)[[:space:]]+(FAILED)/<td class="table-danger">\1<\/td><td class="table-danger">\2<\/td>/g' $HALIDE_TEMP_RESULTS 
cat $HALIDE_TEMP_RESULTS >> $OUTPUT_HTML_FILE
echo "" >> $OUTPUT_HTML_FILE
cat $INPUT_HTML_FILE_EPILOGUE >> $OUTPUT_HTML_FILE
rm $HALIDE_TEMP_RESULTS
