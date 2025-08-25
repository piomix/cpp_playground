.PHONY: clean All

All:
	@echo "----------Building project:[ 56-poly-virtual-functions - Debug ]----------"
	@cd "56-poly-virtual-functions" && "$(MAKE)" -f  "56-poly-virtual-functions.mk"
clean:
	@echo "----------Cleaning project:[ 56-poly-virtual-functions - Debug ]----------"
	@cd "56-poly-virtual-functions" && "$(MAKE)" -f  "56-poly-virtual-functions.mk" clean
