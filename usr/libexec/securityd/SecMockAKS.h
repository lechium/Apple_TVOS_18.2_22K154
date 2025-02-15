//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SecMockAKS : NSObject
{
}

+ (void)updateOperationsUntilUnlock;	// IMP=0x002000000000df87
+ (void)setOperationsUntilUnlock:(int)arg1;	// IMP=0x001000000000df7b
+ (id)popDecryptRefKeyFailure;	// IMP=0x001000000000ded9
+ (void)resetDecryptRefKeyFailures;	// IMP=0x001000000000de91
+ (void)failNextDecryptRefKey:(id)arg1;	// IMP=0x001000000000ddd6
+ (void)unlockAllClasses;	// IMP=0x001000000000dd66
+ (void)lockClassA_C;	// IMP=0x001000000000dcf6
+ (void)lockClassA;	// IMP=0x001000000000dc86
+ (_Bool)useGenerationCount;	// IMP=0x001000000000dc7e
+ (_Bool)isSEPDown;	// IMP=0x001000000000dc76
+ (_Bool)forceUnwrapKeyDecodeFailure;	// IMP=0x001000000000dc6e
+ (_Bool)forceInvalidPersona;	// IMP=0x001000000000dc66
+ (_Bool)isLocked:(int)arg1;	// IMP=0x001000000000db90
+ (void)reset;	// IMP=0x001000000000db20
+ (void)setKeybag_state:(unsigned int)arg1;	// IMP=0x001000000000db14
+ (unsigned int)keybag_state;	// IMP=0x001000000000db08
+ (id)mutabilityQueue;	// IMP=0x001000000000dad8
+ (id)lockedStates;	// IMP=0x001000000000da8b
+ (void)trapdoor;	// IMP=0x001000000000da67

@end

