# This program create the structure of the folder and add the scoresheet for each student
#
# This program uses the following files
#   - list.csv (list of students)
#   - README.md (list of notes)
#   - scoresheet.md (the scoresheet)
#
# To run the program, simply run "python init_eval.py"


import csv
import jinja2
import os

templateLoader = jinja2.FileSystemLoader( searchpath="." )
templateEnv = jinja2.Environment( loader=templateLoader)
template_etudiant= templateEnv.get_template( "scoresheet.md")
template_promo= templateEnv.get_template( "README.md")

student_list=[]

with open('liste.csv') as f:
    reader = csv.reader(f)
    for row in reader:
        # Finally, process the template to produce our final text.
        student=row[0]
        student_list.append(student)
        
        # render & save README.md for each student
        outputText = template_etudiant.render(etudiant=student)
        os.mkdir("../%s" % student)
        text_file = open("../%s/README.md" % student, "w")
        text_file.write("%s" % outputText)
        text_file.close()

# render & save README.md
outputText = template_promo.render(etudiants=student_list)
text_file = open("../README.md", "w")
text_file.write("%s" % outputText)
text_file.close()
