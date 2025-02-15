//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class MISSING_TYPE, NSMutableDictionary;

@interface CKKSPowerCollection : NSOperation
{
    NSMutableDictionary *_store;	// 8 = 0x8
    NSMutableDictionary *_delete;	// 16 = 0x10
}

+ (void)OTPowerEvent:(id)arg1;	// IMP=0x0040000000041c5b
+ (void)CKKSPowerEvent:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x0010000000041b7c
+ (MISSING_TYPE *)CKKSPowerEvent:zone:count: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000041a73
+ (void)CKKSPowerEvent:(id)arg1 zone:(id)arg2;	// IMP=0x00100000000419a8
- (void).cxx_destruct;	// IMP=0x0020000000041977
@property(retain) NSMutableDictionary *delete; // @synthesize delete=_delete;
@property(retain) NSMutableDictionary *store; // @synthesize store=_store;
- (void)commit;	// IMP=0x00100000000418cf
- (void)summary:(id)arg1 stats:(id)arg2;	// IMP=0x00100000000416cc
- (void)deletedOQE:(id)arg1;	// IMP=0x0010000000041670
- (void)storedOQE:(id)arg1;	// IMP=0x0010000000041614
- (void)addToStatsDictionary:(id)arg1 key:(id)arg2;	// IMP=0x0010000000041548
- (id)init;	// IMP=0x001000000004149d

@end

