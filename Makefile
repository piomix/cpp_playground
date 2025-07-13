.PHONY: clean All

All:
	@echo "----------Building project:[ spans - Debug ]----------"
	@cd "spans" && "$(MAKE)" -f  "spans.mk"
clean:
	@echo "----------Cleaning project:[ spans - Debug ]----------"
	@cd "spans" && "$(MAKE)" -f  "spans.mk" clean
