IDENTIFICATION DIVISION. 
PROGRAM-ID. calculadora.
DATA DIVISION.                               
WORKING-STORAGE SECTION.                     
77 CALC PIC X(1). 

01 X PIC 9999.
01 Y PIC 9999.
01 ANS PIC 9999.

PROCEDURE DIVISION.                           

    DISPLAY "Primer termino: ".
    ACCEPT  X FROM CONSOLE.           
    DISPLAY "Segundo termino: ".
    ACCEPT  Y FROM CONSOLE.           
    DISPLAY "Operacion".
    ACCEPT  CALC FROM CONSOLE.           
    
    DISPLAY  X CALC Y

    EVALUATE CALC
        WHEN "+"  
            ADD X Y GIVING ANS
            DISPLAY ANS
        WHEN "-"  
            SUBTRACT X FROM Y GIVING ANS
            DISPLAY ANS
        WHEN "*" 
            MULTIPLY X BY Y GIVING ANS
            DISPLAY ANS
        WHEN "/" 
            IF Y = 0
                DISPLAY "ERROR"
            ELSE
                DIVIDE X BY Y GIVING ANS
                DISPLAY ANS
                
        WHEN OTHER DISPLAY "=)"		   

    STOP RUN. 
