//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSNGMKeyLoadingErrorContainer, NSDictionary, NSString;

@interface IDSNGMKeyLoadingMetric : NSObject
{
    _Bool _missingIdentity;	// 8 = 0x8
    _Bool _missingPrekey;	// 9 = 0x9
    IDSNGMKeyLoadingErrorContainer *_errorContainer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000034617e
@property(readonly, nonatomic) IDSNGMKeyLoadingErrorContainer *errorContainer; // @synthesize errorContainer=_errorContainer;
@property(readonly, nonatomic) _Bool missingPrekey; // @synthesize missingPrekey=_missingPrekey;
@property(readonly, nonatomic) _Bool missingIdentity; // @synthesize missingIdentity=_missingIdentity;
@property(readonly, nonatomic) unsigned short rtcType;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithErrorContainer:(id)arg1 missingIdentity:(_Bool)arg2 missingPrekey:(_Bool)arg3;	// IMP=0x0010000000345181

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

