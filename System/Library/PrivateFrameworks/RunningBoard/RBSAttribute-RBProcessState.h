//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSAttribute (RBProcessState)
+ (_Bool)allowedForPrimitiveAttributeForProcessTarget:(id)arg1 withError:(id *)arg2;	// IMP=0x0060000000053f97
- (_Bool)preventsSuspension;	// IMP=0x0010000000054294
- (_Bool)hasMandatoryAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005428c
- (_Bool)allowedWithAttribute:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000054284
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000005427c
- (id)effectiveAttributesWithContext:(id)arg1;	// IMP=0x0010000000054260
- (void)applyToAcquisitionContext:(id)arg1;	// IMP=0x001000000005425a
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0010000000054254
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x001000000005424e
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0010000000054248
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0010000000054242
@end

