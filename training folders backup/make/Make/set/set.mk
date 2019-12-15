
#Lazy set
VAR1 = Global

#immediate set
VAR2 := $(VAR1)Edge		#check for both set
VAR1 = i am at the
VAR2 = $(VAR1)employee
#VAR ?= Edge		#set if absent
#VAR += Edge		#append


all :
	@echo "VAR1 : "$(VAR1)
	@echo "VAR2 : "$(VAR2)
