print("Weight Unit Converter")

weight = float(input("Weight: "))
mass = str(input("(K)g or (L)bs: "))

if mass == "K" :
   converted = weight * 2.20462 # 1kg  = 2.20462 lbs
   answer = "Weight in lbs: " + str(converted)
   print(answer + "lbs." + " Done!" )
else:
    mass == "L"
    converted = weight * 0.453592 # 1lb = 0.453592 kg
    answer = "Weight in Kg: " + str(converted)
    print(answer + "Kg." + " Done!" )

    
