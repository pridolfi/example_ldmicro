LDmicro0.1
MICRO=ANSI C Code
CYCLE=10000
CRYSTAL=4000000
BAUD=2400
COMPILED=Z:\home\pablo\work\cnl\example_ldmicro\src\ladder.c

IO LIST
    X0 at 0
    X1 at 0
    Y0 at 0
    Y1 at 0
END

PROGRAM
RUNG
    PARALLEL
        CONTACTS X0 0
        CONTACTS Y0 0
    END
    CONTACTS X1 1
    COIL Y0 0 0 0
END
RUNG
    CONTACTS R0 1
    TON T0 500000
    COIL Y1 0 0 0
END
RUNG
    CONTACTS Y1 0
    TON T1 500000
    COIL R0 0 0 0
END
