//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (MobileInstallationAdditions)
+ (id)MI_dictionaryByMergingDictionaries:(id)arg1;	// IMP=0x0080000000013859
+ (id)MI_dictionaryWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00800000000136b1
- (_Bool)MI_writeAtomicallyToURLMatchingCurrentFileMetadata:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000013ac5
- (_Bool)MI_writeToURL:(id)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00100000000139d0
@end

