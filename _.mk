TARGET := libft.a

ifdef DEBUG_ASAN
    DEBUG      := 1
    TGT_CFLAGS += -fsanitize=address -fsanitize-address-use-after-scope
endif

ifdef DEBUG_UBSAN
    DEBUG      := 1
    TGT_CFLAGS += -fsanitize=undefined
endif

ifdef DEBUG
    TGT_CFLAGS += -O0 -g -fno-omit-frame-pointer -fno-optimize-sibling-calls
else
    TGT_CFLAGS += -O2
endif

SUBMAKEFILES := ./src/_.mk
