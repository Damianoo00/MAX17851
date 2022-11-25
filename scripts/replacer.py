from jinja2 import Environment, FileSystemLoader
old = ""
classNames = []
writerAddrrs = []
readAddrrs = []
with open('BMS_SCAP/Modules/MAX17851/max17851.cpp', 'r') as reader:
    old = reader.read()
reg_list = old.split('\n')
for reg in reg_list:
    classNames.append(reg.split(" ")[0])
    writerAddrrs.append(reg.split("(")[1].split(",")[0])
    readAddrrs.append(reg.split(",")[1].split(")")[0])
environment = Environment(loader=FileSystemLoader("BMS_SCAP/Modules/MAX17851/templates/"))
results_template = environment.get_template("singleton.j2")
with open("BMS_SCAP/Modules/MAX17851/max17851.cpp.test", "w") as results:
    for i in range(len(classNames)):
        context = {
           "className":classNames[i],
            "writeAddr":writerAddrrs[i],
            "readAddr":readAddrrs[i]
        }
        results.write(results_template.render(context))
