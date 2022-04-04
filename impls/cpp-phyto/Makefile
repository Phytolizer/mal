STEPS = step0_repl
BUILDDIR = build
BUILDS = $(STEPS:%=$(BUILDDIR)/%)
CPPS = $(STEPS:%=%.cpp)

all: $(STEPS)

$(STEPS): $(BUILDS)
	ln -sf $< $@

$(BUILDS): $(CPPS)
	meson $(BUILDDIR)
	meson compile -C $(BUILDDIR)
