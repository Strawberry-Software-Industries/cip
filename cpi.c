#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f cpi.sh 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[3]))
	"\020\067\231\022\004\375\360\372\235\361\156\035\340\206\222\312"
	"\171\026\113\173\235\037\267\354\213\103\066\276"
#define      shll_z	10
#define      shll	((&data[29]))
	"\320\105\005\343\117\030\237\076\137\302\005"
#define      lsto_z	1
#define      lsto	((&data[39]))
	"\006"
#define      xecc_z	15
#define      xecc	((&data[42]))
	"\034\251\376\265\344\153\032\231\112\211\074\225\143\232\356\231"
	"\374"
#define      chk2_z	19
#define      chk2	((&data[58]))
	"\062\034\171\056\244\211\062\130\142\010\075\343\047\340\164\025"
	"\261\241\340\072\342\271\166\320"
#define      inlo_z	3
#define      inlo	((&data[81]))
	"\043\255\242"
#define      tst2_z	19
#define      tst2	((&data[86]))
	"\025\005\034\272\037\317\171\261\325\343\242\334\015\114\247\202"
	"\217\006\377\376\260\242"
#define      chk1_z	22
#define      chk1	((&data[110]))
	"\364\363\262\142\067\160\304\234\273\042\105\122\041\352\301\175"
	"\115\335\227\261\113\376\000\214\050\167\261\310\305\133\334"
#define      pswd_z	256
#define      pswd	((&data[138]))
	"\106\174\251\003\021\253\007\126\136\131\112\341\264\154\137\216"
	"\122\063\035\011\353\371\165\010\107\163\371\345\024\322\226\126"
	"\116\077\132\137\353\142\266\111\274\001\053\161\156\212\377\300"
	"\275\034\312\250\026\077\261\136\263\252\104\307\175\332\036\313"
	"\032\171\053\005\333\341\117\227\343\173\011\121\005\010\022\303"
	"\045\334\154\074\034\035\232\317\310\336\227\105\271\265\020\323"
	"\056\074\331\012\036\051\242\001\244\253\123\252\264\145\155\331"
	"\101\332\025\135\367\260\055\277\216\304\005\110\172\026\034\250"
	"\122\365\262\160\037\124\161\304\000\304\156\264\052\334\216\153"
	"\267\243\311\256\123\366\156\342\273\163\052\065\212\106\335\334"
	"\074\220\114\134\345\276\040\346\203\217\232\255\154\050\031\043"
	"\314\343\322\040\331\100\002\225\264\055\312\076\163\250\033\260"
	"\071\150\014\036\046\054\005\252\273\237\130\047\310\161\113\224"
	"\125\035\265\056\136\267\304\023\345\216\122\130\066\155\010\157"
	"\325\025\216\374\101\223\246\375\063\377\045\373\161\160\220\306"
	"\216\105\365\354\375\271\377\342\107\121\073\176\276\104\356\224"
	"\131\377\005\051\270\174\372\006\115\107\344\271\246\372\276\110"
	"\106\203\052\073\166\335\235\050\246\143\203\203\106\210\126\214"
	"\207\134\265\077\330\257\106\045\367\052\337\236\044\235\347\153"
	"\040\022\246\227\357\104"
#define      opts_z	1
#define      opts	((&data[447]))
	"\260"
#define      msg2_z	19
#define      msg2	((&data[448]))
	"\161\221\373\344\236\042\343\214\171\327\027\131\120\221\254\262"
	"\122\152\266\314\157\172\123"
