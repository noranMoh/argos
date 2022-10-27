#! /bin/bash
#input experiment name, number of iterations,  number of kilobots, starting id and wther you want to update argos files

experiment_name=$1
iterations=$2
number_kilobots=$3
starting_id=$4
update_argos=$5

if (($update_argos))
then
	cd build
	sudo make install
	cd ..
fi

rm light.txt

# if only one robot is used in the exp. change its id to the starting id
if (($number_kilobots == 1))
then
	sed -i "s/kb0/kb$starting_id/" ./src/examples/experiments/$experiment_name
	# change output file name to the starting id
	sed -i "s/output_0.txt/output_$starting_id.txt/" ./src/examples/loop_functions/trajectory_loop_functions/trajectory_loop_functions.cpp
	#TO DO : change log file skip

fi

# loop for the number of iterations specified
for ((counter = $starting_id; counter < $iterations + $starting_id; counter ++))
do

((sum = $counter + 1))

# make project before each experiment
	cd build
	make -j8
	cd ..

# run experiment
	argos3 -c src/examples/experiments/$experiment_name

# if only one robot is used in the exp. change its id for each new experiment
	if (($number_kilobots==1))
	then
		sed -i "s/kb$counter/kb$sum/" ./src/examples/experiments/$experiment_name
		sed -i "s/output_$counter.txt/output_$sum.txt/" ./src/examples/loop_functions/trajectory_loop_functions/trajectory_loop_functions.cpp
	fi
done


if (($number_kilobots == 1))
then
	sed -i "s/kb$sum/kb0/" ./src/examples/experiments/$experiment_name
	sed -i "s/output_$sum.txt/output_0.txt/" ./src/examples/loop_functions/trajectory_loop_functions/trajectory_loop_functions.cpp
fi


# mv output_* /home/p27/hetero_study/heterogeneitystudy/argos/logFiles/temp
