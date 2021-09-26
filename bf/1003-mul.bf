
,------------------------------------------------ #(0) Getting the value at (0)
>,------------------------------------------------#(1) Getting the value at (1)
< Outside while implementing in                   #(0)
[
    >
    [>+>+<<-]
    >>                                            #(3) Used to recover value of (1)  
    [<<+>>-]                                               
    <<<-                                          #(0) Decerement (0) to accomplish ntimes  
]
>>[>>+<<-]>>                                      #copy output (2) to a (4) byte
[   (4)                                           While (4) is not null
  >>>>++++++++++<<<<                              (10)
  [ (4)
      ->+>>+>-[<-]<[<<[->>                           Divide (4) by 10
       >+<<<]>>>>+<<-<]<<
  ]                             
  ++++++++[->++++++<]> (5)                        add 48 to remainder (5)
  [-<+>] (5)                                      Move remainder at (4) location
  >>>>[-<<<<+>>>>]   (9)                          Put the quotient at new (9) location
  <[-]<<<                                         Reset all cells
]                                                 End of (4) Loop
<                                                 Position at (3)  
[.<]                                              Print backwards