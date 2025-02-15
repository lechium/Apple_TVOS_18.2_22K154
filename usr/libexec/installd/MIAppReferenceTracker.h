//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MIAppReferenceTracker : NSObject
{
    unsigned long long _domain;	// 8 = 0x8
}

+ (id)managerForInstallationDomain:(unsigned long long)arg1;	// IMP=0x0040000000054d1f
@property(readonly, nonatomic) unsigned long long domain; // @synthesize domain=_domain;
- (void)enumerateAppReferencesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000055137
- (_Bool)revokeTemporaryReference:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000550cc
- (_Bool)finalizeTemporaryReference:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000055061
- (id)addTemporaryReferenceForIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000054ff6
- (_Bool)removeReferenceForIdentity:(id)arg1 waitingForSpaceReclaimation:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000054f8b
- (_Bool)addReferenceForIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000054f20
- (_Bool)referenceExists:(_Bool *)arg1 forIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000054eb5
- (id)initForInstallationDomain:(unsigned long long)arg1;	// IMP=0x0010000000054e78

@end

