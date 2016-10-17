#CMAKE_MINIMUM_REQUIRED(VERSION 2.8.0)
CMAKE_MINIMUM_REQUIRED(VERSION 3.0.0)

include_directories( ./libcommon )

file(GLOB libcommon libcommon/*.c)

file(GLOB banner banner/*.c)
add_executable(banner ${banner})

file(GLOB basename basename/*.c)
add_executable(basename ${basename})
target_compile_definitions(basename PRIVATE UCB=1)

file(GLOB cal cal/*.c)
add_executable(cal ${cal})

file(GLOB calendar calendar/*.c)
add_executable(calendar ${calendar})

file(GLOB cat cat/*.c libcommon/ib*.c libcommon/ob*.c)
add_executable(cat ${cat})

file(GLOB chmod chmod/*.c)
add_executable(chmod ${chmod})
target_compile_definitions(chmod PRIVATE SUS=1)

file(GLOB chown chown/*.c)
add_executable(chown ${chown})
target_compile_definitions(chown PRIVATE UCB=1)

file(GLOB cksum cksum/*.c)
add_executable(cksum ${cksum})

file(GLOB cmp cmp/*.c)
add_executable(cmp ${cmp})

file(GLOB col col/*.c libcommon/ib*.c)
add_executable(col ${col})

file(GLOB comm comm/*.c libcommon/ib*.c)
add_executable(comm ${comm})

file(GLOB copy copy/*.c)
add_executable(copy ${copy})

file(GLOB cp cp/*.c)
add_executable(cp ${cp})

file(GLOB cut cut/*.c libcommon/ib*.c)
add_executable(cut ${cut})

file(GLOB env env/*.c)
add_executable(env ${env})

file(GLOB expand expand/e*.c expand/t*.c libcommon/ib*.c)
add_executable(expand ${expand})
file(GLOB unexpand expand/u*.c expand/t*.c libcommon/ib*.c)
add_executable(unexpand ${unexpand})

file(GLOB find find/*.c)
add_executable(find ${find} libcommon/getdir.c libcommon/gmatch.c libcommon/sysv3.c)

file(GLOB fold fold/*.c libcommon/ib*.c)
add_executable(fold ${fold})

file(GLOB groups groups/*.c)
add_executable(groups ${groups})
target_compile_definitions(groups PRIVATE UCB=1)

file(GLOB hd hd/*.c)
add_executable(hd ${hd})

file(GLOB head head/*.c libcommon/ib*.c)
add_executable(head ${head})

file(GLOB hostname hostname/*.c)
add_executable(hostname ${hostname})

file(GLOB id id/*.c)
add_executable(id ${id})

file(GLOB line line/*.c)
add_executable(line ${line})

file(GLOB listusers listusers/*.c)
add_executable(listusers ${listusers})

file(GLOB ln ln/*.c)
add_executable(ln ${ln})

file(GLOB logname logname/*.c)
add_executable(logname ${logname})

file(GLOB mkdir mkdir/*.c)
add_executable(mkdir ${mkdir})

file(GLOB mkfifo mkfifo/*.c)
add_executable(mkfifo ${mkfifo})

file(GLOB mknod mknod/*.c)
add_executable(mknod ${mknod})

file(GLOB news news/*.c libcommon/ib*.c libcommon/ob*.c)
add_executable(news ${news})

file(GLOB nice nice/*.c)
add_executable(nice ${nice})

file(GLOB nohup nohup/*.c)
add_executable(nohup ${nohup})

file(GLOB psrinfo psrinfo/*.c)
add_executable(psrinfo ${psrinfo})

file(GLOB ptime time/*.c)
add_executable(ptime ${ptime})
target_compile_definitions(ptime PRIVATE PTIME=1)

file(GLOB pwd pwd/*.c)
add_executable(pwd ${pwd})

file(GLOB random random/*.c)
add_executable(random ${random})

file(GLOB renice renice/*.c)
add_executable(renice ${renice})

file(GLOB rm rm/*.c)
add_executable(rm ${rm} libcommon/getdir.c libcommon/sysv3.c)

file(GLOB rmdir rmdir/*.c)
add_executable(rmdir ${rmdir})

file(GLOB sdiff sdiff/*.c libcommon/ib*.c)
add_executable(sdiff ${sdiff})

file(GLOB sed sed/*.c)
add_executable(sed ${sed})

file(GLOB setpgrp setpgrp/*.c)
add_executable(setpgrp ${setpgrp})

file(GLOB sleep sleep/*.c)
add_executable(sleep ${sleep})

file(GLOB sort sort/*.c)
add_executable(sort ${sort})

#START SPELL: spell spellin hashcheck hashmake
file(GLOB spell spell/ha*h.c spell/ha*ok.c spell/hu*.c spell/sp*og.c)
add_executable(spell ${spell})

file(GLOB spellin spell/ha*h.c spell/ha*ok.c spell/hu*.c spell/sp*in.c)
add_executable(spell_spellin ${spellin})

file(GLOB hashcheck spell/ha*h.c spell/ha*k.c spell/hu*.c)
add_executable(spell_hashcheck ${hashcheck})

file(GLOB hashmake spell/ha*h.c spell/ha*ok.c spell/hu*.c spell/ha*ke.c)
add_executable(spell_hashmake ${hashmake})
#END SPELL

file(GLOB split split/*.c)
add_executable(split ${split})

file(GLOB sum sum/*.c)
add_executable(sum ${sum})
target_compile_definitions(sum PRIVATE UCB=1)

file(GLOB sync sync/*.c)
add_executable(sync ${sync})

file(GLOB tail tail/*.c)
add_executable(tail ${tail})

file(GLOB tee tee/*.c)
add_executable(tee ${tee})

file(GLOB time time/*.c)
add_executable(time ${time})

file(GLOB touch touch/*.c)
add_executable(touch ${touch})

file(GLOB tr tr/*.c libcommon/ib*.c)
add_executable(tr ${tr})

file(GLOB uname uname/*.c)
add_executable(uname ${uname})

file(GLOB users users/*.c)
add_executable(users ${users})

file(GLOB wc wc/*.c libcommon/ib*.c)
add_executable(wc ${wc})

file(GLOB xargs xargs/*.c libcommon/ib*.c)
add_executable(xargs ${xargs})

file(GLOB yes yes/*.c)
add_executable(yes ${yes})

#target_compile_definitions(my_target PRIVATE FOO=1 BAR=1)
