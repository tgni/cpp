.PHONY:all apps kernel apps_clean kernel_clean clean distclean help

dirs := basicType calculator string sudoku vector
all:
	$(foreach N,$(dirs),make -C $(N) &&) :

clean:
	$(foreach N,$(dirs),make -C $(N) clean &&) :

