//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABLinkedContactsPredicate
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000055676
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005585f
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x0000000000055713
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x000000000005570b
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x0000000000055703
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000556fb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000556cc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005567e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