#define      text_z	1646
#define      text	((&data[549]))
	"\244\340\331\311\330\004\250\166\050\106\135\224\147\160\073\377"
	"\137\200\277\365\050\003\016\026\317\176\221\042\111\302\266\355"
	"\243\217\267\173\223\140\362\274\247\120\121\017\300\214\016\040"
	"\014\316\026\065\321\044\113\240\243\335\303\355\237\171\332\102"
	"\011\222\276\235\363\260\132\232\001\254\251\301\071\270\306\011"
	"\100\152\337\054\045\345\055\066\143\364\244\351\330\206\066\131"
	"\101\031\040\142\174\020\111\310\334\326\370\155\113\205\041\247"
	"\126\266\317\361\163\027\252\314\314\273\232\141\233\330\104\122"
	"\157\162\142\267\214\103\101\114\107\030\253\254\266\263\176\205"
	"\032\117\342\176\246\131\127\160\142\140\367\321\040\121\172\153"
	"\345\225\333\170\174\167\014\077\207\361\103\103\233\207\130\356"
	"\130\261\034\265\302\244\261\264\234\330\104\376\363\036\117\075"
	"\267\100\374\351\240\213\216\354\177\105\202\143\272\367\366\340"
	"\154\146\211\376\346\216\320\100\167\122\137\364\257\062\260\031"
	"\052\152\356\277\153\110\071\333\323\107\162\041\224\057\011\057"
	"\067\275\130\355\022\224\071\035\071\337\265\207\215\166\327\332"
	"\053\241\300\162\032\053\000\176\353\114\255\055\261\064\172\073"
	"\351\173\220\375\264\325\153\352\240\323\111\061\133\037\347\312"
	"\375\246\344\324\116\347\171\372\157\014\013\003\116\062\057\357"
	"\121\225\057\241\046\077\203\220\261\174\271\312\101\154\010\120"
	"\025\264\111\110\146\353\212\014\255\263\261\077\040\324\173\374"
	"\015\355\133\026\155\350\013\360\245\116\121\352\367\351\205\062"
	"\320\261\232\227\352\317\223\220\356\245\036\134\152\314\235\243"
	"\155\024\165\263\115\150\107\126\005\132\001\056\142\140\365\324"
	"\021\350\016\315\172\146\070\222\054\323\124\231\007\012\056\272"
	"\073\231\257\363\222\146\221\140\066\122\303\047\260\357\352\036"
	"\145\343\271\213\316\104\212\065\210\355\121\377\367\073\364\120"
	"\120\235\256\103\170\253\172\372\314\170\151\062\172\226\204\133"
	"\231\170\013\311\353\124\146\356\273\266\303\320\142\236\023\113"
	"\027\356\333\277\342\225\074\045\152\151\317\342\257\143\244\356"
	"\262\042\010\124\152\227\247\303\036\215\072\321\342\150\333\237"
	"\033\370\310\122\225\257\052\213\227\003\351\067\266\334\210\106"
	"\122\304\267\170\360\026\352\051\207\143\206\205\351\161\316\056"
	"\315\216\303\140\120\142\166\126\253\001\272\152\017\014\336\336"
	"\155\126\372\277\273\015\032\110\245\130\305\174\245\177\242\215"
	"\310\132\163\343\155\272\362\371\256\033\040\003\103\240\274\133"
	"\331\170\370\322\317\171\337\267\321\163\075\153\245\127\005\146"
	"\115\155\222\142\156\322\261\313\344\024\264\112\332\006\167\217"
	"\301\246\313\105\075\126\162\156\072\254\162\045\070\360\051\374"
	"\066\034\232\265\000\235\260\077\010\115\217\346\323\065\215\223"
	"\025\074\246\315\262\363\255\117\166\234\164\131\277\126\022\057"
	"\376\246\001\066\017\202\357\274\371\264\002\377\040\373\110\055"
	"\217\100\311\034\262\301\023\211\367\141\026\022\213\164\060\127"
	"\316\261\160\103\035\122\103\062\363\024\074\276\336\153\251\064"
	"\007\053\161\164\007\302\036\227\167\042\126\042\076\031\157\214"
	"\013\332\246\361\050\141\056\267\362\351\207\101\272\325\244\375"
	"\321\066\001\341\165\044\176\252\271\345\235\167\002\177\236\176"
	"\357\102\336\004\340\300\034\256\000\007\136\251\014\337\122\341"
	"\305\033\117\132\156\077\115\047\221\266\205\275\247\235\333\366"
	"\357\207\006\050\037\264\132\205\362\077\156\371\262\075\260\320"
	"\266\151\031\156\301\127\131\346\301\374\073\173\155\072\373\262"
	"\061\251\067\026\372\221\303\361\201\171\041\230\236\306\053\034"
	"\272\215\176\317\351\164\331\323\220\011\255\255\160\105\101\235"
	"\104\237\203\204\106\364\252\243\010\032\174\332\165\163\223\141"
	"\020\307\352\305\337\155\271\300\140\165\160\270\320\035\100\224"
	"\056\125\044\074\230\354\033\117\173\307\335\024\065\273\045\236"
	"\077\175\057\033\067\247\334\005\020\110\360\207\271\257\216\135"
	"\272\245\123\304\372\355\070\106\217\136\155\040\177\133\264\037"
	"\170\237\015\001\312\136\151\114\174\335\352\032\041\224\143\150"
	"\070\045\042\364\170\366\275\274\013\047\110\364\160\075\034\246"
	"\175\342\206\346\170\011\142\336\260\006\076\047\112\013\373\337"
	"\130\066\146\173\036\067\120\350\122\353\234\142\065\011\002\001"
	"\000\053\271\255\272\136\364\164\052\227\143\012\100\023\323\253"
	"\264\362\300\177\146\066\061\173\122\144\210\055\132\045\357\002"
	"\127\065\365\224\057\377\271\337\262\175\007\272\341\124\253\146"
	"\070\005\375\134\023\315\057\302\241\326\305\310\006\034\304\264"
	"\262\120\127\212\103\002\207\271\311\051\144\273\227\103\333\262"
	"\061\047\212\355\010\016\366\017\140\251\217\015\071\302\062\214"
	"\101\101\354\101\350\322\044\222\072\355\377\064\372\037\123\172"
	"\027\365\175\327\020\102\375\212\244\034\301\142\140\004\057\057"
	"\036\136\344\362\243\152\336\235\032\076\277\004\303\034\112\052"
	"\333\033\107\210\303\031\371\243\213\361\151\375\022\273\313\052"
	"\004\257\266\232\272\122\366\347\356\207\034\240\326\123\074\213"
	"\367\102\330\065\050\236\331\214\057\335\242\140\351\120\054\245"
	"\252\171\262\025\236\007\015\267\100\056\270\011\200\155\227\017"
	"\321\025\235\342\032\375\374\361\106\303\264\144\270\254\242\106"
	"\156\120\030\111\160\143\215\065\117\201\325\163\264\347\306\146"
	"\017\377\233\342\265\262\001\166\236\164\200\225\377\040\367\006"
	"\171\201\351\352\205\235\004\014\367\141\310\213\250\320\247\052"
	"\273\126\347\057\314\076\014\374\342\214\050\144\057\044\362\251"
	"\236\362\230\343\202\163\240\254\242\036\030\326\320\111\253\077"
	"\250\073\016\254\243\366\365\025\054\242\136\005\341\165\032\206"
	"\256\133\134\201\364\172\024\154\041\052\020\256\047\067\366\176"
	"\335\043\254\010\211\127\343\077\012\213\223\052\374\065\265\166"
	"\055\232\075\102\223\350\056\245\061\276\202\060\137\203\227\232"
	"\170\122\105\230\176\177\203\225\304\253\162\167\151\310\214\123"
	"\211\115\005\204\334\131\327\274\026\277\274\262\172\345\111\377"
	"\041\307\117\155\300\220\022\042\042\247\063\216\234\256\052\230"
	"\340\346\266\333\233\276\340\223\057\065\070\131\247\012\215\270"
	"\224\200\374\224\025\247\357\116\251\014\301\247\052\206\327\200"
	"\215\307\322\343\240\373\323\314\220\360\160\321\044\274\071\336"
	"\364\071\020\020\105\325\100\015\325\174\356\304\114\125\047\040"
	"\123\073\006\270\336\242\102\364\273\343\030\234\060\254\255\230"
	"\320\030\051\367\375\315\004\233\254\254\064\355\042\002\171\233"
	"\362\170\303\067\342\366\015\143\266\204\352\163\270\144\012\175"
	"\265\072\301\333\065\056\245\352\364\314\154\050\274\034\020\174"
	"\363\107\263\361\372\361\033\212\337\315\345\351\343\215\130\110"
	"\172\175\126\215\051\273\101\376\023\250\016\346\303\135\024\032"
	"\222\241\133\140\226\065\355\310\105\060\136\143\271\202\336\040"
	"\371\000\355\174\236\007\376\217\250\065\163\313\357\032\055\365"
	"\327\045\170\275\216\137\142\331\252\164\161\120\360\161\033\173"
	"\304\053\274\360\332\006\055\245\027\340\154\021\006\022\021\254"
	"\304\075\330\127\240\350\043\164\046\106\025\236\047\325\240\320"
	"\005\121\345\062\312\061\146\264\217\024\270\127\264\374\232\340"
	"\337\065\046\175\304\021\232\254\371\340\217\305\327\253\175\046"
	"\056\063\240\123\054\245\204\332\304\016\064\170\010\347\360\014"
	"\226\207\177\337\363\200\171\227\343\033\303\156\113\336\227\367"
	"\005\304\145\042\000\031\136\040\321\165\105\356\342\105\206\370"
	"\173\130\034\307\370\300\244\274\255\104\066\210\206\100\032\105"
	"\335\016\365\070\251\367\344\123\271\035\013\233\143\222\223\336"
	"\352\260\245\343\160\112\237\035\216\326\245\024\026\300\132\364"
	"\317\117\054\170\107\020\313\000\056\327\233\222\151\056\160\124"
	"\337\026\070\117\140\330\155\357\256\023\004\304\324\136\270\243"
	"\256\345\033\365\365\347\365\044\276\220\266\050\277\047\175\236"
	"\076\265\356\237\215\134\216\073\157\222\000\103\360\270\347\237"
	"\235\003\224\223\352\211\270\251\032\157\322\332\226\117\171\325"
	"\004\147\164\222\304\003\315\063\226\316\167\207\207\136\046\045"
	"\141\272\270\114\104\161\366\136\340\310\071\167\027\262\114\034"
	"\032\301\256\336\304\174\022\132\112\211\341\321\350\010\366\112"
	"\302\257\226\006\041\214\145\001\124\237\171\154\121\306\211\154"
	"\207\070\112\114\265\135\246\000\346\210\321\316\220\310\030\123"
	"\170\257\131\231\074\277\233\221\136\024\375\260\332\207\034\142"
	"\277\147\256\165\304\125\165\253\335"
#define      rlax_z	1
#define      rlax	((&data[2432]))
	"\134"
#define      msg1_z	65
#define      msg1	((&data[2442]))
	"\210\102\033\041\176\332\275\017\071\051\045\334\324\046\023\044"
	"\131\034\007\233\242\254\251\352\015\161\070\225\331\247\225\047"
	"\321\350\060\243\365\230\220\203\012\233\025\030\174\272\365\134"
	"\206\156\246\072\204\112\111\161\155\054\004\317\144\116\037\103"
	"\261\077\340\274\132\134\120\342\320\334\322\015\352\255\224\006"
	"\017\124\156\276\312\063"
#define      date_z	1
#define      date	((&data[2519]))
	"\202"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
