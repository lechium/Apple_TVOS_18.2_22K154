//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface VoucherStore : NSObject
{
    NSMutableDictionary *_vouchers;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x002000000004e1b2
- (void).cxx_destruct;	// IMP=0x002000000004e5e4
- (void)usingVoucherForExternalID:(id)arg1 applyQOSClass:(unsigned int)arg2 executeBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000004e3fc
- (void)removeVoucherForExternalID:(id)arg1;	// IMP=0x001000000004e339
- (void)insertVoucher:(id)arg1 forExternalID:(id)arg2;	// IMP=0x001000000004e25d
- (id)init;	// IMP=0x001000000004e207

@end

