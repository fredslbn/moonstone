/* Copyright (c) 2018-2020, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/list.h>
#include "rmnet_descriptor.h"
#include "rmnet_offload_main.h"
#include "rmnet_offload_engine.h"
#include "rmnet_offload_stats.h"
#include "rmnet_offload_knob.h"
union DATARMNETe0a7777e12{struct DATARMNETd2991e8952 DATARMNETe31a04a369;u8 
DATARMNET021aa8e68d[(0xf07+1090-0x130d)];};static bool DATARMNET2818ea93ec(
struct DATARMNETd812bcdbb5*DATARMNET5fe4c722a8){struct DATARMNETd2991e8952*
DATARMNET2e7cc88971,DATARMNETd1ff6cd568;__be32 DATARMNETa8eeab014d;u8 
DATARMNETfb0677cc3c;DATARMNET2e7cc88971=rmnet_frag_header_ptr(
DATARMNET5fe4c722a8->DATARMNET719f68fb88,DATARMNET5fe4c722a8->
DATARMNET144d119066.DATARMNET4ca5ac9de1,sizeof(*DATARMNET2e7cc88971),&
DATARMNETd1ff6cd568);if(!DATARMNET2e7cc88971)return true;DATARMNETa8eeab014d=
(0xbf7+4796-0x1e04);DATARMNETfb0677cc3c=DATARMNET2e7cc88971->DATARMNETd570802f3d
;if(DATARMNET5fe4c722a8->DATARMNET719f68fb88->tcp_flags_set)DATARMNETfb0677cc3c=
(u8)ntohs(DATARMNET5fe4c722a8->DATARMNET719f68fb88->tcp_flags);if((!
DATARMNET5fe4c722a8->DATARMNET1ef22e4c76&&(DATARMNETfb0677cc3c&
(0xeb7+1158-0x132d)))||(DATARMNETfb0677cc3c&DATARMNETa8eeab014d))return true;
return false;}static bool DATARMNET829fcf5939(struct DATARMNETd7c9631acd*
DATARMNETaa568481cf,struct DATARMNETd812bcdbb5*DATARMNET5fe4c722a8){union 
DATARMNETe0a7777e12*DATARMNET699c2c62cd,DATARMNETee66845de4;union 
DATARMNETe0a7777e12*DATARMNET8814564ab9,DATARMNETa27d4d22be;struct 
rmnet_frag_descriptor*DATARMNET48cfce4de4;u32 DATARMNET3c3abe9e2c,
DATARMNETefc9df3df2;DATARMNET48cfce4de4=list_first_entry(&DATARMNETaa568481cf->
DATARMNETb76b79d0d5,struct rmnet_frag_descriptor,list);DATARMNET699c2c62cd=
rmnet_frag_header_ptr(DATARMNET48cfce4de4,DATARMNETaa568481cf->
DATARMNET78fd20ce0e.DATARMNET4ca5ac9de1,DATARMNETaa568481cf->DATARMNET78fd20ce0e
.DATARMNET0aeee57ceb,&DATARMNETee66845de4);if(!DATARMNET699c2c62cd)return true;
DATARMNET8814564ab9=rmnet_frag_header_ptr(DATARMNET5fe4c722a8->
DATARMNET719f68fb88,DATARMNET5fe4c722a8->DATARMNET144d119066.DATARMNET4ca5ac9de1
,DATARMNET5fe4c722a8->DATARMNET144d119066.DATARMNET0aeee57ceb,&
DATARMNETa27d4d22be);if(!DATARMNET8814564ab9)return true;DATARMNET3c3abe9e2c=
DATARMNET699c2c62cd->DATARMNETe31a04a369.DATARMNETcf2e43ad69*(0xd11+230-0xdf3);
if(DATARMNET8814564ab9->DATARMNETe31a04a369.DATARMNETcf2e43ad69*
(0xd11+230-0xdf3)!=DATARMNET3c3abe9e2c)return true;for(DATARMNETefc9df3df2=
sizeof(DATARMNET699c2c62cd->DATARMNETe31a04a369);DATARMNETefc9df3df2<
DATARMNET3c3abe9e2c;DATARMNETefc9df3df2+=(0xd11+230-0xdf3)){if(*(u32*)(
DATARMNET699c2c62cd->DATARMNET021aa8e68d+DATARMNETefc9df3df2)^*(u32*)(
DATARMNET8814564ab9->DATARMNET021aa8e68d+DATARMNETefc9df3df2))return true;}
return false;}static int DATARMNET9a13d70865(struct DATARMNETd7c9631acd*
DATARMNETaa568481cf,struct DATARMNETd812bcdbb5*DATARMNET5fe4c722a8){u64 
DATARMNET7457d496cb;u32 DATARMNET95acece3fc;if(DATARMNET2818ea93ec(
DATARMNET5fe4c722a8)){DATARMNETa00cda79d0(DATARMNETb322de38be);return 
DATARMNET7af645849a;}if(!DATARMNETaa568481cf->DATARMNET1db11fa85e)return 
DATARMNET0413b43080;if(DATARMNET829fcf5939(DATARMNETaa568481cf,
DATARMNET5fe4c722a8)){DATARMNETa00cda79d0(DATARMNET38317c7efd);return 
DATARMNETb0bd5db24d;}if(DATARMNET5fe4c722a8->DATARMNET144d119066.
DATARMNETbc28a5970f^DATARMNETaa568481cf->DATARMNET78fd20ce0e.DATARMNETbc28a5970f
){DATARMNETa00cda79d0(DATARMNET31c0e41f5a);return DATARMNET7af645849a;}
DATARMNET95acece3fc=(DATARMNET5fe4c722a8->DATARMNET719f68fb88->gso_size)?:
DATARMNET5fe4c722a8->DATARMNET1ef22e4c76;if(DATARMNET95acece3fc!=
DATARMNETaa568481cf->DATARMNET1978d5d8de){DATARMNETa00cda79d0(
DATARMNET0cd1fa0d98);return DATARMNETb0bd5db24d;}DATARMNET7457d496cb=
DATARMNETf1d1b8287f(DATARMNETdf66588a73);if(DATARMNET5fe4c722a8->
DATARMNET1ef22e4c76+DATARMNETaa568481cf->DATARMNETcf28ae376b>=
DATARMNET7457d496cb){DATARMNETa00cda79d0(DATARMNET1c0d243816);return 
DATARMNETb0bd5db24d;}DATARMNET5fe4c722a8->DATARMNETf1b6b0a6cc=false;return 
DATARMNET0413b43080;}bool DATARMNET4c7cdc25b7(struct DATARMNETd7c9631acd*
DATARMNETaa568481cf,struct DATARMNETd812bcdbb5*DATARMNET5fe4c722a8,bool 
DATARMNETd87669e323){int DATARMNETb14e52a504;if(DATARMNETd87669e323){
DATARMNETa00cda79d0(DATARMNET47a963957c);DATARMNETa3055c21f2(DATARMNETaa568481cf
);DATARMNET19d190f2bd(DATARMNET5fe4c722a8);return true;}DATARMNETb14e52a504=
DATARMNET9a13d70865(DATARMNETaa568481cf,DATARMNET5fe4c722a8);if(
DATARMNETb14e52a504==DATARMNET0413b43080){DATARMNET33aa5df9ef(
DATARMNETaa568481cf,DATARMNET5fe4c722a8);}else if(DATARMNETb14e52a504==
DATARMNETb0bd5db24d){DATARMNETa3055c21f2(DATARMNETaa568481cf);
DATARMNET33aa5df9ef(DATARMNETaa568481cf,DATARMNET5fe4c722a8);}else{
DATARMNETa3055c21f2(DATARMNETaa568481cf);DATARMNET19d190f2bd(DATARMNET5fe4c722a8
);}return true;}
