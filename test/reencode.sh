#! /bin/bash

reencode_file() {
  # echo $1
  # iconv -f $(file -b --mime-encoding $1) -t utf-8 $1 -o $1
  # if [ $? != 0 ]; then
    # Wild guess
    # echo "Using wild guess windows-1252.."
    iconv -f windows-1252 -t utf-8 $1 -o $1
  # fi
}

function getdir(){
    #echo "param="$1
    param=$1
    if [ -f "$1" ]; then
        reencode_file $1
    else
      param=`tr " " "\?" <<<$param`
      for element in `ls $param|tr " " "\?"`
      do
          #echo "element="$element
          dir_or_file=$1"/"$element
          #echo $dir_or_file
          if [ -d "${dir_or_file}" ]
          then 
              getdir $dir_or_file
          else
              # ls -lh ${dir_or_file}
              reencode_file $dir_or_file
              #echo ""
          fi  
      done
    fi
}


main() {
    getdir $1

}

main "$@"