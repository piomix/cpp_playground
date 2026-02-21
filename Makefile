.PHONY: clean All

All:
	@echo "----------Building project:[ 60-myarray-case-study - Debug ]----------"
	@cd "60-myarray-case-study" && "$(MAKE)" -f  "60-myarray-case-study.mk"
clean:
	@echo "----------Cleaning project:[ 60-myarray-case-study - Debug ]----------"
	@cd "60-myarray-case-study" && "$(MAKE)" -f  "60-myarray-case-study.mk" clean
