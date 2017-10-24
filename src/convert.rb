#!/bin/ruby

in_filename = ARGV[0]
out_filename = ARGV[1]

reading_points = false

in_file = File.open(in_filename, "r")
out_file = File.open(out_filename, "w")

in_file.each_line do |line|
	if reading_points
		values = line.strip.split " "
		if(values.count < 3)
			reading_points = false
			out_file.write line
			next
		end

		converted_values = values.map { |value| 1000*value.to_f }
		out_file.write converted_values.join(" ")
		out_file.write "\n" 

	else 
		reading_points = true if line.start_with? "POINTS"

		out_file.write line
	end
end

