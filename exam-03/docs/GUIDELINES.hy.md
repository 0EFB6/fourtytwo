# Ընդհանուր ուղենիշներ

* Ցանկացած հաղորդակցություն արգելված է։

* Սա քննություն է․ իրավունք չունեք զրուցել, երաժշտություն լսել, աղմկել և, ընդհանրապես, անել որևէ բան, որ կարող է ինչ-որ կերպ խանգարել մյուս ուսանողներին։ 

* Ձեր հեռախոսներն ու այլ սարքերը պետք է անջատված և պահված լինեն։ Եթե հեռախոսի զանգ լսվի, ամբողջ շարքը անմիջապես կորակազրկվի ու քննությունից դուրս կհրավիրվի։

* Ձեր home պահոցը կազմված է երեք խմբերից՝ "rendu", "subjects" and "traces"։ 

* "subjects" պահոցը կներառի ձեր հանձնարարությունների նյութը։ 

* "rendu" պանակը ձեր Git հանձնման պահոցի պատճենն է։ Այն պետք է օգտագործել ինչպես սովորական Git պահոց։ 

* Համակարգը չի ստուգելու որևէ բան, որ push արված չէ ձեր Git հանձնման պահոց՝ ճիշտ տեղում։ Ուշադրութուն դարձրե՛ք, թե examshell-ը որտեղ է կարգադրում դնել ֆայլերը։

* Ծրագրերը հնարավոր է գործարկել միայն rendu պահոցում կամ դրա ենթապահոցներից մեկում։  

* Որոշ առաջադրանքների կատարման համար երևի թե պետք գա man-ը կարդալ․․․ 

* Ձեր աշխատանքը ստուգվելու է ծրագրով։ ՊԵՏՔ է ՏԱՌԱՑԻ հետևել հանձնարարված ֆայլերի/ուղիների(path)/ֆունկցիաների անուններին։

* Առաջադրանքներում միշտ նշված կլինի, թե որ ֆայլերն են պահանջվում։

  * Եթե առաջադրանքը որոշակի ֆայլեր պահանջի, դրանց անունները հստակ կնշվեն։ Օրինակ՝ file1.c, file1։

  * Հակառակ դեպքում, եթե ֆայլերի անունները և/կամ ֆայլերի քանակը ձեր ընտրությամբ է, առաջադրանքը այսպիսի մի բան կնշի՝*.c, *.h։

  * Եթե Makefile պահանջվի, սա ՄԻՇՏ հստակ կերպով նշված կլինի։ 

* Տեխնիկական խնդրի, նյութի վերաբերյալ հարցի կամ այլ խնդրի դեպքում պետք է ԼՈՒՌ վեր կենալ և սպասել մինչև աշխատակիցներից մեկը մոտենա ձեզ։ Կողքինին հարցնելը կամ անձնակազմի անդամներից մեկին բարձրաձայն կանչելը արգելված է։

* Եթե որևէ սարքավորում հստակ կերպով թույլատրված չէ, ուրեմն այն արգելված է։

* Եթե դուրս գաք, այլևս չեք կարող վերադառնալ։ 

* Անձնակազմի անդամները կարող են ձեզ առանց զգուշացման քննասենյակից դուրս վռնդել, եթե դա անհրաժեշտ համարեն։

* Թույլատրվում է ունենալ թղթի մաքուր էջեր և գրիչ։ Նոթատետրեր, նոթեր կամ այդ տեսակի բաներ չտեսնենք։ Այս քննությանը միայնակ պետք է դիմակայեք։

# Կոդավորման ուղեցույցներ 

* Կոդը միմիայն c-ով պետք է գրվի։ Բացառությամբ shell-ի առաջադրանքների։

* Նյութի պահոցում երբեմն ձեզ կտրամադրենք օգտակար ֆունկցիաներ ու ֆայլեր։ 

* Ստուգումը ամբողջովին ավտամատացված է և իրականացվելու է Deepthought անունով ծրագրով։

* Եթե առաջադրանքում պահանջվում է ծրագիր գրել մեկ կամ ավելի հստակ անուններով ֆայլերով, ծրագիրը պետք է կազմարկվի հետևյալ հրամանով՝clang -Wall -Wextra -Werror file1.c file2.c file3.c -o program_name։

* Եթե ֆայլի անունը ձեր ընտրությանն է թողնված, ծրագիրը պետք է կազմարկվի clang -Wall -Wextra -Werror *.c -o program_nae-ով։

* Վերջապես, եթե միայն ֆունկցիա է պետք հանձնել (այսինքն՝ մեկ ֆայլ), ծրագիրը կկազմարկվի clang -c -Wall -Wextra -Werror yourfile.c-ով, հետո մենք կկազմարկենք մեր main ֆունկցիան և կմիացնենք դրանք՝ թեստային ծրագիր ստեղծելու համար։

* Թույլատրված ֆունկցիաները նշված կլինեն առաջադրանքների վերնագրերում։ Կարող եք վերակոդավորել ցանկացած այլ ֆունկցիա, եթե անհրաժեշտ համարեք։ Հստակորեն չթույլատրված ֆունկցիայի օգտագործումը խարդախություն է համարվում և կհանգեցնի ձախողման՝ առանց որևէ քննարկման կամ բողոքարկման։ Այժմ արդեն զգուշացված եք։
 
* Եթե որևէ ֆունկցիա հստակ կերպով թույլատրված չէ, ուրեմն այն արգելված է։
