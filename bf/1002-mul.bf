
,------------------------------------------------ #(0)
>,------------------------------------------------#(1)
< Outside while implementing in                   #(0)
[
    >
    [                                             #(1) This decrement (1) till 0  
        >+                                        #(2) This increment (2) till (1) cuantity
        >+                                        #(3) This increment (3) till (1) cuantity
        <<-                                       #(1) Decrementing by 1  
    ]
    >>                                            #(3) Used to recover value of (1)  
    [                                             #(3) Recovering original value of 1 
        <<+                                       #(1)
        >>-                                       #(3)  
    ]                                               
    <<<-                                          #(0) Decerement (0) to accomplish ntimes  
]
>>++++++++++++++++++++++++++++++++++++++++++++++++.