
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: ISC
 */

 

 
 
 
 
 
 
 
 


#ifndef _HE_SIG_B2_MU_INFO_H_
#define _HE_SIG_B2_MU_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

#define NUM_OF_DWORDS_HE_SIG_B2_MU_INFO 2


struct he_sig_b2_mu_info {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t sta_id                                                  : 11,  
                      sta_spatial_config                                      :  4,  
                      sta_mcs                                                 :  4,  
                      reserved_set_to_1                                       :  1,  
                      sta_coding                                              :  1,  
                      reserved_0a                                             :  7,  
                      nsts                                                    :  3,  
                      rx_integrity_check_passed                               :  1;  
             uint32_t user_order                                              :  8,  
                      cc_mask                                                 :  8,  
                      reserved_1a                                             : 16;  
#else
             uint32_t rx_integrity_check_passed                               :  1,  
                      nsts                                                    :  3,  
                      reserved_0a                                             :  7,  
                      sta_coding                                              :  1,  
                      reserved_set_to_1                                       :  1,  
                      sta_mcs                                                 :  4,  
                      sta_spatial_config                                      :  4,  
                      sta_id                                                  : 11;  
             uint32_t reserved_1a                                             : 16,  
                      cc_mask                                                 :  8,  
                      user_order                                              :  8;  
#endif
};


 

#define HE_SIG_B2_MU_INFO_STA_ID_OFFSET                                             0x00000000
#define HE_SIG_B2_MU_INFO_STA_ID_LSB                                                0
#define HE_SIG_B2_MU_INFO_STA_ID_MSB                                                10
#define HE_SIG_B2_MU_INFO_STA_ID_MASK                                               0x000007ff


 

#define HE_SIG_B2_MU_INFO_STA_SPATIAL_CONFIG_OFFSET                                 0x00000000
#define HE_SIG_B2_MU_INFO_STA_SPATIAL_CONFIG_LSB                                    11
#define HE_SIG_B2_MU_INFO_STA_SPATIAL_CONFIG_MSB                                    14
#define HE_SIG_B2_MU_INFO_STA_SPATIAL_CONFIG_MASK                                   0x00007800


 

#define HE_SIG_B2_MU_INFO_STA_MCS_OFFSET                                            0x00000000
#define HE_SIG_B2_MU_INFO_STA_MCS_LSB                                               15
#define HE_SIG_B2_MU_INFO_STA_MCS_MSB                                               18
#define HE_SIG_B2_MU_INFO_STA_MCS_MASK                                              0x00078000


 

#define HE_SIG_B2_MU_INFO_RESERVED_SET_TO_1_OFFSET                                  0x00000000
#define HE_SIG_B2_MU_INFO_RESERVED_SET_TO_1_LSB                                     19
#define HE_SIG_B2_MU_INFO_RESERVED_SET_TO_1_MSB                                     19
#define HE_SIG_B2_MU_INFO_RESERVED_SET_TO_1_MASK                                    0x00080000


 

#define HE_SIG_B2_MU_INFO_STA_CODING_OFFSET                                         0x00000000
#define HE_SIG_B2_MU_INFO_STA_CODING_LSB                                            20
#define HE_SIG_B2_MU_INFO_STA_CODING_MSB                                            20
#define HE_SIG_B2_MU_INFO_STA_CODING_MASK                                           0x00100000


 

#define HE_SIG_B2_MU_INFO_RESERVED_0A_OFFSET                                        0x00000000
#define HE_SIG_B2_MU_INFO_RESERVED_0A_LSB                                           21
#define HE_SIG_B2_MU_INFO_RESERVED_0A_MSB                                           27
#define HE_SIG_B2_MU_INFO_RESERVED_0A_MASK                                          0x0fe00000


 

#define HE_SIG_B2_MU_INFO_NSTS_OFFSET                                               0x00000000
#define HE_SIG_B2_MU_INFO_NSTS_LSB                                                  28
#define HE_SIG_B2_MU_INFO_NSTS_MSB                                                  30
#define HE_SIG_B2_MU_INFO_NSTS_MASK                                                 0x70000000


 

#define HE_SIG_B2_MU_INFO_RX_INTEGRITY_CHECK_PASSED_OFFSET                          0x00000000
#define HE_SIG_B2_MU_INFO_RX_INTEGRITY_CHECK_PASSED_LSB                             31
#define HE_SIG_B2_MU_INFO_RX_INTEGRITY_CHECK_PASSED_MSB                             31
#define HE_SIG_B2_MU_INFO_RX_INTEGRITY_CHECK_PASSED_MASK                            0x80000000


 

#define HE_SIG_B2_MU_INFO_USER_ORDER_OFFSET                                         0x00000004
#define HE_SIG_B2_MU_INFO_USER_ORDER_LSB                                            0
#define HE_SIG_B2_MU_INFO_USER_ORDER_MSB                                            7
#define HE_SIG_B2_MU_INFO_USER_ORDER_MASK                                           0x000000ff


 

#define HE_SIG_B2_MU_INFO_CC_MASK_OFFSET                                            0x00000004
#define HE_SIG_B2_MU_INFO_CC_MASK_LSB                                               8
#define HE_SIG_B2_MU_INFO_CC_MASK_MSB                                               15
#define HE_SIG_B2_MU_INFO_CC_MASK_MASK                                              0x0000ff00


 

#define HE_SIG_B2_MU_INFO_RESERVED_1A_OFFSET                                        0x00000004
#define HE_SIG_B2_MU_INFO_RESERVED_1A_LSB                                           16
#define HE_SIG_B2_MU_INFO_RESERVED_1A_MSB                                           31
#define HE_SIG_B2_MU_INFO_RESERVED_1A_MASK                                          0xffff0000



#endif    
